Arduino Leonardo/Micro compatible PHUKD library
=========================================
 
Based on Irongeek's PHUKD (Programmable HID USB Keystroke Dongle) Library ver 0.4( http://www.irongeek.com/i.php?page=security/programmable-hid-usb-keystroke-dongle )

__NOTE:__ Should work fine on Arduino Micro but I don't tested it.

Download and installation
=========================
- Click "Clone or download" -> "Download ZIP"
- Unzip downloaded file in Arduino/libraries/ directory

Use
===
Add this include line to your sketch:
```
#include <phukdlib_leonardo.h>
```

There are some demo sketches in the examples folder to help illustrate how library can be used. The function names are fairly self explanatory:

* _CommandAtRunBarMSWIN(char *SomeCommand)_ : Opens the MS Windows run bar and executes the given command.
* _CommandAtRunBarGnome(char *SomeCommand)_ : Opens a run bar in Gnome under Linux and executes the given command.
* _CommandAtRunBarOSX(char *SomeCommand)_ : Opens Spotlight under OS X and executes the given command.
* _CommandAtNewTerminal(char *SomeCommand)_ : Opens a Terminal under OS X and executes the given command.
*_ShrinkCurWinMSWIN()_ : Shrinks the active window to help hide it in MS Windows.
* _ShrinkCurWinGnome()_ : Shrinks the active window to help hide it in Gnome.
* _ShrinkCurWinOSX()_ : Shrinks the active window to help hide it in OS X.
* _PressAndRelease(char Key, int KeyCount)_ : This function simplifies the pressing and releasing of a key. You can also specify how many times to hit the key.

Other languages
===============
By default Arduino Keyboard library only support en_us kayboard layout, you can download an improved Keyboard library [here](https://github.com/ernesto-xload/arduino_keyboardlib)

Version History
===============
```
(Date format: DD/MM/YYYY)
* 14/6/2017 Readme.md changes and included "Other languages" section
* 8/6/2017 First commit

```

TO DO
=====
- Documentation, wiki ... (some day...)


Contact
=======
Open an issue, ask me on twitter to [@ernesto_xload](http://www.twitter.com/ernesto_xload/) or visit www.sanchezpano.info
