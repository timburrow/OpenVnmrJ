// Copyright (C) 2015  University of Oregon
// You may distribute under the terms of either the GNU General Public
// License or the Apache License, as specified in the LICENSE file.
// For more information, see the LICENSE file.
char *SCCSid_swtune_c(){
}
#include <standard.h>

#include "acodes.h"

pre_fidsequence()
{
    int chan;
    int attn;

    chan = 1;			/* Use channel 1 frequency to start */
    if (find("tupwr") == -1){	/* Optional parameter "tupwr" sets tune pwr */
	attn = 60;
    }else{
	attn = (int)getval("tupwr");
    }

    /* Start tune mode */
    putcode(TUNE_START);
    putcode(chan);
    putcode(attn);
    delay(0.01);
}

pulsesequence()
{
    int i;
    double df;
    double f;
    double *freqs;
    double fstart;
    double fend;
    double tunesw;
    int ppfreq;			/* Samples per frequency */
    int nfreqs;

    tunesw = getval( "tunesw" );
    if (tunesw < 0.0)
      tunesw = 1.0e7;

/* start with a sweep of with sw, centered on sfrq.
   sfrq is in units of MHz; sw in Hz.
   fstart and fend must be in MHz			*/

    fstart = sfrq - (tunesw/2) * 1e-6;
    fend = sfrq + (tunesw/2) * 1e-6;
    ppfreq = 2;

    nfreqs = np / (2 * ppfreq);
    freqs = (double *)malloc(sizeof(double) * nfreqs);
    df = (fend - fstart) / (nfreqs - 1);
    for (i=0, f=fstart; i<nfreqs; i++, f+=df){
	freqs[i] = f;
    }
    create_freq_list(freqs, nfreqs, TODEV, 0);
    free(freqs);
    initval((double)nfreqs, v1);

    rcvron();
    loop(v1, v2);{
	vfreq(0, v2);
	delay(0.001);
	acquire((double)(2 * ppfreq), 0.001);
    }endloop(v2);
}