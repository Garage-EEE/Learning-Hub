# Learning-Hub
Central repository for components in Garage@EEE 

All codes are to be run in Arduino IDE, with the ESP32/Arduino Uno

Setup guide:
1. Download Arduino IDE: https://www.arduino.cc/en/software/
2. For Windows: Run the Installer after the download is complete.
   For macOS: Open .dmg file and drag the Arduino IDE icon to your apps folder
   For Linux: Extract AppImage file, open a terminal in the extracted folder, then run installation script
3. For ESP32:
   To setup the board: go to Preferences > Settings > "Additonal Board Managers" > Copy paste this JSON URL "https://dl.espressif.com/dl/package_esp32_index.json"
   In the board managers: Tools > Boards > Boards Manager > Search for "esp32" > download the "esp32" by espressif systems
   Download driver to start usb to uart connection:
   Windows:
   download the windows driver from: https://www.silabs.com/software-and-tools/usb-to-uart-bridge-vcp-drivers
   unzip the file and run the _x64.exe file, follow installation wizard
   test the connection by opening your device manager with the esp32 attached to your laptop
   it should read under Ports > Silicon Labs CP210x USB to UART bridge (COM[number])
   you have now set up the usb to uart connection and can flash code onto your board
   macOS:
