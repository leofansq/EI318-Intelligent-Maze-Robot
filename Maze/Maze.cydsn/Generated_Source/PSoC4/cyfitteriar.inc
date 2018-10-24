#ifndef INCLUDED_CYFITTERIAR_INC
#define INCLUDED_CYFITTERIAR_INC
    INCLUDE cydeviceiar_trm.inc

/* POT_L */
POT_L__0__DM__MASK EQU 0x1C0
POT_L__0__DM__SHIFT EQU 6
POT_L__0__DR EQU CYREG_PRT0_DR
POT_L__0__HSIOM EQU CYREG_HSIOM_PORT_SEL0
POT_L__0__HSIOM_MASK EQU 0x00000F00
POT_L__0__HSIOM_SHIFT EQU 8
POT_L__0__INTCFG EQU CYREG_PRT0_INTCFG
POT_L__0__INTSTAT EQU CYREG_PRT0_INTSTAT
POT_L__0__MASK EQU 0x04
POT_L__0__OUT_SEL EQU CYREG_UDB_PA0_CFG10
POT_L__0__OUT_SEL_SHIFT EQU 4
POT_L__0__OUT_SEL_VAL EQU 1
POT_L__0__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
POT_L__0__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
POT_L__0__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
POT_L__0__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
POT_L__0__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
POT_L__0__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
POT_L__0__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
POT_L__0__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
POT_L__0__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
POT_L__0__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
POT_L__0__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
POT_L__0__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
POT_L__0__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
POT_L__0__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
POT_L__0__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
POT_L__0__PC EQU CYREG_PRT0_PC
POT_L__0__PC2 EQU CYREG_PRT0_PC2
POT_L__0__PORT EQU 0
POT_L__0__PS EQU CYREG_PRT0_PS
POT_L__0__SHIFT EQU 2
POT_L__DR EQU CYREG_PRT0_DR
POT_L__INTCFG EQU CYREG_PRT0_INTCFG
POT_L__INTSTAT EQU CYREG_PRT0_INTSTAT
POT_L__MASK EQU 0x04
POT_L__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
POT_L__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
POT_L__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
POT_L__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
POT_L__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
POT_L__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
POT_L__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
POT_L__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
POT_L__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
POT_L__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
POT_L__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
POT_L__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
POT_L__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
POT_L__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
POT_L__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
POT_L__PC EQU CYREG_PRT0_PC
POT_L__PC2 EQU CYREG_PRT0_PC2
POT_L__PORT EQU 0
POT_L__PS EQU CYREG_PRT0_PS
POT_L__SHIFT EQU 2

/* POT_R */
POT_R__0__DM__MASK EQU 0xE00
POT_R__0__DM__SHIFT EQU 9
POT_R__0__DR EQU CYREG_PRT0_DR
POT_R__0__HSIOM EQU CYREG_HSIOM_PORT_SEL0
POT_R__0__HSIOM_MASK EQU 0x0000F000
POT_R__0__HSIOM_SHIFT EQU 12
POT_R__0__INTCFG EQU CYREG_PRT0_INTCFG
POT_R__0__INTSTAT EQU CYREG_PRT0_INTSTAT
POT_R__0__MASK EQU 0x08
POT_R__0__OUT_SEL EQU CYREG_UDB_PA0_CFG10
POT_R__0__OUT_SEL_SHIFT EQU 6
POT_R__0__OUT_SEL_VAL EQU 1
POT_R__0__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
POT_R__0__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
POT_R__0__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
POT_R__0__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
POT_R__0__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
POT_R__0__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
POT_R__0__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
POT_R__0__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
POT_R__0__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
POT_R__0__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
POT_R__0__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
POT_R__0__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
POT_R__0__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
POT_R__0__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
POT_R__0__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
POT_R__0__PC EQU CYREG_PRT0_PC
POT_R__0__PC2 EQU CYREG_PRT0_PC2
POT_R__0__PORT EQU 0
POT_R__0__PS EQU CYREG_PRT0_PS
POT_R__0__SHIFT EQU 3
POT_R__DR EQU CYREG_PRT0_DR
POT_R__INTCFG EQU CYREG_PRT0_INTCFG
POT_R__INTSTAT EQU CYREG_PRT0_INTSTAT
POT_R__MASK EQU 0x08
POT_R__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
POT_R__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
POT_R__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
POT_R__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
POT_R__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
POT_R__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
POT_R__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
POT_R__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
POT_R__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
POT_R__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
POT_R__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
POT_R__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
POT_R__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
POT_R__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
POT_R__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
POT_R__PC EQU CYREG_PRT0_PC
POT_R__PC2 EQU CYREG_PRT0_PC2
POT_R__PORT EQU 0
POT_R__PS EQU CYREG_PRT0_PS
POT_R__SHIFT EQU 3

/* PWM_L_cy_m0s8_tcpwm_1 */
PWM_L_cy_m0s8_tcpwm_1__CC EQU CYREG_TCPWM_CNT0_CC
PWM_L_cy_m0s8_tcpwm_1__CC_BUFF EQU CYREG_TCPWM_CNT0_CC_BUFF
PWM_L_cy_m0s8_tcpwm_1__COUNTER EQU CYREG_TCPWM_CNT0_COUNTER
PWM_L_cy_m0s8_tcpwm_1__CTRL EQU CYREG_TCPWM_CNT0_CTRL
PWM_L_cy_m0s8_tcpwm_1__INTR EQU CYREG_TCPWM_CNT0_INTR
PWM_L_cy_m0s8_tcpwm_1__INTR_MASK EQU CYREG_TCPWM_CNT0_INTR_MASK
PWM_L_cy_m0s8_tcpwm_1__INTR_MASKED EQU CYREG_TCPWM_CNT0_INTR_MASKED
PWM_L_cy_m0s8_tcpwm_1__INTR_SET EQU CYREG_TCPWM_CNT0_INTR_SET
PWM_L_cy_m0s8_tcpwm_1__PERIOD EQU CYREG_TCPWM_CNT0_PERIOD
PWM_L_cy_m0s8_tcpwm_1__PERIOD_BUFF EQU CYREG_TCPWM_CNT0_PERIOD_BUFF
PWM_L_cy_m0s8_tcpwm_1__STATUS EQU CYREG_TCPWM_CNT0_STATUS
PWM_L_cy_m0s8_tcpwm_1__TCPWM_CMD EQU CYREG_TCPWM_CMD
PWM_L_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_MASK EQU 0x01
PWM_L_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_SHIFT EQU 0
PWM_L_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_MASK EQU 0x100
PWM_L_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_SHIFT EQU 8
PWM_L_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_MASK EQU 0x1000000
PWM_L_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_SHIFT EQU 24
PWM_L_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_MASK EQU 0x10000
PWM_L_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_SHIFT EQU 16
PWM_L_cy_m0s8_tcpwm_1__TCPWM_CTRL EQU CYREG_TCPWM_CTRL
PWM_L_cy_m0s8_tcpwm_1__TCPWM_CTRL_MASK EQU 0x01
PWM_L_cy_m0s8_tcpwm_1__TCPWM_CTRL_SHIFT EQU 0
PWM_L_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE EQU CYREG_TCPWM_INTR_CAUSE
PWM_L_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_MASK EQU 0x01
PWM_L_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_SHIFT EQU 0
PWM_L_cy_m0s8_tcpwm_1__TCPWM_NUMBER EQU 0
PWM_L_cy_m0s8_tcpwm_1__TR_CTRL0 EQU CYREG_TCPWM_CNT0_TR_CTRL0
PWM_L_cy_m0s8_tcpwm_1__TR_CTRL1 EQU CYREG_TCPWM_CNT0_TR_CTRL1
PWM_L_cy_m0s8_tcpwm_1__TR_CTRL2 EQU CYREG_TCPWM_CNT0_TR_CTRL2

/* PWM_R_cy_m0s8_tcpwm_1 */
PWM_R_cy_m0s8_tcpwm_1__CC EQU CYREG_TCPWM_CNT1_CC
PWM_R_cy_m0s8_tcpwm_1__CC_BUFF EQU CYREG_TCPWM_CNT1_CC_BUFF
PWM_R_cy_m0s8_tcpwm_1__COUNTER EQU CYREG_TCPWM_CNT1_COUNTER
PWM_R_cy_m0s8_tcpwm_1__CTRL EQU CYREG_TCPWM_CNT1_CTRL
PWM_R_cy_m0s8_tcpwm_1__INTR EQU CYREG_TCPWM_CNT1_INTR
PWM_R_cy_m0s8_tcpwm_1__INTR_MASK EQU CYREG_TCPWM_CNT1_INTR_MASK
PWM_R_cy_m0s8_tcpwm_1__INTR_MASKED EQU CYREG_TCPWM_CNT1_INTR_MASKED
PWM_R_cy_m0s8_tcpwm_1__INTR_SET EQU CYREG_TCPWM_CNT1_INTR_SET
PWM_R_cy_m0s8_tcpwm_1__PERIOD EQU CYREG_TCPWM_CNT1_PERIOD
PWM_R_cy_m0s8_tcpwm_1__PERIOD_BUFF EQU CYREG_TCPWM_CNT1_PERIOD_BUFF
PWM_R_cy_m0s8_tcpwm_1__STATUS EQU CYREG_TCPWM_CNT1_STATUS
PWM_R_cy_m0s8_tcpwm_1__TCPWM_CMD EQU CYREG_TCPWM_CMD
PWM_R_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_MASK EQU 0x02
PWM_R_cy_m0s8_tcpwm_1__TCPWM_CMDCAPTURE_SHIFT EQU 1
PWM_R_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_MASK EQU 0x200
PWM_R_cy_m0s8_tcpwm_1__TCPWM_CMDRELOAD_SHIFT EQU 9
PWM_R_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_MASK EQU 0x2000000
PWM_R_cy_m0s8_tcpwm_1__TCPWM_CMDSTART_SHIFT EQU 25
PWM_R_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_MASK EQU 0x20000
PWM_R_cy_m0s8_tcpwm_1__TCPWM_CMDSTOP_SHIFT EQU 17
PWM_R_cy_m0s8_tcpwm_1__TCPWM_CTRL EQU CYREG_TCPWM_CTRL
PWM_R_cy_m0s8_tcpwm_1__TCPWM_CTRL_MASK EQU 0x02
PWM_R_cy_m0s8_tcpwm_1__TCPWM_CTRL_SHIFT EQU 1
PWM_R_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE EQU CYREG_TCPWM_INTR_CAUSE
PWM_R_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_MASK EQU 0x02
PWM_R_cy_m0s8_tcpwm_1__TCPWM_INTR_CAUSE_SHIFT EQU 1
PWM_R_cy_m0s8_tcpwm_1__TCPWM_NUMBER EQU 1
PWM_R_cy_m0s8_tcpwm_1__TR_CTRL0 EQU CYREG_TCPWM_CNT1_TR_CTRL0
PWM_R_cy_m0s8_tcpwm_1__TR_CTRL1 EQU CYREG_TCPWM_CNT1_TR_CTRL1
PWM_R_cy_m0s8_tcpwm_1__TR_CTRL2 EQU CYREG_TCPWM_CNT1_TR_CTRL2

/* Clock_L */
Clock_L__DIVIDER_MASK EQU 0x0000FFFF
Clock_L__ENABLE EQU CYREG_CLK_DIVIDER_A00
Clock_L__ENABLE_MASK EQU 0x80000000
Clock_L__MASK EQU 0x80000000
Clock_L__REGISTER EQU CYREG_CLK_DIVIDER_A00

/* Clock_R */
Clock_R__DIVIDER_MASK EQU 0x0000FFFF
Clock_R__ENABLE EQU CYREG_CLK_DIVIDER_B00
Clock_R__ENABLE_MASK EQU 0x80000000
Clock_R__MASK EQU 0x80000000
Clock_R__REGISTER EQU CYREG_CLK_DIVIDER_B00

/* Bumper_L */
Bumper_L__0__DM__MASK EQU 0x7000
Bumper_L__0__DM__SHIFT EQU 12
Bumper_L__0__DR EQU CYREG_PRT1_DR
Bumper_L__0__HSIOM EQU CYREG_HSIOM_PORT_SEL1
Bumper_L__0__HSIOM_MASK EQU 0x000F0000
Bumper_L__0__HSIOM_SHIFT EQU 16
Bumper_L__0__INTCFG EQU CYREG_PRT1_INTCFG
Bumper_L__0__INTSTAT EQU CYREG_PRT1_INTSTAT
Bumper_L__0__MASK EQU 0x10
Bumper_L__0__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
Bumper_L__0__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
Bumper_L__0__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
Bumper_L__0__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
Bumper_L__0__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
Bumper_L__0__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
Bumper_L__0__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
Bumper_L__0__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
Bumper_L__0__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
Bumper_L__0__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
Bumper_L__0__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
Bumper_L__0__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
Bumper_L__0__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
Bumper_L__0__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
Bumper_L__0__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
Bumper_L__0__PC EQU CYREG_PRT1_PC
Bumper_L__0__PC2 EQU CYREG_PRT1_PC2
Bumper_L__0__PORT EQU 1
Bumper_L__0__PS EQU CYREG_PRT1_PS
Bumper_L__0__SHIFT EQU 4
Bumper_L__DR EQU CYREG_PRT1_DR
Bumper_L__INTCFG EQU CYREG_PRT1_INTCFG
Bumper_L__INTSTAT EQU CYREG_PRT1_INTSTAT
Bumper_L__MASK EQU 0x10
Bumper_L__PA__CFG0 EQU CYREG_UDB_PA1_CFG0
Bumper_L__PA__CFG1 EQU CYREG_UDB_PA1_CFG1
Bumper_L__PA__CFG10 EQU CYREG_UDB_PA1_CFG10
Bumper_L__PA__CFG11 EQU CYREG_UDB_PA1_CFG11
Bumper_L__PA__CFG12 EQU CYREG_UDB_PA1_CFG12
Bumper_L__PA__CFG13 EQU CYREG_UDB_PA1_CFG13
Bumper_L__PA__CFG14 EQU CYREG_UDB_PA1_CFG14
Bumper_L__PA__CFG2 EQU CYREG_UDB_PA1_CFG2
Bumper_L__PA__CFG3 EQU CYREG_UDB_PA1_CFG3
Bumper_L__PA__CFG4 EQU CYREG_UDB_PA1_CFG4
Bumper_L__PA__CFG5 EQU CYREG_UDB_PA1_CFG5
Bumper_L__PA__CFG6 EQU CYREG_UDB_PA1_CFG6
Bumper_L__PA__CFG7 EQU CYREG_UDB_PA1_CFG7
Bumper_L__PA__CFG8 EQU CYREG_UDB_PA1_CFG8
Bumper_L__PA__CFG9 EQU CYREG_UDB_PA1_CFG9
Bumper_L__PC EQU CYREG_PRT1_PC
Bumper_L__PC2 EQU CYREG_PRT1_PC2
Bumper_L__PORT EQU 1
Bumper_L__PS EQU CYREG_PRT1_PS
Bumper_L__SHIFT EQU 4

/* Bumper_R */
Bumper_R__0__DM__MASK EQU 0x38000
Bumper_R__0__DM__SHIFT EQU 15
Bumper_R__0__DR EQU CYREG_PRT3_DR
Bumper_R__0__HSIOM EQU CYREG_HSIOM_PORT_SEL3
Bumper_R__0__HSIOM_MASK EQU 0x00F00000
Bumper_R__0__HSIOM_SHIFT EQU 20
Bumper_R__0__INTCFG EQU CYREG_PRT3_INTCFG
Bumper_R__0__INTSTAT EQU CYREG_PRT3_INTSTAT
Bumper_R__0__MASK EQU 0x20
Bumper_R__0__PA__CFG0 EQU CYREG_UDB_PA3_CFG0
Bumper_R__0__PA__CFG1 EQU CYREG_UDB_PA3_CFG1
Bumper_R__0__PA__CFG10 EQU CYREG_UDB_PA3_CFG10
Bumper_R__0__PA__CFG11 EQU CYREG_UDB_PA3_CFG11
Bumper_R__0__PA__CFG12 EQU CYREG_UDB_PA3_CFG12
Bumper_R__0__PA__CFG13 EQU CYREG_UDB_PA3_CFG13
Bumper_R__0__PA__CFG14 EQU CYREG_UDB_PA3_CFG14
Bumper_R__0__PA__CFG2 EQU CYREG_UDB_PA3_CFG2
Bumper_R__0__PA__CFG3 EQU CYREG_UDB_PA3_CFG3
Bumper_R__0__PA__CFG4 EQU CYREG_UDB_PA3_CFG4
Bumper_R__0__PA__CFG5 EQU CYREG_UDB_PA3_CFG5
Bumper_R__0__PA__CFG6 EQU CYREG_UDB_PA3_CFG6
Bumper_R__0__PA__CFG7 EQU CYREG_UDB_PA3_CFG7
Bumper_R__0__PA__CFG8 EQU CYREG_UDB_PA3_CFG8
Bumper_R__0__PA__CFG9 EQU CYREG_UDB_PA3_CFG9
Bumper_R__0__PC EQU CYREG_PRT3_PC
Bumper_R__0__PC2 EQU CYREG_PRT3_PC2
Bumper_R__0__PORT EQU 3
Bumper_R__0__PS EQU CYREG_PRT3_PS
Bumper_R__0__SHIFT EQU 5
Bumper_R__DR EQU CYREG_PRT3_DR
Bumper_R__INTCFG EQU CYREG_PRT3_INTCFG
Bumper_R__INTSTAT EQU CYREG_PRT3_INTSTAT
Bumper_R__MASK EQU 0x20
Bumper_R__PA__CFG0 EQU CYREG_UDB_PA3_CFG0
Bumper_R__PA__CFG1 EQU CYREG_UDB_PA3_CFG1
Bumper_R__PA__CFG10 EQU CYREG_UDB_PA3_CFG10
Bumper_R__PA__CFG11 EQU CYREG_UDB_PA3_CFG11
Bumper_R__PA__CFG12 EQU CYREG_UDB_PA3_CFG12
Bumper_R__PA__CFG13 EQU CYREG_UDB_PA3_CFG13
Bumper_R__PA__CFG14 EQU CYREG_UDB_PA3_CFG14
Bumper_R__PA__CFG2 EQU CYREG_UDB_PA3_CFG2
Bumper_R__PA__CFG3 EQU CYREG_UDB_PA3_CFG3
Bumper_R__PA__CFG4 EQU CYREG_UDB_PA3_CFG4
Bumper_R__PA__CFG5 EQU CYREG_UDB_PA3_CFG5
Bumper_R__PA__CFG6 EQU CYREG_UDB_PA3_CFG6
Bumper_R__PA__CFG7 EQU CYREG_UDB_PA3_CFG7
Bumper_R__PA__CFG8 EQU CYREG_UDB_PA3_CFG8
Bumper_R__PA__CFG9 EQU CYREG_UDB_PA3_CFG9
Bumper_R__PC EQU CYREG_PRT3_PC
Bumper_R__PC2 EQU CYREG_PRT3_PC2
Bumper_R__PORT EQU 3
Bumper_R__PS EQU CYREG_PRT3_PS
Bumper_R__SHIFT EQU 5

/* LCD_Char_LCDPort */
LCD_Char_LCDPort__0__DM__MASK EQU 0x07
LCD_Char_LCDPort__0__DM__SHIFT EQU 0
LCD_Char_LCDPort__0__DR EQU CYREG_PRT2_DR
LCD_Char_LCDPort__0__HSIOM EQU CYREG_HSIOM_PORT_SEL2
LCD_Char_LCDPort__0__HSIOM_MASK EQU 0x0000000F
LCD_Char_LCDPort__0__HSIOM_SHIFT EQU 0
LCD_Char_LCDPort__0__INTCFG EQU CYREG_PRT2_INTCFG
LCD_Char_LCDPort__0__INTSTAT EQU CYREG_PRT2_INTSTAT
LCD_Char_LCDPort__0__MASK EQU 0x01
LCD_Char_LCDPort__0__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
LCD_Char_LCDPort__0__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
LCD_Char_LCDPort__0__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
LCD_Char_LCDPort__0__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
LCD_Char_LCDPort__0__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
LCD_Char_LCDPort__0__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
LCD_Char_LCDPort__0__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
LCD_Char_LCDPort__0__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
LCD_Char_LCDPort__0__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
LCD_Char_LCDPort__0__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
LCD_Char_LCDPort__0__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
LCD_Char_LCDPort__0__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
LCD_Char_LCDPort__0__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
LCD_Char_LCDPort__0__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
LCD_Char_LCDPort__0__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
LCD_Char_LCDPort__0__PC EQU CYREG_PRT2_PC
LCD_Char_LCDPort__0__PC2 EQU CYREG_PRT2_PC2
LCD_Char_LCDPort__0__PORT EQU 2
LCD_Char_LCDPort__0__PS EQU CYREG_PRT2_PS
LCD_Char_LCDPort__0__SHIFT EQU 0
LCD_Char_LCDPort__1__DM__MASK EQU 0x38
LCD_Char_LCDPort__1__DM__SHIFT EQU 3
LCD_Char_LCDPort__1__DR EQU CYREG_PRT2_DR
LCD_Char_LCDPort__1__HSIOM EQU CYREG_HSIOM_PORT_SEL2
LCD_Char_LCDPort__1__HSIOM_MASK EQU 0x000000F0
LCD_Char_LCDPort__1__HSIOM_SHIFT EQU 4
LCD_Char_LCDPort__1__INTCFG EQU CYREG_PRT2_INTCFG
LCD_Char_LCDPort__1__INTSTAT EQU CYREG_PRT2_INTSTAT
LCD_Char_LCDPort__1__MASK EQU 0x02
LCD_Char_LCDPort__1__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
LCD_Char_LCDPort__1__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
LCD_Char_LCDPort__1__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
LCD_Char_LCDPort__1__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
LCD_Char_LCDPort__1__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
LCD_Char_LCDPort__1__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
LCD_Char_LCDPort__1__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
LCD_Char_LCDPort__1__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
LCD_Char_LCDPort__1__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
LCD_Char_LCDPort__1__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
LCD_Char_LCDPort__1__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
LCD_Char_LCDPort__1__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
LCD_Char_LCDPort__1__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
LCD_Char_LCDPort__1__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
LCD_Char_LCDPort__1__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
LCD_Char_LCDPort__1__PC EQU CYREG_PRT2_PC
LCD_Char_LCDPort__1__PC2 EQU CYREG_PRT2_PC2
LCD_Char_LCDPort__1__PORT EQU 2
LCD_Char_LCDPort__1__PS EQU CYREG_PRT2_PS
LCD_Char_LCDPort__1__SHIFT EQU 1
LCD_Char_LCDPort__2__DM__MASK EQU 0x1C0
LCD_Char_LCDPort__2__DM__SHIFT EQU 6
LCD_Char_LCDPort__2__DR EQU CYREG_PRT2_DR
LCD_Char_LCDPort__2__HSIOM EQU CYREG_HSIOM_PORT_SEL2
LCD_Char_LCDPort__2__HSIOM_MASK EQU 0x00000F00
LCD_Char_LCDPort__2__HSIOM_SHIFT EQU 8
LCD_Char_LCDPort__2__INTCFG EQU CYREG_PRT2_INTCFG
LCD_Char_LCDPort__2__INTSTAT EQU CYREG_PRT2_INTSTAT
LCD_Char_LCDPort__2__MASK EQU 0x04
LCD_Char_LCDPort__2__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
LCD_Char_LCDPort__2__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
LCD_Char_LCDPort__2__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
LCD_Char_LCDPort__2__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
LCD_Char_LCDPort__2__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
LCD_Char_LCDPort__2__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
LCD_Char_LCDPort__2__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
LCD_Char_LCDPort__2__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
LCD_Char_LCDPort__2__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
LCD_Char_LCDPort__2__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
LCD_Char_LCDPort__2__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
LCD_Char_LCDPort__2__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
LCD_Char_LCDPort__2__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
LCD_Char_LCDPort__2__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
LCD_Char_LCDPort__2__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
LCD_Char_LCDPort__2__PC EQU CYREG_PRT2_PC
LCD_Char_LCDPort__2__PC2 EQU CYREG_PRT2_PC2
LCD_Char_LCDPort__2__PORT EQU 2
LCD_Char_LCDPort__2__PS EQU CYREG_PRT2_PS
LCD_Char_LCDPort__2__SHIFT EQU 2
LCD_Char_LCDPort__3__DM__MASK EQU 0xE00
LCD_Char_LCDPort__3__DM__SHIFT EQU 9
LCD_Char_LCDPort__3__DR EQU CYREG_PRT2_DR
LCD_Char_LCDPort__3__HSIOM EQU CYREG_HSIOM_PORT_SEL2
LCD_Char_LCDPort__3__HSIOM_MASK EQU 0x0000F000
LCD_Char_LCDPort__3__HSIOM_SHIFT EQU 12
LCD_Char_LCDPort__3__INTCFG EQU CYREG_PRT2_INTCFG
LCD_Char_LCDPort__3__INTSTAT EQU CYREG_PRT2_INTSTAT
LCD_Char_LCDPort__3__MASK EQU 0x08
LCD_Char_LCDPort__3__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
LCD_Char_LCDPort__3__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
LCD_Char_LCDPort__3__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
LCD_Char_LCDPort__3__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
LCD_Char_LCDPort__3__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
LCD_Char_LCDPort__3__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
LCD_Char_LCDPort__3__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
LCD_Char_LCDPort__3__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
LCD_Char_LCDPort__3__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
LCD_Char_LCDPort__3__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
LCD_Char_LCDPort__3__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
LCD_Char_LCDPort__3__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
LCD_Char_LCDPort__3__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
LCD_Char_LCDPort__3__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
LCD_Char_LCDPort__3__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
LCD_Char_LCDPort__3__PC EQU CYREG_PRT2_PC
LCD_Char_LCDPort__3__PC2 EQU CYREG_PRT2_PC2
LCD_Char_LCDPort__3__PORT EQU 2
LCD_Char_LCDPort__3__PS EQU CYREG_PRT2_PS
LCD_Char_LCDPort__3__SHIFT EQU 3
LCD_Char_LCDPort__4__DM__MASK EQU 0x7000
LCD_Char_LCDPort__4__DM__SHIFT EQU 12
LCD_Char_LCDPort__4__DR EQU CYREG_PRT2_DR
LCD_Char_LCDPort__4__HSIOM EQU CYREG_HSIOM_PORT_SEL2
LCD_Char_LCDPort__4__HSIOM_MASK EQU 0x000F0000
LCD_Char_LCDPort__4__HSIOM_SHIFT EQU 16
LCD_Char_LCDPort__4__INTCFG EQU CYREG_PRT2_INTCFG
LCD_Char_LCDPort__4__INTSTAT EQU CYREG_PRT2_INTSTAT
LCD_Char_LCDPort__4__MASK EQU 0x10
LCD_Char_LCDPort__4__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
LCD_Char_LCDPort__4__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
LCD_Char_LCDPort__4__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
LCD_Char_LCDPort__4__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
LCD_Char_LCDPort__4__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
LCD_Char_LCDPort__4__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
LCD_Char_LCDPort__4__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
LCD_Char_LCDPort__4__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
LCD_Char_LCDPort__4__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
LCD_Char_LCDPort__4__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
LCD_Char_LCDPort__4__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
LCD_Char_LCDPort__4__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
LCD_Char_LCDPort__4__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
LCD_Char_LCDPort__4__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
LCD_Char_LCDPort__4__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
LCD_Char_LCDPort__4__PC EQU CYREG_PRT2_PC
LCD_Char_LCDPort__4__PC2 EQU CYREG_PRT2_PC2
LCD_Char_LCDPort__4__PORT EQU 2
LCD_Char_LCDPort__4__PS EQU CYREG_PRT2_PS
LCD_Char_LCDPort__4__SHIFT EQU 4
LCD_Char_LCDPort__5__DM__MASK EQU 0x38000
LCD_Char_LCDPort__5__DM__SHIFT EQU 15
LCD_Char_LCDPort__5__DR EQU CYREG_PRT2_DR
LCD_Char_LCDPort__5__HSIOM EQU CYREG_HSIOM_PORT_SEL2
LCD_Char_LCDPort__5__HSIOM_MASK EQU 0x00F00000
LCD_Char_LCDPort__5__HSIOM_SHIFT EQU 20
LCD_Char_LCDPort__5__INTCFG EQU CYREG_PRT2_INTCFG
LCD_Char_LCDPort__5__INTSTAT EQU CYREG_PRT2_INTSTAT
LCD_Char_LCDPort__5__MASK EQU 0x20
LCD_Char_LCDPort__5__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
LCD_Char_LCDPort__5__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
LCD_Char_LCDPort__5__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
LCD_Char_LCDPort__5__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
LCD_Char_LCDPort__5__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
LCD_Char_LCDPort__5__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
LCD_Char_LCDPort__5__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
LCD_Char_LCDPort__5__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
LCD_Char_LCDPort__5__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
LCD_Char_LCDPort__5__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
LCD_Char_LCDPort__5__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
LCD_Char_LCDPort__5__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
LCD_Char_LCDPort__5__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
LCD_Char_LCDPort__5__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
LCD_Char_LCDPort__5__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
LCD_Char_LCDPort__5__PC EQU CYREG_PRT2_PC
LCD_Char_LCDPort__5__PC2 EQU CYREG_PRT2_PC2
LCD_Char_LCDPort__5__PORT EQU 2
LCD_Char_LCDPort__5__PS EQU CYREG_PRT2_PS
LCD_Char_LCDPort__5__SHIFT EQU 5
LCD_Char_LCDPort__6__DM__MASK EQU 0x1C0000
LCD_Char_LCDPort__6__DM__SHIFT EQU 18
LCD_Char_LCDPort__6__DR EQU CYREG_PRT2_DR
LCD_Char_LCDPort__6__HSIOM EQU CYREG_HSIOM_PORT_SEL2
LCD_Char_LCDPort__6__HSIOM_MASK EQU 0x0F000000
LCD_Char_LCDPort__6__HSIOM_SHIFT EQU 24
LCD_Char_LCDPort__6__INTCFG EQU CYREG_PRT2_INTCFG
LCD_Char_LCDPort__6__INTSTAT EQU CYREG_PRT2_INTSTAT
LCD_Char_LCDPort__6__MASK EQU 0x40
LCD_Char_LCDPort__6__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
LCD_Char_LCDPort__6__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
LCD_Char_LCDPort__6__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
LCD_Char_LCDPort__6__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
LCD_Char_LCDPort__6__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
LCD_Char_LCDPort__6__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
LCD_Char_LCDPort__6__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
LCD_Char_LCDPort__6__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
LCD_Char_LCDPort__6__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
LCD_Char_LCDPort__6__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
LCD_Char_LCDPort__6__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
LCD_Char_LCDPort__6__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
LCD_Char_LCDPort__6__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
LCD_Char_LCDPort__6__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
LCD_Char_LCDPort__6__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
LCD_Char_LCDPort__6__PC EQU CYREG_PRT2_PC
LCD_Char_LCDPort__6__PC2 EQU CYREG_PRT2_PC2
LCD_Char_LCDPort__6__PORT EQU 2
LCD_Char_LCDPort__6__PS EQU CYREG_PRT2_PS
LCD_Char_LCDPort__6__SHIFT EQU 6
LCD_Char_LCDPort__DR EQU CYREG_PRT2_DR
LCD_Char_LCDPort__INTCFG EQU CYREG_PRT2_INTCFG
LCD_Char_LCDPort__INTSTAT EQU CYREG_PRT2_INTSTAT
LCD_Char_LCDPort__MASK EQU 0x7F
LCD_Char_LCDPort__PA__CFG0 EQU CYREG_UDB_PA2_CFG0
LCD_Char_LCDPort__PA__CFG1 EQU CYREG_UDB_PA2_CFG1
LCD_Char_LCDPort__PA__CFG10 EQU CYREG_UDB_PA2_CFG10
LCD_Char_LCDPort__PA__CFG11 EQU CYREG_UDB_PA2_CFG11
LCD_Char_LCDPort__PA__CFG12 EQU CYREG_UDB_PA2_CFG12
LCD_Char_LCDPort__PA__CFG13 EQU CYREG_UDB_PA2_CFG13
LCD_Char_LCDPort__PA__CFG14 EQU CYREG_UDB_PA2_CFG14
LCD_Char_LCDPort__PA__CFG2 EQU CYREG_UDB_PA2_CFG2
LCD_Char_LCDPort__PA__CFG3 EQU CYREG_UDB_PA2_CFG3
LCD_Char_LCDPort__PA__CFG4 EQU CYREG_UDB_PA2_CFG4
LCD_Char_LCDPort__PA__CFG5 EQU CYREG_UDB_PA2_CFG5
LCD_Char_LCDPort__PA__CFG6 EQU CYREG_UDB_PA2_CFG6
LCD_Char_LCDPort__PA__CFG7 EQU CYREG_UDB_PA2_CFG7
LCD_Char_LCDPort__PA__CFG8 EQU CYREG_UDB_PA2_CFG8
LCD_Char_LCDPort__PA__CFG9 EQU CYREG_UDB_PA2_CFG9
LCD_Char_LCDPort__PC EQU CYREG_PRT2_PC
LCD_Char_LCDPort__PC2 EQU CYREG_PRT2_PC2
LCD_Char_LCDPort__PORT EQU 2
LCD_Char_LCDPort__PS EQU CYREG_PRT2_PS
LCD_Char_LCDPort__SHIFT EQU 0

/* PWM_OUT_L */
PWM_OUT_L__0__DM__MASK EQU 0xE00000
PWM_OUT_L__0__DM__SHIFT EQU 21
PWM_OUT_L__0__DR EQU CYREG_PRT3_DR
PWM_OUT_L__0__HSIOM EQU CYREG_HSIOM_PORT_SEL3
PWM_OUT_L__0__HSIOM_MASK EQU 0xF0000000
PWM_OUT_L__0__HSIOM_SHIFT EQU 28
PWM_OUT_L__0__INTCFG EQU CYREG_PRT3_INTCFG
PWM_OUT_L__0__INTSTAT EQU CYREG_PRT3_INTSTAT
PWM_OUT_L__0__MASK EQU 0x80
PWM_OUT_L__0__OUT_SEL EQU CYREG_UDB_PA3_CFG10
PWM_OUT_L__0__OUT_SEL_SHIFT EQU 14
PWM_OUT_L__0__OUT_SEL_VAL EQU 2
PWM_OUT_L__0__PA__CFG0 EQU CYREG_UDB_PA3_CFG0
PWM_OUT_L__0__PA__CFG1 EQU CYREG_UDB_PA3_CFG1
PWM_OUT_L__0__PA__CFG10 EQU CYREG_UDB_PA3_CFG10
PWM_OUT_L__0__PA__CFG11 EQU CYREG_UDB_PA3_CFG11
PWM_OUT_L__0__PA__CFG12 EQU CYREG_UDB_PA3_CFG12
PWM_OUT_L__0__PA__CFG13 EQU CYREG_UDB_PA3_CFG13
PWM_OUT_L__0__PA__CFG14 EQU CYREG_UDB_PA3_CFG14
PWM_OUT_L__0__PA__CFG2 EQU CYREG_UDB_PA3_CFG2
PWM_OUT_L__0__PA__CFG3 EQU CYREG_UDB_PA3_CFG3
PWM_OUT_L__0__PA__CFG4 EQU CYREG_UDB_PA3_CFG4
PWM_OUT_L__0__PA__CFG5 EQU CYREG_UDB_PA3_CFG5
PWM_OUT_L__0__PA__CFG6 EQU CYREG_UDB_PA3_CFG6
PWM_OUT_L__0__PA__CFG7 EQU CYREG_UDB_PA3_CFG7
PWM_OUT_L__0__PA__CFG8 EQU CYREG_UDB_PA3_CFG8
PWM_OUT_L__0__PA__CFG9 EQU CYREG_UDB_PA3_CFG9
PWM_OUT_L__0__PC EQU CYREG_PRT3_PC
PWM_OUT_L__0__PC2 EQU CYREG_PRT3_PC2
PWM_OUT_L__0__PORT EQU 3
PWM_OUT_L__0__PS EQU CYREG_PRT3_PS
PWM_OUT_L__0__SHIFT EQU 7
PWM_OUT_L__DR EQU CYREG_PRT3_DR
PWM_OUT_L__INTCFG EQU CYREG_PRT3_INTCFG
PWM_OUT_L__INTSTAT EQU CYREG_PRT3_INTSTAT
PWM_OUT_L__MASK EQU 0x80
PWM_OUT_L__PA__CFG0 EQU CYREG_UDB_PA3_CFG0
PWM_OUT_L__PA__CFG1 EQU CYREG_UDB_PA3_CFG1
PWM_OUT_L__PA__CFG10 EQU CYREG_UDB_PA3_CFG10
PWM_OUT_L__PA__CFG11 EQU CYREG_UDB_PA3_CFG11
PWM_OUT_L__PA__CFG12 EQU CYREG_UDB_PA3_CFG12
PWM_OUT_L__PA__CFG13 EQU CYREG_UDB_PA3_CFG13
PWM_OUT_L__PA__CFG14 EQU CYREG_UDB_PA3_CFG14
PWM_OUT_L__PA__CFG2 EQU CYREG_UDB_PA3_CFG2
PWM_OUT_L__PA__CFG3 EQU CYREG_UDB_PA3_CFG3
PWM_OUT_L__PA__CFG4 EQU CYREG_UDB_PA3_CFG4
PWM_OUT_L__PA__CFG5 EQU CYREG_UDB_PA3_CFG5
PWM_OUT_L__PA__CFG6 EQU CYREG_UDB_PA3_CFG6
PWM_OUT_L__PA__CFG7 EQU CYREG_UDB_PA3_CFG7
PWM_OUT_L__PA__CFG8 EQU CYREG_UDB_PA3_CFG8
PWM_OUT_L__PA__CFG9 EQU CYREG_UDB_PA3_CFG9
PWM_OUT_L__PC EQU CYREG_PRT3_PC
PWM_OUT_L__PC2 EQU CYREG_PRT3_PC2
PWM_OUT_L__PORT EQU 3
PWM_OUT_L__PS EQU CYREG_PRT3_PS
PWM_OUT_L__SHIFT EQU 7

/* PWM_OUT_R */
PWM_OUT_R__0__DM__MASK EQU 0xE00000
PWM_OUT_R__0__DM__SHIFT EQU 21
PWM_OUT_R__0__DR EQU CYREG_PRT0_DR
PWM_OUT_R__0__HSIOM EQU CYREG_HSIOM_PORT_SEL0
PWM_OUT_R__0__HSIOM_MASK EQU 0xF0000000
PWM_OUT_R__0__HSIOM_SHIFT EQU 28
PWM_OUT_R__0__INTCFG EQU CYREG_PRT0_INTCFG
PWM_OUT_R__0__INTSTAT EQU CYREG_PRT0_INTSTAT
PWM_OUT_R__0__MASK EQU 0x80
PWM_OUT_R__0__OUT_SEL EQU CYREG_UDB_PA0_CFG10
PWM_OUT_R__0__OUT_SEL_SHIFT EQU 14
PWM_OUT_R__0__OUT_SEL_VAL EQU 0
PWM_OUT_R__0__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
PWM_OUT_R__0__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
PWM_OUT_R__0__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
PWM_OUT_R__0__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
PWM_OUT_R__0__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
PWM_OUT_R__0__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
PWM_OUT_R__0__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
PWM_OUT_R__0__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
PWM_OUT_R__0__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
PWM_OUT_R__0__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
PWM_OUT_R__0__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
PWM_OUT_R__0__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
PWM_OUT_R__0__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
PWM_OUT_R__0__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
PWM_OUT_R__0__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
PWM_OUT_R__0__PC EQU CYREG_PRT0_PC
PWM_OUT_R__0__PC2 EQU CYREG_PRT0_PC2
PWM_OUT_R__0__PORT EQU 0
PWM_OUT_R__0__PS EQU CYREG_PRT0_PS
PWM_OUT_R__0__SHIFT EQU 7
PWM_OUT_R__DR EQU CYREG_PRT0_DR
PWM_OUT_R__INTCFG EQU CYREG_PRT0_INTCFG
PWM_OUT_R__INTSTAT EQU CYREG_PRT0_INTSTAT
PWM_OUT_R__MASK EQU 0x80
PWM_OUT_R__PA__CFG0 EQU CYREG_UDB_PA0_CFG0
PWM_OUT_R__PA__CFG1 EQU CYREG_UDB_PA0_CFG1
PWM_OUT_R__PA__CFG10 EQU CYREG_UDB_PA0_CFG10
PWM_OUT_R__PA__CFG11 EQU CYREG_UDB_PA0_CFG11
PWM_OUT_R__PA__CFG12 EQU CYREG_UDB_PA0_CFG12
PWM_OUT_R__PA__CFG13 EQU CYREG_UDB_PA0_CFG13
PWM_OUT_R__PA__CFG14 EQU CYREG_UDB_PA0_CFG14
PWM_OUT_R__PA__CFG2 EQU CYREG_UDB_PA0_CFG2
PWM_OUT_R__PA__CFG3 EQU CYREG_UDB_PA0_CFG3
PWM_OUT_R__PA__CFG4 EQU CYREG_UDB_PA0_CFG4
PWM_OUT_R__PA__CFG5 EQU CYREG_UDB_PA0_CFG5
PWM_OUT_R__PA__CFG6 EQU CYREG_UDB_PA0_CFG6
PWM_OUT_R__PA__CFG7 EQU CYREG_UDB_PA0_CFG7
PWM_OUT_R__PA__CFG8 EQU CYREG_UDB_PA0_CFG8
PWM_OUT_R__PA__CFG9 EQU CYREG_UDB_PA0_CFG9
PWM_OUT_R__PC EQU CYREG_PRT0_PC
PWM_OUT_R__PC2 EQU CYREG_PRT0_PC2
PWM_OUT_R__PORT EQU 0
PWM_OUT_R__PS EQU CYREG_PRT0_PS
PWM_OUT_R__SHIFT EQU 7

/* ADC_SAR_Seq_cy_psoc4_sar */
ADC_SAR_Seq_cy_psoc4_sar__SAR_CTRL EQU CYREG_SAR_CTRL
ADC_SAR_Seq_cy_psoc4_sar__SAR_INTR EQU CYREG_SAR_INTR
ADC_SAR_Seq_cy_psoc4_sar__SAR_INTR_CAUSE EQU CYREG_SAR_INTR_CAUSE
ADC_SAR_Seq_cy_psoc4_sar__SAR_INTR_MASK EQU CYREG_SAR_INTR_MASK
ADC_SAR_Seq_cy_psoc4_sar__SAR_INTR_MASKED EQU CYREG_SAR_INTR_MASKED
ADC_SAR_Seq_cy_psoc4_sar__SAR_INTR_SET EQU CYREG_SAR_INTR_SET
ADC_SAR_Seq_cy_psoc4_sar__SAR_NUMBER EQU 0
ADC_SAR_Seq_cy_psoc4_sar__SAR_RANGE_COND EQU CYREG_SAR_RANGE_COND
ADC_SAR_Seq_cy_psoc4_sar__SAR_RANGE_INTR_MASK EQU CYREG_SAR_RANGE_INTR_MASK
ADC_SAR_Seq_cy_psoc4_sar__SAR_RANGE_INTR_MASKED EQU CYREG_SAR_RANGE_INTR_MASKED
ADC_SAR_Seq_cy_psoc4_sar__SAR_RANGE_INTR_SET EQU CYREG_SAR_RANGE_INTR_SET
ADC_SAR_Seq_cy_psoc4_sar__SAR_RANGE_THRES EQU CYREG_SAR_RANGE_THRES
ADC_SAR_Seq_cy_psoc4_sar__SAR_SAMPLE_CTRL EQU CYREG_SAR_SAMPLE_CTRL
ADC_SAR_Seq_cy_psoc4_sar__SAR_SAMPLE_TIME01 EQU CYREG_SAR_SAMPLE_TIME01
ADC_SAR_Seq_cy_psoc4_sar__SAR_SAMPLE_TIME23 EQU CYREG_SAR_SAMPLE_TIME23
ADC_SAR_Seq_cy_psoc4_sar__SAR_SATURATE_INTR_MASK EQU CYREG_SAR_SATURATE_INTR_MASK
ADC_SAR_Seq_cy_psoc4_sar__SAR_SATURATE_INTR_MASKED EQU CYREG_SAR_SATURATE_INTR_MASKED
ADC_SAR_Seq_cy_psoc4_sar__SAR_SATURATE_INTR_SET EQU CYREG_SAR_SATURATE_INTR_SET
ADC_SAR_Seq_cy_psoc4_sar__SAR_STATUS EQU CYREG_SAR_STATUS

/* ADC_SAR_Seq_cy_psoc4_sarmux_8 */
ADC_SAR_Seq_cy_psoc4_sarmux_8__CH_0_PIN EQU 3
ADC_SAR_Seq_cy_psoc4_sarmux_8__CH_0_PORT EQU 7
ADC_SAR_Seq_cy_psoc4_sarmux_8__CH_1_PIN EQU 2
ADC_SAR_Seq_cy_psoc4_sarmux_8__CH_1_PORT EQU 7
ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_CONFIG00 EQU CYREG_SAR_CHAN_CONFIG00
ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_CONFIG01 EQU CYREG_SAR_CHAN_CONFIG01
ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_CONFIG02 EQU CYREG_SAR_CHAN_CONFIG02
ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_CONFIG03 EQU CYREG_SAR_CHAN_CONFIG03
ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_CONFIG04 EQU CYREG_SAR_CHAN_CONFIG04
ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_CONFIG05 EQU CYREG_SAR_CHAN_CONFIG05
ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_CONFIG06 EQU CYREG_SAR_CHAN_CONFIG06
ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_CONFIG07 EQU CYREG_SAR_CHAN_CONFIG07
ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_EN EQU CYREG_SAR_CHAN_EN
ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_RESULT_VALID EQU CYREG_SAR_CHAN_RESULT_VALID
ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_RESULT00 EQU CYREG_SAR_CHAN_RESULT00
ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_RESULT01 EQU CYREG_SAR_CHAN_RESULT01
ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_RESULT02 EQU CYREG_SAR_CHAN_RESULT02
ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_RESULT03 EQU CYREG_SAR_CHAN_RESULT03
ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_RESULT04 EQU CYREG_SAR_CHAN_RESULT04
ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_RESULT05 EQU CYREG_SAR_CHAN_RESULT05
ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_RESULT06 EQU CYREG_SAR_CHAN_RESULT06
ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_RESULT07 EQU CYREG_SAR_CHAN_RESULT07
ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_WORK_VALID EQU CYREG_SAR_CHAN_WORK_VALID
ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_WORK00 EQU CYREG_SAR_CHAN_WORK00
ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_WORK01 EQU CYREG_SAR_CHAN_WORK01
ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_WORK02 EQU CYREG_SAR_CHAN_WORK02
ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_WORK03 EQU CYREG_SAR_CHAN_WORK03
ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_WORK04 EQU CYREG_SAR_CHAN_WORK04
ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_WORK05 EQU CYREG_SAR_CHAN_WORK05
ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_WORK06 EQU CYREG_SAR_CHAN_WORK06
ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_CHAN_WORK07 EQU CYREG_SAR_CHAN_WORK07
ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_INJ_CHAN_CONFIG EQU CYREG_SAR_INJ_CHAN_CONFIG
ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_INJ_RESULT EQU CYREG_SAR_INJ_RESULT
ADC_SAR_Seq_cy_psoc4_sarmux_8__SAR_START_CTRL EQU CYREG_SAR_START_CTRL

/* ADC_SAR_Seq_intClock */
ADC_SAR_Seq_intClock__DIVIDER_MASK EQU 0x0000FFFF
ADC_SAR_Seq_intClock__ENABLE EQU CYREG_CLK_DIVIDER_C00
ADC_SAR_Seq_intClock__ENABLE_MASK EQU 0x80000000
ADC_SAR_Seq_intClock__MASK EQU 0x80000000
ADC_SAR_Seq_intClock__REGISTER EQU CYREG_CLK_DIVIDER_C00

/* ADC_SAR_Seq_IRQ */
ADC_SAR_Seq_IRQ__INTC_CLR_EN_REG EQU CYREG_CM0_ICER
ADC_SAR_Seq_IRQ__INTC_CLR_PD_REG EQU CYREG_CM0_ICPR
ADC_SAR_Seq_IRQ__INTC_MASK EQU 0x4000
ADC_SAR_Seq_IRQ__INTC_NUMBER EQU 14
ADC_SAR_Seq_IRQ__INTC_PRIOR_MASK EQU 0xC00000
ADC_SAR_Seq_IRQ__INTC_PRIOR_NUM EQU 3
ADC_SAR_Seq_IRQ__INTC_PRIOR_REG EQU CYREG_CM0_IPR3
ADC_SAR_Seq_IRQ__INTC_SET_EN_REG EQU CYREG_CM0_ISER
ADC_SAR_Seq_IRQ__INTC_SET_PD_REG EQU CYREG_CM0_ISPR

/* Miscellaneous */
CYDEV_BCLK__HFCLK__HZ EQU 24000000
CYDEV_BCLK__HFCLK__KHZ EQU 24000
CYDEV_BCLK__HFCLK__MHZ EQU 24
CYDEV_BCLK__SYSCLK__HZ EQU 24000000
CYDEV_BCLK__SYSCLK__KHZ EQU 24000
CYDEV_BCLK__SYSCLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PANTHER EQU 18
CYDEV_CHIP_DIE_PSOC4A EQU 10
CYDEV_CHIP_DIE_PSOC5LP EQU 17
CYDEV_CHIP_DIE_TMA4 EQU 2
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC4
CYDEV_CHIP_JTAG_ID EQU 0x04161193
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 10
CYDEV_CHIP_MEMBER_4C EQU 15
CYDEV_CHIP_MEMBER_4D EQU 6
CYDEV_CHIP_MEMBER_4E EQU 4
CYDEV_CHIP_MEMBER_4F EQU 11
CYDEV_CHIP_MEMBER_4G EQU 2
CYDEV_CHIP_MEMBER_4H EQU 9
CYDEV_CHIP_MEMBER_4I EQU 14
CYDEV_CHIP_MEMBER_4J EQU 7
CYDEV_CHIP_MEMBER_4K EQU 8
CYDEV_CHIP_MEMBER_4L EQU 13
CYDEV_CHIP_MEMBER_4M EQU 12
CYDEV_CHIP_MEMBER_4N EQU 5
CYDEV_CHIP_MEMBER_4U EQU 3
CYDEV_CHIP_MEMBER_5A EQU 17
CYDEV_CHIP_MEMBER_5B EQU 16
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_4A
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PANTHER_ES0 EQU 0
CYDEV_CHIP_REV_PANTHER_ES1 EQU 1
CYDEV_CHIP_REV_PANTHER_PRODUCTION EQU 1
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4C_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_4A_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_READ_ACCELERATOR EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_PROTECT_KILL EQU 4
CYDEV_DEBUG_PROTECT_OPEN EQU 1
CYDEV_DEBUG_PROTECT EQU CYDEV_DEBUG_PROTECT_OPEN
CYDEV_DEBUG_PROTECT_PROTECTED EQU 2
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DFT_SELECT_CLK0 EQU 1
CYDEV_DFT_SELECT_CLK1 EQU 2
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_IMO_TRIMMED_BY_USB EQU 0
CYDEV_IMO_TRIMMED_BY_WCO EQU 0
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_STACK_SIZE EQU 0x0400
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 1
CYDEV_VDDA_MV EQU 3300
CYDEV_VDDD_MV EQU 3300
CYDEV_WDT_GENERATE_ISR EQU 1
CYIPBLOCK_M0S8_CTBM_VERSION EQU 0
CYIPBLOCK_m0s8cpuss_VERSION EQU 0
CYIPBLOCK_m0s8csd_VERSION EQU 0
CYIPBLOCK_m0s8gpio2_VERSION EQU 0
CYIPBLOCK_m0s8hsiom4a_VERSION EQU 0
CYIPBLOCK_m0s8lcd_VERSION EQU 0
CYIPBLOCK_m0s8lpcomp_VERSION EQU 0
CYIPBLOCK_m0s8pclk_VERSION EQU 0
CYIPBLOCK_m0s8sar_VERSION EQU 0
CYIPBLOCK_m0s8scb_VERSION EQU 0
CYIPBLOCK_m0s8srssv2_VERSION EQU 1
CYIPBLOCK_m0s8tcpwm_VERSION EQU 0
CYIPBLOCK_m0s8udbif_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 2
CYDEV_BOOTLOADER_ENABLE EQU 0

#endif /* INCLUDED_CYFITTERIAR_INC */