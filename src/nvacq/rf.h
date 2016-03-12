/*
 * Copyright (C) 2015  University of Oregon
 *
 * You may distribute under the terms of either the GNU General Public
 * License or the Apache License, as specified in the LICENSE file.
 *
 * For more information, see the LICENSE file.
 */
/*
 */
/*
 *    This rf.h (aka rf_reg.h) file is auto generated via beyond-circuits's SVN make base on the
 *    RF FPGA verilog source
 *    It's place in our repository for consistency with our software, and build environment
 *    Greg Brissey  4/2/2010
 */

#ifndef __RF_H__
#define __RF_H__

#include "fpga.h"
/*
#ifndef get_field
  #define get_field(fpga,field) \
    ((*((volatile unsigned *)(fpga##_BASE + fpga##_##field##_addr))>> \
    fpga##_##field##_pos) & (((fpga##_##field##_width<32) ? (1<<fpga##_##field##_width):0)-1))
#endif
#ifndef set_field
  #define set_field(fpga,field,value) \
    ((*((volatile unsigned *)(fpga##_BASE + fpga##_##field##_addr))) = \
    (*((volatile unsigned *)(fpga##_BASE + fpga##_##field##_addr))) & \
    ~((((fpga##_##field##_width<32)?(1<<fpga##_##field##_width):0)-1)<<fpga##_##field##_pos) | \
    ((value&(((fpga##_##field##_width<32)?(1<<fpga##_##field##_width):0)-1))<<fpga##_##field##_pos))
#endif
*/

#ifndef icat_get_field
  #define __icat_get_field(fpga,field,value) \
    (((value)>>fpga##_##field##_pos)&((1<<fpga##_##field##_width)-1))
  #define icat_get_field(fpga,field,value) __icat_get_field(fpga,field,value)
#endif
#ifndef icat_set_field
  #define __icat_set_field(fpga,field,value) \
    (((value)&((1<<fpga##_##field##_width)-1))<<fpga##_##field##_pos)
  #define icat_set_field(fpga,field,value) __icat_set_field(fpga,field,value)
#endif
#ifndef icat_get_field_width
  #define __icat_get_field_width(fpga,field) fpga##_##field##_width
  #define icat_get_field_width(fpga,field) __icat_get_field_width(fpga,field)
#endif
#ifndef icat_get_field_addr
  #define __icat_get_field_addr(fpga,field) fpga##_##field##_addr
  #define icat_get_field_addr(fpga,field) __icat_get_field_addr(fpga,field)
#endif

#define RF_CHECKSUM 20707
#define RF_ID 0x0
#define RF_LED 0x4
#define RF_BoardAddress 0x8
#define RF_InterfaceType 0xC
#define RF_Failure 0x10
#define RF_DMARequest 0x14
#define RF_SCLKClockControl 0x18
#define RF_SCLKClockStatus 0x1C
#define RF_FIFOControl 0x20
#define RF_FIFOStatus 0x24
#define RF_InstructionFIFOHighThreshold 0x28
#define RF_InstructionFIFOLowThreshold 0x2C
#define RF_InstructionFIFOCount 0x30
#define RF_DataFIFOCount 0x34
#define RF_ClearCumulativeDuration 0x38
#define RF_CumulativeDurationLow 0x3C
#define RF_CumulativeDurationHigh 0x40
#define RF_J1COutput 0x44
#define RF_J1CEnable 0x48
#define RF_J1CInput 0x4C
#define RF_J2COutput 0x50
#define RF_J2CEnable 0x54
#define RF_J2CInput 0x58
#define RF_InterruptStatus 0x5C
#define RF_InterruptEnable 0x60
#define RF_InterruptClear 0x64
#define RF_InstructionFifoCountTotal 0x68
#define RF_ClearInstructionFifoCountTotal 0x6C
#define RF_AMTRead 0x70
#define RF_XOutDelay 0x74
#define RF_PhaseDelay 0x78
#define RF_AmpDelay 0x7C
#define RF_PhaseBias 0x80
#define RF_AmpBias 0x84
#define RF_CalibratePhase 0x88
#define RF_SoftwarePhase 0x8C
#define RF_SoftwareAmp 0x90
#define RF_SoftwareGates 0x94
#define RF_SoftwareUser 0x98
#define RF_SoftwareAUX 0x9C
#define RF_SoftwareAUXReset 0xA0
#define RF_SoftwareAUXStrobe 0xA4
#define RF_FIFOOutputSelect 0xA8
#define RF_FIFOPhase 0xAC
#define RF_FIFOAmp 0xB0
#define RF_FIFOGates 0xB4
#define RF_FIFOUser 0xB8
#define RF_FIFOAUX 0xBC
#define RF_AUXRead 0xC0
#define RF_Duration 0xC4
#define RF_Gates 0xC8
#define RF_Phase 0xCC
#define RF_PhaseIncrement 0xD0
#define RF_PhaseCount 0xD4
#define RF_PhaseClear 0xD8
#define RF_PhaseC 0xDC
#define RF_PhaseCIncrement 0xE0
#define RF_PhaseCCount 0xE4
#define RF_PhaseCClear 0xE8
#define RF_Amp 0xEC
#define RF_AmpIncrement 0xF0
#define RF_AmpCount 0xF4
#define RF_AmpClear 0xF8
#define RF_AmpScale 0xFC
#define RF_AmpScaleIncrement 0x100
#define RF_AmpScaleCount 0x104
#define RF_AmpScaleClear 0x108
#define RF_User 0x10C
#define RF_FIFOInstructionWrite 0x110
#define RF_XmitSpiOut 0x114
#define RF_XmitSpiIn 0x118
#define RF_ClearChecksums 0x11C
#define RF_PhaseChecksum 0x120
#define RF_AmpChecksum 0x124
#define RF_FifoGateChecksum 0x128
#define RF_TXDChecksum 0x12C
#define RF_InvalidInstruction 0x130
#define RF_TransmitterMode 0x134
#define RF_DCMRst 0x138
#define RF_EnableInterfaceRobustness 0x13C
#define RF_InterfaceRobustnessPeriod 0x140
#define RF_P2Delay 0x144
#define RF_LoopBufferControl 0x148
#define RF_NumLoops 0x14C
#define RF_LinearizationControl 0x150
#define RF_LinearizedAmpValue 0x154
#define RF_LinearizedPhaseValue 0x158
#define RF_CurrentAtten 0x15C
#define RF_CurrentLinearizationTable 0x160
#define RF_CurrentMappedAtten 0x164
#define RF_LinearizedAmpScale 0x168
#define RF_OPBDiagControl 0x16C
#define RF_OPBAvg0 0x170
#define RF_OPBAvg1 0x174
#define RF_OPBAvg2 0x178
#define RF_OPBAvg3 0x17C
#define RF_InvalidInstructionCount 0x180
#define RF_CapturedInstructionFifofCount 0x184
#define RF_CapturedDataFifofCount 0x188
#define RF_DebugVersion 0x18C
#define RF_AttenMappingTable 0x400
#define RF_TPowerMappingTable 0x800
#define RF_LinearizationScaleTable 0xC00
#define RF_AmpLinearizationTable 0x4000
#define RF_PhaseLinearizationTable 0x8000
#define RF_ID_addr 0x0
#define RF_ID_pos 0
#define RF_ID_width 4
#define RF_revision_addr 0x0
#define RF_revision_pos 4
#define RF_revision_width 4
#define RF_checksum_addr 0x0
#define RF_checksum_pos 8
#define RF_checksum_width 16
#define RF_led_addr 0x4
#define RF_led_pos 0
#define RF_led_width 6
#define RF_bd_addr_addr 0x8
#define RF_bd_addr_pos 0
#define RF_bd_addr_width 5
#define RF_type_addr_addr 0xC
#define RF_type_addr_pos 0
#define RF_type_addr_width 3
#define RF_sw_failure_addr 0x10
#define RF_sw_failure_pos 0
#define RF_sw_failure_width 1
#define RF_sw_warning_addr 0x10
#define RF_sw_warning_pos 1
#define RF_sw_warning_width 1
#define RF_dma_request_addr 0x14
#define RF_dma_request_pos 0
#define RF_dma_request_width 1
#define RF_sclk_rst_addr 0x18
#define RF_sclk_rst_pos 0
#define RF_sclk_rst_width 1
#define RF_sclk_psincdec_addr 0x18
#define RF_sclk_psincdec_pos 1
#define RF_sclk_psincdec_width 1
#define RF_sclk_psen_addr 0x18
#define RF_sclk_psen_pos 2
#define RF_sclk_psen_width 1
#define RF_sclk_psclk_addr 0x18
#define RF_sclk_psclk_pos 3
#define RF_sclk_psclk_width 1
#define RF_sclk_locked_addr 0x1C
#define RF_sclk_locked_pos 0
#define RF_sclk_locked_width 1
#define RF_sclk_psdone_addr 0x1C
#define RF_sclk_psdone_pos 1
#define RF_sclk_psdone_width 1
#define RF_sclk_status_addr 0x1C
#define RF_sclk_status_pos 2
#define RF_sclk_status_width 3
#define RF_sclk_psidle_addr 0x1C
#define RF_sclk_psidle_pos 5
#define RF_sclk_psidle_width 1
#define RF_fifo_start_addr 0x20
#define RF_fifo_start_pos 0
#define RF_fifo_start_width 1
#define RF_fifo_sync_start_addr 0x20
#define RF_fifo_sync_start_pos 1
#define RF_fifo_sync_start_width 1
#define RF_fifo_reset_addr 0x20
#define RF_fifo_reset_pos 2
#define RF_fifo_reset_width 1
#define RF_fifo_active_addr 0x24
#define RF_fifo_active_pos 0
#define RF_fifo_active_width 1
#define RF_instruction_fifo_high_threshold_addr 0x28
#define RF_instruction_fifo_high_threshold_pos 0
#define RF_instruction_fifo_high_threshold_width 32
#define RF_instruction_fifo_low_threshold_addr 0x2C
#define RF_instruction_fifo_low_threshold_pos 0
#define RF_instruction_fifo_low_threshold_width 32
#define RF_instruction_fifo_count_addr 0x30
#define RF_instruction_fifo_count_pos 0
#define RF_instruction_fifo_count_width 13
#define RF_data_fifo_count_addr 0x34
#define RF_data_fifo_count_pos 0
#define RF_data_fifo_count_width 9
#define RF_clear_cumulative_duration_addr 0x38
#define RF_clear_cumulative_duration_pos 0
#define RF_clear_cumulative_duration_width 1
#define RF_cumulative_duration_low_addr 0x3C
#define RF_cumulative_duration_low_pos 0
#define RF_cumulative_duration_low_width 32
#define RF_cumulative_duration_high_addr 0x40
#define RF_cumulative_duration_high_pos 0
#define RF_cumulative_duration_high_width 32
#define RF_J1_C_out_addr 0x44
#define RF_J1_C_out_pos 0
#define RF_J1_C_out_width 32
#define RF_J1_C_en_addr 0x48
#define RF_J1_C_en_pos 0
#define RF_J1_C_en_width 32
#define RF_J1_C_addr 0x4C
#define RF_J1_C_pos 0
#define RF_J1_C_width 32
#define RF_J2_C_out_addr 0x50
#define RF_J2_C_out_pos 0
#define RF_J2_C_out_width 32
#define RF_J2_C_en_addr 0x54
#define RF_J2_C_en_pos 0
#define RF_J2_C_en_width 32
#define RF_J2_C_addr 0x58
#define RF_J2_C_pos 0
#define RF_J2_C_width 32
#define RF_fifo_overflow_status_addr 0x5C
#define RF_fifo_overflow_status_pos 0
#define RF_fifo_overflow_status_width 1
#define RF_fifo_underflow_status_addr 0x5C
#define RF_fifo_underflow_status_pos 1
#define RF_fifo_underflow_status_width 1
#define RF_fifo_finished_status_addr 0x5C
#define RF_fifo_finished_status_pos 2
#define RF_fifo_finished_status_width 1
#define RF_fifo_started_status_addr 0x5C
#define RF_fifo_started_status_pos 3
#define RF_fifo_started_status_width 1
#define RF_sw_int_status_addr 0x5C
#define RF_sw_int_status_pos 4
#define RF_sw_int_status_width 4
#define RF_fail_int_status_addr 0x5C
#define RF_fail_int_status_pos 8
#define RF_fail_int_status_width 1
#define RF_warn_int_status_addr 0x5C
#define RF_warn_int_status_pos 9
#define RF_warn_int_status_width 1
#define RF_data_fifo_almost_empty_status_addr 0x5C
#define RF_data_fifo_almost_empty_status_pos 10
#define RF_data_fifo_almost_empty_status_width 1
#define RF_instr_fifo_almost_full_status_addr 0x5C
#define RF_instr_fifo_almost_full_status_pos 11
#define RF_instr_fifo_almost_full_status_width 1
#define RF_invalid_opcode_int_status_addr 0x5C
#define RF_invalid_opcode_int_status_pos 12
#define RF_invalid_opcode_int_status_width 1
#define RF_illegal_duration_int_status_addr 0x5C
#define RF_illegal_duration_int_status_pos 13
#define RF_illegal_duration_int_status_width 1
#define RF_input_fifo_check_status_addr 0x5C
#define RF_input_fifo_check_status_pos 14
#define RF_input_fifo_check_status_width 1
#define RF_output_fifo_check_status_addr 0x5C
#define RF_output_fifo_check_status_pos 15
#define RF_output_fifo_check_status_width 1
#define RF_fifo_overflow_enable_addr 0x60
#define RF_fifo_overflow_enable_pos 0
#define RF_fifo_overflow_enable_width 1
#define RF_fifo_underflow_enable_addr 0x60
#define RF_fifo_underflow_enable_pos 1
#define RF_fifo_underflow_enable_width 1
#define RF_fifo_finished_enable_addr 0x60
#define RF_fifo_finished_enable_pos 2
#define RF_fifo_finished_enable_width 1
#define RF_fifo_started_enable_addr 0x60
#define RF_fifo_started_enable_pos 3
#define RF_fifo_started_enable_width 1
#define RF_sw_int_enable_addr 0x60
#define RF_sw_int_enable_pos 4
#define RF_sw_int_enable_width 4
#define RF_fail_int_enable_addr 0x60
#define RF_fail_int_enable_pos 8
#define RF_fail_int_enable_width 1
#define RF_warn_int_enable_addr 0x60
#define RF_warn_int_enable_pos 9
#define RF_warn_int_enable_width 1
#define RF_data_fifo_almost_empty_enable_addr 0x60
#define RF_data_fifo_almost_empty_enable_pos 10
#define RF_data_fifo_almost_empty_enable_width 1
#define RF_instr_fifo_almost_full_enable_addr 0x60
#define RF_instr_fifo_almost_full_enable_pos 11
#define RF_instr_fifo_almost_full_enable_width 1
#define RF_invalid_opcode_int_enable_addr 0x60
#define RF_invalid_opcode_int_enable_pos 12
#define RF_invalid_opcode_int_enable_width 1
#define RF_illegal_duration_int_enable_addr 0x60
#define RF_illegal_duration_int_enable_pos 13
#define RF_illegal_duration_int_enable_width 1
#define RF_input_fifo_check_enable_addr 0x60
#define RF_input_fifo_check_enable_pos 14
#define RF_input_fifo_check_enable_width 1
#define RF_output_fifo_check_enable_addr 0x60
#define RF_output_fifo_check_enable_pos 15
#define RF_output_fifo_check_enable_width 1
#define RF_fifo_overflow_clear_addr 0x64
#define RF_fifo_overflow_clear_pos 0
#define RF_fifo_overflow_clear_width 1
#define RF_fifo_underflow_clear_addr 0x64
#define RF_fifo_underflow_clear_pos 1
#define RF_fifo_underflow_clear_width 1
#define RF_fifo_finished_clear_addr 0x64
#define RF_fifo_finished_clear_pos 2
#define RF_fifo_finished_clear_width 1
#define RF_fifo_started_clear_addr 0x64
#define RF_fifo_started_clear_pos 3
#define RF_fifo_started_clear_width 1
#define RF_sw_int_clear_addr 0x64
#define RF_sw_int_clear_pos 4
#define RF_sw_int_clear_width 4
#define RF_fail_int_clear_addr 0x64
#define RF_fail_int_clear_pos 8
#define RF_fail_int_clear_width 1
#define RF_warn_int_clear_addr 0x64
#define RF_warn_int_clear_pos 9
#define RF_warn_int_clear_width 1
#define RF_data_fifo_almost_empty_clear_addr 0x64
#define RF_data_fifo_almost_empty_clear_pos 10
#define RF_data_fifo_almost_empty_clear_width 1
#define RF_instr_fifo_almost_full_clear_addr 0x64
#define RF_instr_fifo_almost_full_clear_pos 11
#define RF_instr_fifo_almost_full_clear_width 1
#define RF_invalid_opcode_int_clear_addr 0x64
#define RF_invalid_opcode_int_clear_pos 12
#define RF_invalid_opcode_int_clear_width 1
#define RF_illegal_duration_int_clear_addr 0x64
#define RF_illegal_duration_int_clear_pos 13
#define RF_illegal_duration_int_clear_width 1
#define RF_input_fifo_check_clear_addr 0x64
#define RF_input_fifo_check_clear_pos 14
#define RF_input_fifo_check_clear_width 1
#define RF_output_fifo_check_clear_addr 0x64
#define RF_output_fifo_check_clear_pos 15
#define RF_output_fifo_check_clear_width 1
#define RF_instr_fifo_count_total_addr 0x68
#define RF_instr_fifo_count_total_pos 0
#define RF_instr_fifo_count_total_width 32
#define RF_clear_instr_fifo_count_total_addr 0x6C
#define RF_clear_instr_fifo_count_total_pos 0
#define RF_clear_instr_fifo_count_total_width 1
#define RF_amt_read_addr 0x70
#define RF_amt_read_pos 0
#define RF_amt_read_width 4
#define RF_xout_delay_addr 0x74
#define RF_xout_delay_pos 0
#define RF_xout_delay_width 4
#define RF_phase_delay_addr 0x78
#define RF_phase_delay_pos 0
#define RF_phase_delay_width 4
#define RF_amp_delay_addr 0x7C
#define RF_amp_delay_pos 0
#define RF_amp_delay_width 4
#define RF_phase_bias_addr 0x80
#define RF_phase_bias_pos 0
#define RF_phase_bias_width 16
#define RF_amp_bias_addr 0x84
#define RF_amp_bias_pos 0
#define RF_amp_bias_width 16
#define RF_phase_calibration_addr 0x88
#define RF_phase_calibration_pos 0
#define RF_phase_calibration_width 1
#define RF_sw_phase_addr 0x8C
#define RF_sw_phase_pos 0
#define RF_sw_phase_width 16
#define RF_sw_amp_addr 0x90
#define RF_sw_amp_pos 0
#define RF_sw_amp_width 16
#define RF_sw_gates_addr 0x94
#define RF_sw_gates_pos 0
#define RF_sw_gates_width 12
#define RF_sw_user_addr 0x98
#define RF_sw_user_pos 0
#define RF_sw_user_width 3
#define RF_sw_aux_addr 0x9C
#define RF_sw_aux_pos 0
#define RF_sw_aux_width 12
#define RF_sw_aux_reset_addr 0xA0
#define RF_sw_aux_reset_pos 0
#define RF_sw_aux_reset_width 1
#define RF_sw_aux_strobe_addr 0xA4
#define RF_sw_aux_strobe_pos 0
#define RF_sw_aux_strobe_width 1
#define RF_fifo_output_select_addr 0xA8
#define RF_fifo_output_select_pos 0
#define RF_fifo_output_select_width 1
#define RF_fifo_phase_addr 0xAC
#define RF_fifo_phase_pos 0
#define RF_fifo_phase_width 16
#define RF_fifo_amp_addr 0xB0
#define RF_fifo_amp_pos 0
#define RF_fifo_amp_width 16
#define RF_fifo_gates_addr 0xB4
#define RF_fifo_gates_pos 0
#define RF_fifo_gates_width 12
#define RF_fifo_user_addr 0xB8
#define RF_fifo_user_pos 0
#define RF_fifo_user_width 3
#define RF_fifo_aux_addr 0xBC
#define RF_fifo_aux_pos 0
#define RF_fifo_aux_width 12
#define RF_aux_read_addr 0xC0
#define RF_aux_read_pos 0
#define RF_aux_read_width 8
#define RF_holding_duration_addr 0xC4
#define RF_holding_duration_pos 0
#define RF_holding_duration_width 26
#define RF_holding_gates_addr 0xC8
#define RF_holding_gates_pos 0
#define RF_holding_gates_width 12
#define RF_holding_phase_addr 0xCC
#define RF_holding_phase_pos 0
#define RF_holding_phase_width 16
#define RF_holding_phase_increment_addr 0xD0
#define RF_holding_phase_increment_pos 0
#define RF_holding_phase_increment_width 16
#define RF_holding_phase_count_addr 0xD4
#define RF_holding_phase_count_pos 0
#define RF_holding_phase_count_width 9
#define RF_holding_phase_clear_addr 0xD8
#define RF_holding_phase_clear_pos 0
#define RF_holding_phase_clear_width 1
#define RF_holding_phase_c_addr 0xDC
#define RF_holding_phase_c_pos 0
#define RF_holding_phase_c_width 16
#define RF_holding_phase_c_increment_addr 0xE0
#define RF_holding_phase_c_increment_pos 0
#define RF_holding_phase_c_increment_width 16
#define RF_holding_phase_c_count_addr 0xE4
#define RF_holding_phase_c_count_pos 0
#define RF_holding_phase_c_count_width 9
#define RF_holding_phase_c_clear_addr 0xE8
#define RF_holding_phase_c_clear_pos 0
#define RF_holding_phase_c_clear_width 1
#define RF_holding_amp_addr 0xEC
#define RF_holding_amp_pos 0
#define RF_holding_amp_width 16
#define RF_holding_amp_increment_addr 0xF0
#define RF_holding_amp_increment_pos 0
#define RF_holding_amp_increment_width 16
#define RF_holding_amp_count_addr 0xF4
#define RF_holding_amp_count_pos 0
#define RF_holding_amp_count_width 9
#define RF_holding_amp_clear_addr 0xF8
#define RF_holding_amp_clear_pos 0
#define RF_holding_amp_clear_width 1
#define RF_holding_amp_scale_addr 0xFC
#define RF_holding_amp_scale_pos 0
#define RF_holding_amp_scale_width 16
#define RF_holding_amp_scale_increment_addr 0x100
#define RF_holding_amp_scale_increment_pos 0
#define RF_holding_amp_scale_increment_width 16
#define RF_holding_amp_scale_count_addr 0x104
#define RF_holding_amp_scale_count_pos 0
#define RF_holding_amp_scale_count_width 9
#define RF_holding_amp_scale_clear_addr 0x108
#define RF_holding_amp_scale_clear_pos 0
#define RF_holding_amp_scale_clear_width 1
#define RF_holding_user_addr 0x10C
#define RF_holding_user_pos 0
#define RF_holding_user_width 3
#define RF_fifo_instruction_addr 0x110
#define RF_fifo_instruction_pos 0
#define RF_fifo_instruction_width 32
#define RF_xmit_spi_frame_addr 0x114
#define RF_xmit_spi_frame_pos 0
#define RF_xmit_spi_frame_width 1
#define RF_xmit_spi_clk_addr 0x114
#define RF_xmit_spi_clk_pos 1
#define RF_xmit_spi_clk_width 1
#define RF_xmit_spi_data_out_addr 0x114
#define RF_xmit_spi_data_out_pos 2
#define RF_xmit_spi_data_out_width 1
#define RF_xmit_spi_data_in_addr 0x118
#define RF_xmit_spi_data_in_pos 0
#define RF_xmit_spi_data_in_width 1
#define RF_clear_checksum_addr 0x11C
#define RF_clear_checksum_pos 0
#define RF_clear_checksum_width 1
#define RF_phase_checksum_addr 0x120
#define RF_phase_checksum_pos 0
#define RF_phase_checksum_width 16
#define RF_amp_checksum_addr 0x124
#define RF_amp_checksum_pos 0
#define RF_amp_checksum_width 16
#define RF_fifo_gate_checksum_addr 0x128
#define RF_fifo_gate_checksum_pos 0
#define RF_fifo_gate_checksum_width 16
#define RF_txd_checksum_addr 0x12C
#define RF_txd_checksum_pos 0
#define RF_txd_checksum_width 32
#define RF_invalid_instruction_addr 0x130
#define RF_invalid_instruction_pos 0
#define RF_invalid_instruction_width 32
#define RF_transmitter_mode_addr 0x134
#define RF_transmitter_mode_pos 0
#define RF_transmitter_mode_width 1
#define RF_p2_disable_addr 0x134
#define RF_p2_disable_pos 1
#define RF_p2_disable_width 1
#define RF_console_type_addr 0x134
#define RF_console_type_pos 2
#define RF_console_type_width 1
#define RF_disable_low_band_amplifier_addr 0x134
#define RF_disable_low_band_amplifier_pos 3
#define RF_disable_low_band_amplifier_width 1
#define RF_disable_high_band_amplifier_addr 0x134
#define RF_disable_high_band_amplifier_pos 4
#define RF_disable_high_band_amplifier_width 1
#define RF_dcm_rst_addr 0x138
#define RF_dcm_rst_pos 0
#define RF_dcm_rst_width 1
#define RF_enable_interface_robustness_addr 0x13C
#define RF_enable_interface_robustness_pos 0
#define RF_enable_interface_robustness_width 1
#define RF_interface_robustness_period_addr 0x140
#define RF_interface_robustness_period_pos 0
#define RF_interface_robustness_period_width 16
#define RF_p2_delay_addr 0x144
#define RF_p2_delay_pos 0
#define RF_p2_delay_width 7
#define RF_mark_loop_addr 0x148
#define RF_mark_loop_pos 0
#define RF_mark_loop_width 1
#define RF_finish_loop_addr 0x148
#define RF_finish_loop_pos 1
#define RF_finish_loop_width 1
#define RF_loop_count_addr 0x14C
#define RF_loop_count_pos 0
#define RF_loop_count_width 32
#define RF_linearization_enable_addr 0x150
#define RF_linearization_enable_pos 0
#define RF_linearization_enable_width 1
#define RF_lin_fifo_amp_addr 0x154
#define RF_lin_fifo_amp_pos 0
#define RF_lin_fifo_amp_width 16
#define RF_lin_fifo_phase_addr 0x158
#define RF_lin_fifo_phase_pos 0
#define RF_lin_fifo_phase_width 16
#define RF_current_atten_addr 0x15C
#define RF_current_atten_pos 0
#define RF_current_atten_width 8
#define RF_current_linearization_table_addr 0x160
#define RF_current_linearization_table_pos 0
#define RF_current_linearization_table_width 6
#define RF_current_mapped_atten_addr 0x164
#define RF_current_mapped_atten_pos 0
#define RF_current_mapped_atten_width 8
#define RF_lkup_amp_scale_addr 0x168
#define RF_lkup_amp_scale_pos 0
#define RF_lkup_amp_scale_width 17
#define RF_opb_diag_reset_addr 0x16C
#define RF_opb_diag_reset_pos 0
#define RF_opb_diag_reset_width 1
#define RF_opb_average_0_addr 0x170
#define RF_opb_average_0_pos 0
#define RF_opb_average_0_width 12
#define RF_opb_average_1_addr 0x174
#define RF_opb_average_1_pos 0
#define RF_opb_average_1_width 16
#define RF_opb_average_2_addr 0x178
#define RF_opb_average_2_pos 0
#define RF_opb_average_2_width 20
#define RF_opb_average_3_addr 0x17C
#define RF_opb_average_3_pos 0
#define RF_opb_average_3_width 24
#define RF_invalid_instruction_count_addr 0x180
#define RF_invalid_instruction_count_pos 0
#define RF_invalid_instruction_count_width 16
#define RF_captured_instruction_fifo_count_addr 0x184
#define RF_captured_instruction_fifo_count_pos 0
#define RF_captured_instruction_fifo_count_width 32
#define RF_captured_data_fifo_count_addr 0x188
#define RF_captured_data_fifo_count_pos 0
#define RF_captured_data_fifo_count_width 9
#define RF_debug_version_addr 0x18C
#define RF_debug_version_pos 0
#define RF_debug_version_width 16
#define RF_table_index_addr 0x400
#define RF_table_index_pos 0
#define RF_table_index_width 6
#define RF_output_tpower_addr 0x800
#define RF_output_tpower_pos 0
#define RF_output_tpower_width 8
#define RF_scale_factor_addr 0xC00
#define RF_scale_factor_pos 0
#define RF_scale_factor_width 17
#endif