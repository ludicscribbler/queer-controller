# Materials:
## Hardware:
- 3D Printer
- PLA filament
- Arduino Leonardo
- Wires
- Toggle switches (on-off, on-off-on, and momentary)
- Arcade buttons (Note: you will require at least 12 switches and/or toggles to completely cover the full set of buttons on a SNES controller) 
## Software:
- Arduino IDE (available for free)
- Arduino code for this project (<https://github.com/ludicscribbler/queer-controller/blob/main/controller_code.ino>)
- Tinkercad (available for free with login)
- Tinkercad link for this project (<https://www.tinkercad.com/things/2ZjK0IVf8nZ>)
- ROM Emulator and ROM games (or any similar program that allows you to add a USB keyboard)
## Tools:
- 3D printer
- Soldering iron
# Instructions:
1. Open the Tinkercad file of the controller and modify to your liking. To modify, “ungroup” each piece of the controller and change it (refer to Tinkercad help for instructions on how to edit objects. It will take some trial and error and probably a few prints to fit the dimensions to your needs)
1. Print the Tinkercad file using a 3D printer and your preferred print settings—I printed mine with a 2% infill to keep it light (If you don’t have access to a 3D printer, check your local library or community centres)
1. Open the Arduino file in your Arduino IDE (Since we are calling up the keyboard library, this controller is essentially a limited-purpose keyboard. I have set the keys to match a SNES controller. You can change the keys by altering the Keyboard.press command to whatever corresponding keys you prefer (please refer to the ‘Oct’ values provided at https://www.asciitable.com/). Note that you will need to remember which button is assigned which key input for your emulator)
1. Connect the wires to each input on the Leonardo, and then to the positive value on the corresponding button or toggle (and not the ground value—if you switch these around the button will not work and you may damage your hardware). For example, pinMode 2 corresponds to input 2 on the Leonardo board, which in the current code corresponds to “left arrow key”, meaning that whatever button or toggle you attach to that input will function as that key when pressed). To have multiple buttons correspond to the same key, simply attach another the wire from another button to that input.
1. Connect each ground wire from each button/toggle to the GND input on the Leonardo board. Depending on how many buttons and toggles you have used, this may be **a lot** of wires, so one solution is to group buttons of the same input together, and connect each bundle to a single wire that leads into the GND input.
1. After connecting each input, upload the Arduino code to your Leonardo (remember to reset the Leonardo to start up the boot mode, and to go into your tools on Arduino and set the board to “Arduino Leonardo” and the programmer to “USBTinyISP”). Once the light on the Leonardo is done flashing, it should be ready to use.
1. Open your preferred emulator and load preferred game—note: you will need to search these out yourself. Alternatively, you can also test this controller in any notepad or word processor, it’s a keyboard after all, and all you need to do is verify that the correct key is displayed when you press the corresponding button or toggle. However, if you want to try this out in a game you’ll need an emulator. 
1. Open the options menu on the emulator and go to controller configuration or button mapping (different emulators may call this menu something different, basically wherever you can go to set the input values for your controller in the game). Set the key mapping to the corresponding key values of your controller (in this case, “arrow right” for joystick right, “y” for y, “s” for start, “u” for select, etc.) 
1. Hopefully everything has worked out and you’re now ready to play!


