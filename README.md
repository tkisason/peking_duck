# peking_duck
HID attack tools for [Chinese USB Leonardo clone "Beetle badUSB" sticks](http://www.ebay.com/sch/i.html?_nkw=beetle+badusb).
Currently mostly focused on efficiently translating between english to other keymaps and assorted ops scripts

This tool is pointless if you are targeting hosts with english keyboard layouts. Just use [OverThruster](https://github.com/RedLectroid/OverThruster) or [Brutal](https://github.com/Screetsec/Brutal) and you are done. If you need to attack hosts that use specific keyboard layouts (like Croatian, German, etc..) you are at the right place.

### Requirements
* NicoHood HID (install it via the arduino ide)
* Most of this toolkit should be compatible with https://github.com/RedLectroid/OverThruster, some of the stuff was nicked from his project.

### Description

`language_mapping.ino` - Use this arduino sketch to print out scancode-character dictionaries for a specific keyboard layout.

Usage:
* Load this sketch in your Beetle BadUSB
* On a windows box, set it to use the wanted keyboard layout, focus on a text editor
* Plug in the stick
* Fix broken lines (from DEL codes), fix ' and \ which needs escaping with \
* *Test if you can import the dictionary in python!*
* Dump the dictionary with the languagecode (like de) in `keymaps.py`


<br>
`keymaps.py` - Contains maps (dictionaries) for en,hr. Pull request for other keymaps welcome. I'll add more as i need more...

<br>
`kbdtranslate.py` - Opens a text file containing commands in en keymap, and currently translates them to hr keymap.

<br>
`payload_template.ino` - OverThruster's most basic template (Win+R , cmd, enter and execute payload).

### Example usage
* Generate your payload with empire or metasploit.
* Save the payload in a file, let's say `mypayload`
* run `./kbdtranslate.py mypayload`
* Open `payload_template.ino` in arduino IDE, paste the payload into the scripts
* Make sure you have NicoHood HID installed
* Upload your sketch to your board and you are done.
* Go pwn a box :)


### To-Do:
* My long term goal is a Empire stager for the Beetle BadUSBs and a duckyscript to beetle converter. Ideally without touching arduino ide. So, i want to run one script, specify a keyboard map run and be done. I don't want to mess with the Arduino ide.
* Second problem is VID/PID emulation. Duckyes and BashBunnyes use specific VID/PID values to avoid the problem that windows will start installing drivers. One bypass is plugging in a Beetle, waiting some time, unplugging and plugging back in. This shortens the attack process on early (win7) hosts.
* Report issues on the GitHub tracker for this project, ideas, collaborators, pull requests and comments welcome.
