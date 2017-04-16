# peking_duck
HID attack payload tools for Chinese USB Leonardo clone "badUSB" sticks


# Requirements
* NicoHood HID (install it via the arduino ide)
* Most of this toolkit should be compatible with https://github.com/RedLectroid/OverThruster

# Description
language_mapping.ino


keymaps.py


kbdtranslate.py

# Hardware VID/PID etc.

Bus 002 Device 051: ID f000:ff01

~> sudo lsusb -v -d f000:ff01

~> sudo lsusb -v -d f000:ff01

Bus 002 Device 051: ID f000:ff01  
Device Descriptor:
  bLength                18
  bDescriptorType         1
  bcdUSB               2.00
  bDeviceClass            0 (Defined at Interface level)
  bDeviceSubClass         0 
  bDeviceProtocol         0 
  bMaxPacketSize0        64
  idVendor           0xf000 
  idProduct          0xff01 
  bcdDevice            3.33
  iManufacturer           1 Linux 3.4.39 with sunxi_usb_udc
  iProduct                2 RNDIS/Ethernet Gadget
  iSerial                 4 ch000001
  bNumConfigurations      1
  Configuration Descriptor:
    bLength                 9
    bDescriptorType         2
    wTotalLength           34
    bNumInterfaces          1
    bConfigurationValue     2
    iConfiguration          0 
    bmAttributes         0xc0
      Self Powered
    MaxPower                2mA
    Interface Descriptor:
      bLength                 9
      bDescriptorType         4
      bInterfaceNumber        0
      bAlternateSetting       0
      bNumEndpoints           1
      bInterfaceClass         3 Human Interface Device
      bInterfaceSubClass      0 No Subclass
      bInterfaceProtocol      1 Keyboard
      iInterface              3 HID Interface
        HID Device Descriptor:
          bLength                 9
          bDescriptorType        33
          bcdHID               1.01
          bCountryCode            0 Not supported
          bNumDescriptors         1
          bDescriptorType        34 Report
          wDescriptorLength      63
         Report Descriptors: 
           ** UNAVAILABLE **
      Endpoint Descriptor:
        bLength                 7
        bDescriptorType         5
        bEndpointAddress     0x83  EP 3 IN
        bmAttributes            3
          Transfer Type            Interrupt
          Synch Type               None
          Usage Type               Data
        wMaxPacketSize     0x0008  1x 8 bytes
        bInterval               4
Device Qualifier (for other device speed):
  bLength                10
  bDescriptorType         6
  bcdUSB               2.00
  bDeviceClass            0 (Defined at Interface level)
  bDeviceSubClass         0 
  bDeviceProtocol         0 
  bMaxPacketSize0        64
  bNumConfigurations      1
Device Status:     0x0001
  Self Powered

