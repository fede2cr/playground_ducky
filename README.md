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

This is designed to work on a gnome-based graphical interface, using the KEY_LEFT_GUI to pull the menu, and then pull a terminal from it.

## Instructions

1. You need to know the keyboard layout of the classroom in advance, as it need to know how to write caracters such as "&". Inside the source you can comment and uncomment the following lines to suit your environment.

```
#define KEYB_US
//#define KEYB_LA
```

2. If the graphical interface where you are working is responding slowly (slow graphical card, VMs running on slow hardware, etc) do increase the following value, and **re-test** that it works. The smaller the number, the faster the attack, but if the number is too small, the **attack will fail**.

## How to "fix" the attack
In order to leave the system like it was, you only need to revert to the gnome background that was running before the attack and that is it.

## TODO

- [x] Add support for US and LA-Latin keyboard layouts. If you need extra layouts please let us know.
- [x] "Slowlyness" multiplier, to make it easy to work with slower computers
- [ ] If someone requests it, ability to work on other GUIs or other OSs.
