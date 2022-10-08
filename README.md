# LoRaWAN-End-Node
Project HW and FW of a LoRaWAN end-node with a low power consumption &lt; 1uW

This project is based on a PIC18LF46K22 and the LoRaWAN transceiver SX1276.
The board is powered up by two AAA batteries in series and stays in sleep with a current of around 50 nA. 
After an amount of time set by the resistance Rext, the timer TPL5010 wakes up the PIC18, wich is responsible of measuring the temperature and sending it to a nearby LoRaWAN gateway via ABP (Activation by Personalization).

With this arrangement, transmitting every 15-30 minutes at the lowest SF possible, the estimated life battery can range between 2 to 8 years.

There is a wake button, wich can instantly wake up the board, a ICSP programming port for PICKIT3 or 4 and two rows of 8 pins (distanced 2.54mm) that allow to solder on top of the PCB the [LoRa Olimex module](https://www.olimex.com/Products/IoT/LoRa/LoRa868/open-source-hardware). 

For further information refer to my [thesis document](https://amslaurea.unibo.it/26629)
where the project is explained in more detail.

![MicrosoftTeams-image (10)](https://user-images.githubusercontent.com/30445778/190121414-ea43c11b-1d70-4290-89d6-9e6cf8096d1d.png) ![3d_view_bakc](https://user-images.githubusercontent.com/30445778/190080454-d11e0c02-c234-4688-bd14-2967aa01d26f.PNG)
![End_Node_Soldered]()


