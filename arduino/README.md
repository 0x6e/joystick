Arduino
========
The following files should replace those found in `<arduino>/hardware/arduino/cores/arduino`
* USBAPI.h
* HID.cpp

Don't forget to backup these files first.

joystick.hid
------------
This file contains the USB HID report descriptor found in `HID.cpp`. This is used to describe how the computer should interpret the data it receives from the joystick. Frank Zhao wrote a [great tutorial](http://eleccelerator.com/tutorial-about-usb-hid-report-descriptors/) about these.
