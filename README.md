# playground_ducky
Adafruit Circuit Playground with USB attack a-la Ruber Ducky

## Description
Using Adafruit's Circuit Playground USB HID capabilities, we excecute a simple background change hack on the user's computer.

This demo was created for teaching porpuses a Greencore Solutions (www.greencore.co.cr) in Costa Rica, for the IT Security Course, Physical Security class.

The hack changes the desktop background to a Teletubbies image that it downloads from Wikipedia using wget. This is to celebrate an early costarican hacker group called FuerzaG headed by Alf Delgado.

It should work on GNU/Linux with a Gnome environment. Tested on ubuntu-gnome and Arch with Cinnamon.

Please let me know if you would like me to adapt any other popular Rubber Ducky example to this board.

## Running the attack
It takes less than 5 seconds after the device is connected to the USB port for it to open the terminal, download the payload and change the background.

I added support for CircuitPlayground.slideSwitch(), so it will only run the attack based on the switch. This makes it easy to load without a proper flash rig.
