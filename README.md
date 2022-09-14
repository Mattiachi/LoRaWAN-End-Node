# LoRaWAN-End-Node
Project HW and FW of a LoRaWAN end-node with a low power consumption &lt; 1uW

This project is based on a PIC18LF46K22 and the LoRaWAN transceiver SX1276.
The board is powered up by two AAA batteries in series and stays in sleep with a current of around 100 nA. 
After an amount of time set by the resistance Rext, the timer TPL5010 wakes up the PIC18, wich is responsible of measuring the temperature and sending it to a nearby LoRaWAN gateway via ABP (Activation by Personalization).

With this arrangement, transmitting every 15-30 minutes at the lowest SF possible, the estimated life battery can range between 2 to 8 years.
