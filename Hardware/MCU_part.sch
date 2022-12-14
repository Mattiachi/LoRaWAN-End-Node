EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 3 3
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
L power:GND #PWR0119
U 1 1 6308ED70
P 3000 4150
F 0 "#PWR0119" H 3000 3900 50  0001 C CNN
F 1 "GND" H 3005 3977 50  0000 C CNN
F 2 "" H 3000 4150 50  0001 C CNN
F 3 "" H 3000 4150 50  0001 C CNN
	1    3000 4150
	1    0    0    -1  
$EndComp
Wire Wire Line
	3000 4000 3000 4150
Wire Wire Line
	3000 1000 3000 1100
Connection ~ 3000 1100
Wire Wire Line
	3000 1100 3000 1600
Connection ~ 3250 1100
Wire Wire Line
	3250 1100 3000 1100
Wire Wire Line
	3650 1100 3250 1100
$Comp
L power:GND #PWR0120
U 1 1 63091593
P 3250 1450
F 0 "#PWR0120" H 3250 1200 50  0001 C CNN
F 1 "GND" H 3255 1277 50  0000 C CNN
F 2 "" H 3250 1450 50  0001 C CNN
F 3 "" H 3250 1450 50  0001 C CNN
	1    3250 1450
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0121
U 1 1 6309262C
P 3650 1450
F 0 "#PWR0121" H 3650 1200 50  0001 C CNN
F 1 "GND" H 3655 1277 50  0000 C CNN
F 2 "" H 3650 1450 50  0001 C CNN
F 3 "" H 3650 1450 50  0001 C CNN
	1    3650 1450
	1    0    0    -1  
$EndComp
Wire Wire Line
	3650 1400 3650 1450
Wire Wire Line
	3250 1400 3250 1450
Text Notes 3200 1050 0    39   ~ 0
Decoupling caps: close to each Vdd pin (7 & 28 & 22)
Text GLabel 5000 3100 2    50   Input ~ 0
DIO5
Text GLabel 5000 3200 2    50   Input ~ 0
DIO0
Text GLabel 5000 3300 2    50   Input ~ 0
DIO1
Text GLabel 5000 3500 2    50   Input ~ 0
DIO2
Wire Wire Line
	4300 3700 4650 3700
Wire Wire Line
	4300 3800 4650 3800
Text Label 4650 3700 0    50   ~ 0
PGC
Text Label 4650 3800 0    50   ~ 0
PGD
Wire Wire Line
	4300 3100 4500 3100
Wire Wire Line
	4500 3200 4300 3200
Wire Wire Line
	4300 3300 4500 3300
Wire Wire Line
	4300 3500 4500 3500
Wire Wire Line
	4800 3100 5000 3100
Wire Wire Line
	4800 3200 5000 3200
Wire Wire Line
	4800 3300 5000 3300
Wire Wire Line
	4800 3500 5000 3500
Wire Wire Line
	4300 1800 4850 1800
Wire Wire Line
	4850 1800 4850 1750
Wire Wire Line
	4850 1300 4850 1450
Text Label 5100 1800 0    50   ~ 0
MCLR
Wire Wire Line
	4850 1800 5100 1800
Connection ~ 4850 1800
Text GLabel 950  2200 0    50   Input ~ 0
SCK
Text GLabel 950  2300 0    50   Input ~ 0
MISO
Text GLabel 950  2500 0    50   Input ~ 0
NSS
Text GLabel 950  2600 0    50   Input ~ 0
MOSI
Wire Wire Line
	1400 2200 1600 2200
Wire Wire Line
	1100 2200 950  2200
Wire Wire Line
	950  2300 1100 2300
Wire Wire Line
	1400 2300 1600 2300
Wire Wire Line
	1600 2500 1400 2500
Wire Wire Line
	1400 2600 1600 2600
Wire Wire Line
	1100 2500 950  2500
Wire Wire Line
	950  2600 1100 2600
NoConn ~ 4300 2400
NoConn ~ 4300 2500
NoConn ~ 4300 2900
NoConn ~ 4300 2000
NoConn ~ 4300 2100
NoConn ~ 1600 1800
NoConn ~ 1600 1900
NoConn ~ 1600 2000
NoConn ~ 1600 3700
NoConn ~ 1600 3800
Wire Notes Line
	600  700  600  4500
Wire Notes Line
	600  4500 5750 4500
Wire Notes Line
	5750 4500 5750 700 
Wire Notes Line
	5750 700  600  700 
Text Label 9500 1100 0    50   ~ 0
MCLR
Wire Wire Line
	9500 1100 10000 1100
Wire Wire Line
	9200 1050 9200 1200
Wire Wire Line
	9200 1200 10000 1200
$Comp
L power:GND #PWR0125
U 1 1 630BAA58
P 9200 1400
F 0 "#PWR0125" H 9200 1150 50  0001 C CNN
F 1 "GND" H 9205 1227 50  0000 C CNN
F 2 "" H 9200 1400 50  0001 C CNN
F 3 "" H 9200 1400 50  0001 C CNN
	1    9200 1400
	1    0    0    -1  
$EndComp
Wire Wire Line
	9200 1400 9200 1300
Wire Wire Line
	9200 1300 10000 1300
Text Label 9500 1500 0    50   ~ 0
PGC
Wire Wire Line
	9500 1500 10000 1500
Text Label 9500 1400 0    50   ~ 0
PGD
Wire Wire Line
	9500 1400 10000 1400
Wire Notes Line
	10800 1850 8550 1850
Wire Notes Line
	8550 750  10800 750 
Text Notes 8700 1800 0    59   ~ 0
Programming port
Text Notes 650  1900 0    47   ~ 0
75 ohm limiting current \nresistor (Basic parts)
Text GLabel 1500 3300 0    47   Input ~ 0
NRESET
Wire Wire Line
	1600 3300 1500 3300
$Comp
L power:GND #PWR0131
U 1 1 6309DF69
P 9950 5350
F 0 "#PWR0131" H 9950 5100 50  0001 C CNN
F 1 "GND" H 9955 5177 50  0000 C CNN
F 2 "" H 9950 5350 50  0001 C CNN
F 3 "" H 9950 5350 50  0001 C CNN
	1    9950 5350
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR0132
U 1 1 6309FB56
P 9850 4600
F 0 "#PWR0132" H 9850 4350 50  0001 C CNN
F 1 "GND" H 9855 4427 50  0000 C CNN
F 2 "" H 9850 4600 50  0001 C CNN
F 3 "" H 9850 4600 50  0001 C CNN
	1    9850 4600
	1    0    0    -1  
$EndComp
Wire Wire Line
	9850 4550 9850 4600
$Comp
L power:VDD #PWR0133
U 1 1 630A118A
P 9500 4050
F 0 "#PWR0133" H 9500 3900 50  0001 C CNN
F 1 "VDD" H 9515 4223 50  0000 C CNN
F 2 "" H 9500 4050 50  0001 C CNN
F 3 "" H 9500 4050 50  0001 C CNN
	1    9500 4050
	1    0    0    -1  
$EndComp
Wire Wire Line
	9850 4200 9500 4200
Wire Wire Line
	9500 4050 9500 4200
Connection ~ 9500 4200
Wire Wire Line
	9500 4200 9500 4700
Wire Wire Line
	9850 4200 9850 4250
Wire Wire Line
	9950 4950 9950 4900
Wire Wire Line
	9950 4900 9500 4900
Text Label 10200 4900 0    47   ~ 0
temp_sens2
Wire Wire Line
	10200 4900 9950 4900
Connection ~ 9950 4900
Wire Wire Line
	9950 5250 9950 5350
$Comp
L power:GND #PWR0134
U 1 1 630AF9F9
P 9600 5200
F 0 "#PWR0134" H 9600 4950 50  0001 C CNN
F 1 "GND" H 9605 5027 50  0000 C CNN
F 2 "" H 9600 5200 50  0001 C CNN
F 3 "" H 9600 5200 50  0001 C CNN
	1    9600 5200
	1    0    0    -1  
$EndComp
Wire Wire Line
	9500 5100 9600 5100
Wire Wire Line
	9600 5100 9600 5200
Text Notes 9950 3850 0    47   ~ 0
Temperature sensor 
Text Notes 10300 3950 0    47   ~ 0
10mV/??C\n
Text Notes 8600 3900 0    47   ~ 9
TEMP_SENSOR_B\n
Wire Wire Line
	1350 6100 1350 5550
$Comp
L power:GND #PWR0135
U 1 1 630F83C1
P 1350 6550
F 0 "#PWR0135" H 1350 6300 50  0001 C CNN
F 1 "GND" H 1355 6377 50  0000 C CNN
F 2 "" H 1350 6550 50  0001 C CNN
F 3 "" H 1350 6550 50  0001 C CNN
	1    1350 6550
	1    0    0    -1  
$EndComp
Wire Wire Line
	1350 6400 1350 6550
Text Notes 550  7700 0    47   ~ 0
when EN=1 TPL5110 is a timer.\nOtherwise it enters the one shot mode, more on that on\nhttps://www.ti.com/lit/ds/symlink/tpl5110.pdf?ts=1661334384271&ref_url=https%253A%252F%252Fwww.google.com%252F
Wire Wire Line
	1350 5550 2150 5550
Wire Wire Line
	2150 5600 2150 5550
Connection ~ 2150 5550
$Comp
L power:GND #PWR0136
U 1 1 63078382
P 2150 6850
F 0 "#PWR0136" H 2150 6600 50  0001 C CNN
F 1 "GND" H 2155 6677 50  0000 C CNN
F 2 "" H 2150 6850 50  0001 C CNN
F 3 "" H 2150 6850 50  0001 C CNN
	1    2150 6850
	1    0    0    -1  
$EndComp
Wire Wire Line
	2150 6850 2150 6750
Wire Notes Line
	6700 4950 6700 7750
Wire Notes Line
	6700 7750 500  7750
Wire Notes Line
	500  7750 500  4950
Wire Notes Line
	500  4950 6700 4950
Text Notes 550  5050 0    47   ~ 9
Power management
Text Notes 650  850  0    47   ~ 9
Microcontroller Unit\n
Text Notes 2550 5900 0    47   ~ 0
Extended
$Comp
L power:GND #PWR0137
U 1 1 630CC058
P 3050 6750
F 0 "#PWR0137" H 3050 6500 50  0001 C CNN
F 1 "GND" H 3055 6577 50  0000 C CNN
F 2 "" H 3050 6750 50  0001 C CNN
F 3 "" H 3050 6750 50  0001 C CNN
	1    3050 6750
	1    0    0    -1  
$EndComp
Wire Wire Line
	3050 6650 3050 6750
$Comp
L TS-1187A-B-A-B:TS-1187A-B-A-B S301
U 1 1 63067BD6
P 2150 5900
F 0 "S301" V 1500 5850 50  0000 L CNN
F 1 "TS-1187A-B-A-B" V 1600 5500 50  0000 L CNN
F 2 "Lib:SW_TS-1187A-B-A-B" H 2150 5900 50  0001 L BNN
F 3 "" H 2150 5900 50  0001 L BNN
F 4 "A0" H 2150 5900 50  0001 L BNN "PARTREV"
F 5 "Manufacturer Recommendations" H 2150 5900 50  0001 L BNN "STANDARD"
F 6 "1.5mm" H 2150 5900 50  0001 L BNN "MAXIMUM_PACKAGE_HEIGHT"
F 7 "XKB Industrial Precision" H 2150 5900 50  0001 L BNN "MANUFACTURER"
F 8 "No" H 2150 5900 50  0001 C CNN "Extended"
F 9 "C318884" V 1700 5850 50  0000 C CNN "LCSC"
F 10 "TS-1187A-B-A-B" H 2150 5900 50  0001 C CNN "MPN"
	1    2150 5900
	0    1    1    0   
$EndComp
$Comp
L Device:Battery_Cell B1
U 1 1 630F0073
P 1350 6300
F 0 "B1" H 1468 6396 50  0000 L CNN
F 1 "Battery_Cell" H 1468 6305 50  0000 L CNN
F 2 "Battery:BatteryHolder_Keystone_2468_2xAAA" V 1350 6360 50  0001 C CNN
F 3 "~" V 1350 6360 50  0001 C CNN
F 4 "" H 1350 6300 50  0001 C CNN "Extended"
F 5 "2468" H 1350 6300 50  0001 C CNN "MPN"
F 6 "" H 1350 6300 50  0001 C CNN "LCSC"
	1    1350 6300
	1    0    0    -1  
$EndComp
$Comp
L Device:C C307
U 1 1 6309D1E8
P 9850 4400
F 0 "C307" H 9735 4354 50  0000 R CNN
F 1 "100n" H 9735 4445 50  0000 R CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 9888 4250 50  0001 C CNN
F 3 "~" H 9850 4400 50  0001 C CNN
F 4 "No" H 9850 4400 50  0001 C CNN "Extended"
F 5 "C14663" H 9650 4550 50  0000 C CNN "LCSC"
F 6 "CC0603KRX7R9BB104" H 9850 4400 50  0001 C CNN "MPN"
	1    9850 4400
	-1   0    0    1   
$EndComp
$Comp
L Device:C C308
U 1 1 6309C4E3
P 9950 5100
F 0 "C308" H 9835 5054 50  0000 R CNN
F 1 "100n" H 9835 5145 50  0000 R CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 9988 4950 50  0001 C CNN
F 3 "~" H 9950 5100 50  0001 C CNN
F 4 "No" H 9950 5100 50  0001 C CNN "Extended"
F 5 "C14663" H 9700 5250 50  0000 C CNN "LCSC"
F 6 "CC0603KRX7R9BB104" H 9950 5100 50  0001 C CNN "MPN"
	1    9950 5100
	-1   0    0    1   
$EndComp
$Comp
L TMP36GT9Z:TMP36GT9Z U4
U 1 1 6309B63C
P 9100 4900
F 0 "U4" H 9208 5455 50  0000 C CNN
F 1 "TMP36GT9Z" H 9208 5364 50  0000 C CNN
F 2 "Lib:TO92127P521H733-3" H 9100 4900 50  0001 L BNN
F 3 "" H 9100 4900 50  0001 L BNN
F 4 "Analog Devices" H 9100 4900 50  0001 L BNN "MANUFACTURER"
F 5 "IPC-7251" H 9100 4900 50  0001 L BNN "STANDARD"
F 6 "H" H 9100 4900 50  0001 L BNN "PARTREV"
F 7 "C53490" H 9208 5273 50  0000 C CNN "LCSC"
F 8 "TMP36GT9Z" H 9100 4900 50  0001 C CNN "MPN"
F 9 "Yes" H 9100 4900 50  0001 C CNN "Extended"
	1    9100 4900
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x05_Female J1
U 1 1 630B6B34
P 10200 1300
F 0 "J1" H 10228 1326 50  0000 L CNN
F 1 "ICSP" H 10228 1235 50  0000 L CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x05_P2.54mm_Vertical" H 10200 1300 50  0001 C CNN
F 3 "~" H 10200 1300 50  0001 C CNN
F 4 "" H 10200 1300 50  0001 C CNN "Extended"
F 5 "" H 10200 1300 50  0001 C CNN "LCSC"
F 6 "" H 10200 1300 50  0001 C CNN "MPN"
	1    10200 1300
	1    0    0    -1  
$EndComp
$Comp
L Device:R R309
U 1 1 6309FD2B
P 1250 2600
F 0 "R309" V 1200 2800 50  0000 C CNN
F 1 "75" V 1250 2600 50  0000 C CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 1180 2600 50  0001 C CNN
F 3 "~" H 1250 2600 50  0001 C CNN
F 4 "No" H 1250 2600 50  0001 C CNN "Extended"
F 5 "C4275" H 1250 2600 50  0001 C CNN "LCSC"
F 6 "0603WAF750JT5E" H 1250 2600 50  0001 C CNN "MPN"
	1    1250 2600
	0    1    1    0   
$EndComp
$Comp
L Device:R R308
U 1 1 6309FA38
P 1250 2500
F 0 "R308" V 1200 2700 50  0000 C CNN
F 1 "75" V 1250 2500 50  0000 C CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 1180 2500 50  0001 C CNN
F 3 "~" H 1250 2500 50  0001 C CNN
F 4 "No" H 1250 2500 50  0001 C CNN "Extended"
F 5 "C4275" H 1250 2500 50  0001 C CNN "LCSC"
F 6 "0603WAF750JT5E" H 1250 2500 50  0001 C CNN "MPN"
	1    1250 2500
	0    1    1    0   
$EndComp
$Comp
L Device:R R307
U 1 1 6309F7C3
P 1250 2300
F 0 "R307" V 1200 2500 50  0000 C CNN
F 1 "75" V 1250 2300 50  0000 C CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 1180 2300 50  0001 C CNN
F 3 "~" H 1250 2300 50  0001 C CNN
F 4 "No" H 1250 2300 50  0001 C CNN "Extended"
F 5 "C4275" V 1050 2300 50  0000 C CNN "LCSC"
F 6 "0603WAF750JT5E" H 1250 2300 50  0001 C CNN "MPN"
	1    1250 2300
	0    1    1    0   
$EndComp
$Comp
L Device:R R306
U 1 1 6309DD67
P 1250 2200
F 0 "R306" V 1200 2400 50  0000 C CNN
F 1 "75" V 1250 2200 50  0000 C CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 1180 2200 50  0001 C CNN
F 3 "~" H 1250 2200 50  0001 C CNN
F 4 "No" H 1250 2200 50  0001 C CNN "Extended"
F 5 "C4275" H 1250 2200 50  0001 C CNN "LCSC"
F 6 "0603WAF750JT5E" H 1250 2200 50  0001 C CNN "MPN"
	1    1250 2200
	0    1    1    0   
$EndComp
$Comp
L Device:R R305
U 1 1 6309A550
P 4850 1600
F 0 "R305" H 5000 1650 50  0000 C CNN
F 1 "10k" H 5000 1550 50  0000 C CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 4780 1600 50  0001 C CNN
F 3 "~" H 4850 1600 50  0001 C CNN
F 4 "No" H 4850 1600 50  0001 C CNN "Extended"
F 5 "C25804" H 5050 1750 50  0000 C CNN "LCSC"
F 6 "0603WAF1002T5E" H 4850 1600 50  0001 C CNN "MPN"
	1    4850 1600
	1    0    0    -1  
$EndComp
$Comp
L Device:R R304
U 1 1 6309865B
P 4650 3500
F 0 "R304" V 4600 3700 50  0000 C CNN
F 1 "75" V 4650 3500 50  0000 C CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 4580 3500 50  0001 C CNN
F 3 "~" H 4650 3500 50  0001 C CNN
F 4 "No" H 4650 3500 50  0001 C CNN "Extended"
F 5 "C4275" H 4650 3500 50  0001 C CNN "LCSC"
F 6 "0603WAF750JT5E" H 4650 3500 50  0001 C CNN "MPN"
	1    4650 3500
	0    1    1    0   
$EndComp
$Comp
L Device:R R303
U 1 1 63098417
P 4650 3300
F 0 "R303" V 4600 3500 50  0000 C CNN
F 1 "75" V 4650 3300 50  0000 C CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 4580 3300 50  0001 C CNN
F 3 "~" H 4650 3300 50  0001 C CNN
F 4 "No" H 4650 3300 50  0001 C CNN "Extended"
F 5 "C4275" H 4650 3300 50  0001 C CNN "LCSC"
F 6 "0603WAF750JT5E" H 4650 3300 50  0001 C CNN "MPN"
	1    4650 3300
	0    1    1    0   
$EndComp
$Comp
L Device:R R302
U 1 1 63098089
P 4650 3200
F 0 "R302" V 4600 3400 50  0000 C CNN
F 1 "75" V 4650 3200 50  0000 C CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 4580 3200 50  0001 C CNN
F 3 "~" H 4650 3200 50  0001 C CNN
F 4 "No" H 4650 3200 50  0001 C CNN "Extended"
F 5 "C4275" H 4650 3200 50  0001 C CNN "LCSC"
F 6 "0603WAF750JT5E" H 4650 3200 50  0001 C CNN "MPN"
	1    4650 3200
	0    1    1    0   
$EndComp
$Comp
L Device:R R301
U 1 1 630968E4
P 4650 3100
F 0 "R301" V 4600 3300 50  0000 C CNN
F 1 "75" V 4650 3100 50  0000 C CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 4580 3100 50  0001 C CNN
F 3 "~" H 4650 3100 50  0001 C CNN
F 4 "No" H 4650 3100 50  0001 C CNN "Extended"
F 5 "C4275" V 4500 3300 50  0000 C CNN "LCSC"
F 6 "0603WAF750JT5E" H 4650 3100 50  0001 C CNN "MPN"
	1    4650 3100
	0    1    1    0   
$EndComp
$Comp
L Device:C C302
U 1 1 63090135
P 3650 1250
F 0 "C302" H 3700 1350 50  0000 L CNN
F 1 "100n" H 3700 1150 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 3688 1100 50  0001 C CNN
F 3 "~" H 3650 1250 50  0001 C CNN
F 4 "No" H 3650 1250 50  0001 C CNN "Extended"
F 5 "C14663" H 3800 1050 50  0000 C CNN "LCSC"
F 6 "CC0603KRX7R9BB104" H 3650 1250 50  0001 C CNN "MPN"
	1    3650 1250
	1    0    0    -1  
$EndComp
$Comp
L Device:C C301
U 1 1 6308FBBE
P 3250 1250
F 0 "C301" H 3300 1350 50  0000 L CNN
F 1 "100n" H 3300 1150 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 3288 1100 50  0001 C CNN
F 3 "~" H 3250 1250 50  0001 C CNN
F 4 "No" H 3250 1250 50  0001 C CNN "Extended"
F 5 "C14663" H 3400 1050 50  0000 C CNN "LCSC"
F 6 "CC0603KRX7R9BB104" H 3250 1250 50  0001 C CNN "MPN"
	1    3250 1250
	1    0    0    -1  
$EndComp
$Comp
L MCU_Microchip_PIC18:PIC18F46K22-xPT U2
U 1 1 630895C7
P 3000 2800
F 0 "U2" H 2100 4200 50  0000 C CNN
F 1 "PIC18F46K22-xPT" H 2400 4100 50  0000 C CNN
F 2 "Package_QFP:TQFP-44_10x10mm_P0.8mm" H 2850 2600 50  0001 C CIN
F 3 "http://ww1.microchip.com/downloads/en/DeviceDoc/40001412G.pdf" H 2950 2400 50  0001 C CNN
F 4 "Yes" H 3000 2800 50  0001 C CNN "Extended"
F 5 "C89972" H 3000 2800 50  0000 C CNN "LCSC"
F 6 "PIC18F46K22-I/PT" H 3000 2800 50  0001 C CNN "MPN"
	1    3000 2800
	1    0    0    -1  
$EndComp
$Comp
L Device:R Rext1
U 1 1 630706FD
P 2150 6600
F 0 "Rext1" H 2220 6691 50  0000 L CNN
F 1 "62k" H 2220 6600 50  0000 L CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 2080 6600 50  0001 C CNN
F 3 "~" H 2150 6600 50  0001 C CNN
F 4 "No" H 2150 6600 50  0001 C CNN "Extended"
F 5 " C23221" H 2220 6509 50  0000 L CNN "LCSC"
F 6 " 0603WAF6202T5E" H 2150 6600 50  0001 C CNN "MPN"
	1    2150 6600
	1    0    0    -1  
$EndComp
Wire Wire Line
	2150 6200 2150 6250
$Comp
L Timer:TPL5010 U5
U 1 1 63135A7C
P 3050 6250
F 0 "U5" H 3350 6700 50  0000 C CNN
F 1 "TPL5010" H 3350 6600 50  0000 C CNN
F 2 "Package_TO_SOT_SMD:SOT-23-6" H 3050 6250 50  0001 C CNN
F 3 "http://www.ti.com/lit/ds/symlink/tpl5010.pdf" H 2850 5950 50  0001 C CNN
F 4 "Yes" H 3050 6250 50  0001 C CNN "Extended"
F 5 "C125800" H 2700 6750 50  0000 C CNN "LCSC"
F 6 "TPL5010DDCT" H 3050 6250 50  0001 C CNN "MPN"
	1    3050 6250
	1    0    0    -1  
$EndComp
Wire Wire Line
	3050 5550 3050 5850
Wire Wire Line
	2450 6250 2150 6250
Connection ~ 2150 6250
Wire Wire Line
	2150 6250 2150 6450
Text Label 3850 6250 0    47   ~ 0
DONE
Wire Wire Line
	3850 6250 3550 6250
Text Label 3850 6350 0    47   ~ 0
WAKE_UP
Wire Wire Line
	3550 6350 3850 6350
Text Label 3850 6150 0    50   ~ 0
MCLR
Wire Wire Line
	3550 6150 3850 6150
$Comp
L power:VDD #PWR0138
U 1 1 6314483D
P 6200 5450
F 0 "#PWR0138" H 6200 5300 50  0001 C CNN
F 1 "VDD" H 6215 5623 50  0000 C CNN
F 2 "" H 6200 5450 50  0001 C CNN
F 3 "" H 6200 5450 50  0001 C CNN
	1    6200 5450
	1    0    0    -1  
$EndComp
Wire Wire Line
	1350 5450 1350 5550
Connection ~ 1350 5550
$Comp
L power:GND #PWR0139
U 1 1 6314A624
P 5550 6100
F 0 "#PWR0139" H 5550 5850 50  0001 C CNN
F 1 "GND" H 5555 5927 50  0000 C CNN
F 2 "" H 5550 6100 50  0001 C CNN
F 3 "" H 5550 6100 50  0001 C CNN
	1    5550 6100
	1    0    0    -1  
$EndComp
Wire Wire Line
	5550 6100 5550 6050
Text Notes 4100 5200 0    47   ~ 0
10pA - 100 nA load switch\nRds on 180 - 480 mOhm with Vin 3-1.8 V
Wire Wire Line
	2150 5550 3050 5550
Connection ~ 3050 5550
Wire Wire Line
	3050 5550 4550 5550
$Comp
L Device:C C309
U 1 1 6315881E
P 4550 5850
F 0 "C309" H 4665 5896 50  0000 L CNN
F 1 "1u" H 4665 5805 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 4588 5700 50  0001 C CNN
F 3 "~" H 4550 5850 50  0001 C CNN
F 4 "No" H 4550 5850 50  0001 C CNN "Extended"
F 5 "" H 4800 5700 50  0000 C CNN "LCSC"
F 6 "CC0603KRX7R7BB105" H 4550 5850 50  0001 C CNN "MPN"
	1    4550 5850
	1    0    0    -1  
$EndComp
Connection ~ 4550 5550
Wire Wire Line
	4550 5550 5250 5550
Wire Wire Line
	4550 5700 4550 5550
$Comp
L power:GND #PWR0140
U 1 1 6315BFE8
P 4550 6050
F 0 "#PWR0140" H 4550 5800 50  0001 C CNN
F 1 "GND" H 4555 5877 50  0000 C CNN
F 2 "" H 4550 6050 50  0001 C CNN
F 3 "" H 4550 6050 50  0001 C CNN
	1    4550 6050
	1    0    0    -1  
$EndComp
Wire Wire Line
	4550 6000 4550 6050
$Comp
L Device:C C310
U 1 1 6315EDD0
P 6200 5800
F 0 "C310" H 6315 5846 50  0000 L CNN
F 1 "100n" H 6315 5755 50  0000 L CNN
F 2 "Capacitor_SMD:C_0603_1608Metric" H 6238 5650 50  0001 C CNN
F 3 "~" H 6200 5800 50  0001 C CNN
F 4 "No" H 6200 5800 50  0001 C CNN "Extended"
F 5 "C14663" H 6450 5650 50  0000 C CNN "LCSC"
F 6 "CC0603KRX7R9BB104" H 6200 5800 50  0001 C CNN "MPN"
	1    6200 5800
	1    0    0    -1  
$EndComp
Wire Wire Line
	6200 5650 6200 5550
Wire Wire Line
	6200 5550 5850 5550
$Comp
L power:GND #PWR0141
U 1 1 6316273E
P 6200 6050
F 0 "#PWR0141" H 6200 5800 50  0001 C CNN
F 1 "GND" H 6205 5877 50  0000 C CNN
F 2 "" H 6200 6050 50  0001 C CNN
F 3 "" H 6200 6050 50  0001 C CNN
	1    6200 6050
	1    0    0    -1  
$EndComp
Wire Wire Line
	6200 5950 6200 6050
Text Label 4850 5650 0    47   ~ 0
EN_LORA
Wire Wire Line
	4850 5650 5150 5650
Text Label 1400 2400 2    47   ~ 0
EN_LORA
Text Label 4650 3600 0    47   ~ 0
WAKE_UP
$Comp
L power:+BATT #PWR0142
U 1 1 63169565
P 1350 5450
F 0 "#PWR0142" H 1350 5300 50  0001 C CNN
F 1 "+BATT" H 1365 5623 50  0000 C CNN
F 2 "" H 1350 5450 50  0001 C CNN
F 3 "" H 1350 5450 50  0001 C CNN
	1    1350 5450
	1    0    0    -1  
$EndComp
Wire Wire Line
	6200 5450 6200 5550
Connection ~ 6200 5550
$Comp
L power:+BATT #PWR0143
U 1 1 6316EF9A
P 3000 1000
F 0 "#PWR0143" H 3000 850 50  0001 C CNN
F 1 "+BATT" H 3015 1173 50  0000 C CNN
F 2 "" H 3000 1000 50  0001 C CNN
F 3 "" H 3000 1000 50  0001 C CNN
	1    3000 1000
	1    0    0    -1  
$EndComp
$Comp
L power:+BATT #PWR0144
U 1 1 631703AB
P 9200 1050
F 0 "#PWR0144" H 9200 900 50  0001 C CNN
F 1 "+BATT" H 9215 1223 50  0000 C CNN
F 2 "" H 9200 1050 50  0001 C CNN
F 3 "" H 9200 1050 50  0001 C CNN
	1    9200 1050
	1    0    0    -1  
$EndComp
Text Notes 6000 7100 0    47   ~ 0
Rext values: \n43k for 5 mins\n57k for 10 mins\n77k for 20 mins\n105k for 30 mins\n125k for 1 hour
Text Notes 2200 6800 0    47   ~ 0
See table for Rext\n
NoConn ~ 4300 3400
Wire Wire Line
	4300 3600 4650 3600
NoConn ~ 1600 3600
$Comp
L Device:R R311
U 1 1 6319AD1D
P 5150 5900
F 0 "R311" H 5200 5800 50  0000 L CNN
F 1 "1Meg" H 5150 5700 50  0000 L CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 5080 5900 50  0001 C CNN
F 3 "~" H 5150 5900 50  0001 C CNN
F 4 "No" H 5150 5900 50  0001 C CNN "Extended"
F 5 "C25804" H 5150 5900 50  0001 C CNN "LCSC"
F 6 "0603WAF1002T5E" H 5150 5900 50  0001 C CNN "MPN"
	1    5150 5900
	1    0    0    -1  
$EndComp
Wire Wire Line
	5150 5750 5150 5650
Connection ~ 5150 5650
Wire Wire Line
	5150 5650 5250 5650
Wire Wire Line
	5150 6050 5550 6050
Connection ~ 5550 6050
Wire Wire Line
	5550 6050 5550 5950
$Comp
L Power_Management:SiP32431DR3 U6
U 1 1 6310FD02
P 5550 5650
F 0 "U6" H 5550 6017 50  0000 C CNN
F 1 "SiP32431DR3" H 5550 5900 50  0000 C CNN
F 2 "Package_TO_SOT_SMD:SOT-363_SC-70-6" H 5550 6100 50  0001 C CNN
F 3 "http://www.vishay.com.hk/docs/66597/sip32431.pdf" H 5550 5650 50  0001 C CNN
F 4 "Yes" H 5550 5650 50  0001 C CNN "Extended"
F 5 "C141606" H 5550 5650 50  0001 C CNN "LCSC"
F 6 "SIP32431DR3-T1GE3" H 5550 5650 50  0001 C CNN "MPN"
	1    5550 5650
	1    0    0    -1  
$EndComp
Text Label 1500 3100 2    47   ~ 0
DONE
Wire Wire Line
	1600 3100 1500 3100
$Comp
L power:+BATT #PWR0107
U 1 1 6317F91C
P 4850 1300
F 0 "#PWR0107" H 4850 1150 50  0001 C CNN
F 1 "+BATT" H 4865 1473 50  0000 C CNN
F 2 "" H 4850 1300 50  0001 C CNN
F 3 "" H 4850 1300 50  0001 C CNN
	1    4850 1300
	1    0    0    -1  
$EndComp
NoConn ~ 1600 2900
Wire Wire Line
	4400 2800 4300 2800
NoConn ~ 1600 2700
Wire Wire Line
	1600 2400 1400 2400
Text Label 4400 2800 0    47   ~ 0
LED
NoConn ~ 1600 3500
NoConn ~ 1600 3200
NoConn ~ 4300 2600
NoConn ~ 4300 2700
Text Label 9600 2250 0    47   ~ 0
LED
Wire Wire Line
	9600 2250 9600 2350
$Comp
L Device:LED D301
U 1 1 630C01FE
P 9600 2500
F 0 "D301" V 9684 2382 50  0000 R CNN
F 1 "BLED" V 9593 2382 50  0000 R CNN
F 2 "LED_SMD:LED_0805_2012Metric" H 9600 2500 50  0001 C CNN
F 3 "~" H 9600 2500 50  0001 C CNN
F 4 "No" H 9600 2500 50  0001 C CNN "Extended"
F 5 "C84256" V 9502 2382 50  0000 R CNN "LCSC"
F 6 "NCD0805R1" H 9600 2500 50  0001 C CNN "MPN"
	1    9600 2500
	0    -1   -1   0   
$EndComp
$Comp
L Device:R R310
U 1 1 630C0C52
P 9600 2900
F 0 "R310" H 9670 2991 50  0000 L CNN
F 1 "1.2k" H 9670 2900 50  0000 L CNN
F 2 "Resistor_SMD:R_0603_1608Metric" V 9530 2900 50  0001 C CNN
F 3 "~" H 9600 2900 50  0001 C CNN
F 4 "No" H 9600 2900 50  0001 C CNN "Extended"
F 5 "C22765" V 9500 2750 50  0000 L CNN "LCSC"
F 6 "0603WAF1201T5E" H 9600 2900 50  0001 C CNN "MPN"
	1    9600 2900
	1    0    0    -1  
$EndComp
Wire Wire Line
	9600 2650 9600 2750
Wire Wire Line
	9600 3050 9600 3200
$Comp
L power:GND #PWR0126
U 1 1 630C0EEB
P 9600 3200
F 0 "#PWR0126" H 9600 2950 50  0001 C CNN
F 1 "GND" H 9605 3027 50  0000 C CNN
F 2 "" H 9600 3200 50  0001 C CNN
F 3 "" H 9600 3200 50  0001 C CNN
	1    9600 3200
	1    0    0    -1  
$EndComp
Text Notes 8900 2200 0    47   ~ 0
User LED
Wire Notes Line
	10800 3750 8550 3750
Wire Notes Line
	10800 750  10800 5900
Wire Notes Line
	10800 5900 8550 5900
Wire Notes Line
	8550 750  8550 5900
NoConn ~ 1600 2800
Text Label 1150 3400 2    47   ~ 0
temp_sens2
Wire Wire Line
	1150 3400 1600 3400
$EndSCHEMATC
