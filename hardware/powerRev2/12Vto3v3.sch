EESchema Schematic File Version 2
LIBS:power
LIBS:device
LIBS:transistors
LIBS:conn
LIBS:linear
LIBS:regul
LIBS:74xx
LIBS:cmos4000
LIBS:adc-dac
LIBS:memory
LIBS:xilinx
LIBS:special
LIBS:microcontrollers
LIBS:dsp
LIBS:microchip
LIBS:analog_switches
LIBS:motorola
LIBS:texas
LIBS:intel
LIBS:audio
LIBS:interface
LIBS:digital-audio
LIBS:philips
LIBS:display
LIBS:cypress
LIBS:siliconi
LIBS:opto
LIBS:atmel
LIBS:contrib
LIBS:valves
LIBS:lt6105
LIBS:tps563200
LIBS:lt3652
LIBS:lt4415
LIBS:msp430
LIBS:KL03-QFN24
LIBS:ncp508
LIBS:hardwareRev1-cache
LIBS:Tag-Connect
LIBS:mpcie
LIBS:RF-Head2
LIBS:ritli-rfhead
LIBS:powerRev2-cache
EELAYER 25 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 2 4
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L TPS563200 U5
U 1 1 5611FCFD
P 6000 2850
F 0 "U5" H 6000 3400 60  0000 C CNN
F 1 "TPS563200" H 6000 2900 60  0000 C CNN
F 2 "Housings_SOT-23_SOT-143_TSOT-6:SOT-23-6" H 6000 2850 60  0001 C CNN
F 3 "" H 6000 2850 60  0000 C CNN
	1    6000 2850
	1    0    0    -1  
$EndComp
$Comp
L C C10
U 1 1 5611FD47
P 4850 2550
F 0 "C10" H 4850 2650 40  0000 L CNN
F 1 "22uf" H 4856 2465 40  0000 L CNN
F 2 "Capacitors_SMD:C_1206" H 4888 2400 30  0001 C CNN
F 3 "" H 4850 2550 60  0000 C CNN
F 4 "GRM31CR61E226ME15L" H 4850 2550 60  0001 C CNN "Manufacturer PN"
	1    4850 2550
	1    0    0    -1  
$EndComp
Text HLabel 4250 2850 0    60   Input ~ 0
Vin
Text HLabel 4250 2300 0    60   Input ~ 0
Gnd
Wire Wire Line
	4250 2300 5500 2300
Wire Wire Line
	5500 2300 5500 2350
Wire Wire Line
	4850 2300 4850 2350
Connection ~ 4850 2300
Wire Wire Line
	4250 2850 5500 2850
Wire Wire Line
	5500 2850 5500 2700
Wire Wire Line
	4850 2750 4850 2850
Connection ~ 4850 2850
$Comp
L C C11
U 1 1 5611FDFD
P 6750 2350
F 0 "C11" H 6750 2450 40  0000 L CNN
F 1 "100nf" H 6756 2265 40  0000 L CNN
F 2 "Capacitors_SMD:C_0402" H 6788 2200 30  0001 C CNN
F 3 "" H 6750 2350 60  0000 C CNN
	1    6750 2350
	0    1    1    0   
$EndComp
$Comp
L R R25
U 1 1 5611FE98
P 7900 2600
F 0 "R25" V 7980 2600 40  0000 C CNN
F 1 "33.2k" V 7907 2601 40  0000 C CNN
F 2 "Resistors_SMD:R_0402" V 7830 2600 30  0001 C CNN
F 3 "" H 7900 2600 30  0000 C CNN
	1    7900 2600
	1    0    0    -1  
$EndComp
$Comp
L R R26
U 1 1 5611FECF
P 7900 3200
F 0 "R26" V 7980 3200 40  0000 C CNN
F 1 "10k" V 7907 3201 40  0000 C CNN
F 2 "Resistors_SMD:R_0402" V 7830 3200 30  0001 C CNN
F 3 "" H 7900 3200 30  0000 C CNN
	1    7900 3200
	1    0    0    -1  
$EndComp
$Comp
L INDUCTOR L1
U 1 1 5611FEEF
P 7400 2350
F 0 "L1" V 7350 2350 40  0000 C CNN
F 1 "2.2uh" V 7500 2350 40  0000 C CNN
F 2 "SMD_Packages:SMD-2010_Pol" H 7400 2350 60  0001 C CNN
F 3 "" H 7400 2350 60  0000 C CNN
F 4 "TYS50402R2N-10" H 7400 2350 60  0001 C CNN "Manufacturer PN"
	1    7400 2350
	0    1    1    0   
$EndComp
Connection ~ 7000 2350
Wire Wire Line
	7700 2350 7900 2350
Wire Wire Line
	7900 2850 7900 2950
Wire Wire Line
	7900 2900 6500 2900
Wire Wire Line
	6500 2900 6500 2700
Connection ~ 7900 2900
Wire Wire Line
	6500 2350 6550 2350
Wire Wire Line
	6950 2350 7100 2350
Wire Wire Line
	5500 2550 5200 2550
Wire Wire Line
	5200 2550 5200 2050
Wire Wire Line
	5200 2050 7000 2050
Wire Wire Line
	7000 2050 7000 2350
Wire Wire Line
	7900 4150 7900 3450
Wire Wire Line
	6500 2550 6650 2550
Wire Wire Line
	6650 2550 6650 3300
$Comp
L R R24
U 1 1 56120123
P 6300 3150
F 0 "R24" V 6380 3150 40  0000 C CNN
F 1 "10K" V 6307 3151 40  0000 C CNN
F 2 "Resistors_SMD:R_0402" V 6230 3150 30  0001 C CNN
F 3 "" H 6300 3150 30  0000 C CNN
	1    6300 3150
	0    1    1    0   
$EndComp
Wire Wire Line
	5400 2850 5400 3150
Wire Wire Line
	5400 3150 6050 3150
Connection ~ 5400 2850
Wire Wire Line
	6550 3150 6650 3150
Connection ~ 6650 3150
Wire Wire Line
	6650 3700 6650 4150
$Comp
L MOS_N Q3
U 1 1 561201E9
P 6550 3500
F 0 "Q3" H 6560 3670 60  0000 R CNN
F 1 "MOS_N" H 6560 3350 60  0000 R CNN
F 2 "Housings_SOT-23_SOT-143_TSOT-6:SOT-23" H 6550 3500 60  0001 C CNN
F 3 "" H 6550 3500 60  0000 C CNN
F 4 "2N7002P,215" H 6550 3500 60  0001 C CNN "Manufacturer PN"
	1    6550 3500
	1    0    0    -1  
$EndComp
$Comp
L R R23
U 1 1 561202C6
P 6100 3800
F 0 "R23" V 6180 3800 40  0000 C CNN
F 1 "R" V 6107 3801 40  0000 C CNN
F 2 "Resistors_SMD:R_0402" V 6030 3800 30  0001 C CNN
F 3 "" H 6100 3800 30  0000 C CNN
	1    6100 3800
	1    0    0    -1  
$EndComp
Wire Wire Line
	6650 4050 6100 4050
Connection ~ 6650 4050
Wire Wire Line
	5800 3500 6350 3500
Wire Wire Line
	6100 3500 6100 3550
Connection ~ 6100 3500
Text HLabel 5800 3500 0    60   Input ~ 0
En
$Comp
L C C12
U 1 1 561203D3
P 8250 2600
F 0 "C12" H 8250 2700 40  0000 L CNN
F 1 "47uf" H 8256 2515 40  0000 L CNN
F 2 "Capacitors_SMD:C_1206" H 8288 2450 30  0001 C CNN
F 3 "" H 8250 2600 60  0000 C CNN
F 4 "GRM31CE70J476ME15L" H 8250 2600 60  0001 C CNN "Manufacturer PN"
	1    8250 2600
	1    0    0    -1  
$EndComp
Wire Wire Line
	8250 2800 8250 3500
Wire Wire Line
	8250 3500 7900 3500
Connection ~ 7900 3500
Wire Wire Line
	7800 2350 7800 2300
Wire Wire Line
	7800 2300 8850 2300
Wire Wire Line
	8250 2300 8250 2400
Connection ~ 7800 2350
Connection ~ 8250 2300
Text HLabel 8850 2300 2    60   Input ~ 0
Vout
Wire Wire Line
	4650 4150 7900 4150
Wire Wire Line
	4650 4150 4650 2300
Connection ~ 4650 2300
Connection ~ 6650 4150
$EndSCHEMATC
