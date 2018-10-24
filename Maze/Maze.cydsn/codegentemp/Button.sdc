# THIS FILE IS AUTOMATICALLY GENERATED
# Project: C:\Users\lenovo\Desktop\MiGong\Button.cydsn\Button.cyprj
# Date: Thu, 19 Apr 2018 10:34:58 GMT
#set_units -time ns
create_clock -name {Clock_L(FFB)} -period 333.33333333333331 -waveform {0 166.666666666667} [list [get_pins {ClockBlock/ff_div_8}]]
create_clock -name {Clock_R(FFB)} -period 333.33333333333331 -waveform {0 166.666666666667} [list [get_pins {ClockBlock/ff_div_9}]]
create_clock -name {ADC_SAR_Seq_intClock(FFB)} -period 625 -waveform {0 312.5} [list [get_pins {ClockBlock/ff_div_7}]]
create_clock -name {CyRouted1} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/dsi_in_0}]]
create_clock -name {CyILO} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/ilo}]]
create_clock -name {CyLFCLK} -period 31250 -waveform {0 15625} [list [get_pins {ClockBlock/lfclk}]]
create_clock -name {CyIMO} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/imo}]]
create_clock -name {CyHFCLK} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/hfclk}]]
create_clock -name {CySYSCLK} -period 41.666666666666664 -waveform {0 20.8333333333333} [list [get_pins {ClockBlock/sysclk}]]
create_generated_clock -name {Clock_L} -source [get_pins {ClockBlock/hfclk}] -edges {1 9 17} [list]
create_generated_clock -name {Clock_R} -source [get_pins {ClockBlock/hfclk}] -edges {1 9 17} [list]
create_generated_clock -name {ADC_SAR_Seq_intClock} -source [get_pins {ClockBlock/hfclk}] -edges {1 15 31} [list]

set_false_path -from [get_pins {__ONE__/q}]

# Component constraints for C:\Users\lenovo\Desktop\MiGong\Button.cydsn\TopDesign\TopDesign.cysch
# Project: C:\Users\lenovo\Desktop\MiGong\Button.cydsn\Button.cyprj
# Date: Thu, 19 Apr 2018 10:34:53 GMT
