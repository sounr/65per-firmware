# MCU name
MCU = atmega32u4
F_CPU = 8000000
ARCH = AVR8
F_USB = $(F_CPU)
# Bootloader selection
#   Teensy       halfkay
#   Pro Micro    caterina
#   Atmel DFU    atmel-dfu
#   LUFA DFU     lufa-dfu
#   QMK DFU      qmk-dfu
#   ATmega32A    bootloadHID
#   ATmega328P   USBasp
#BOOTLOADER = qmk-dfu

# Interrupt driven control endpoint task(+60)
OPT_DEFS += -DINTERRUPT_CONTROL_ENDPOINT

OPT_DEFS += -DBOOTLOADER_SIZE=4096 -DCATERINA_BOOTLOADER

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = no      	# Virtual DIP switch configuration
MOUSEKEY_ENABLE = no       	# Mouse keys
EXTRAKEY_ENABLE = no     	# Audio control and System control
CONSOLE_ENABLE = yes        # Console for debug
COMMAND_ENABLE = yes       	# Commands for debug and configuration
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no      	# Breathing sleep LED during USB suspend
# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = no           	# USB Nkey Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = yes      # Enable keyboard RGB underglow
RGB_MATRIX_ENABLE = no	    # Enable keyboard RGB backlight functionality with ws2812 driver uses same as sk6812
MIDI_ENABLE = no            # MIDI support
UNICODE_ENABLE = no         # Unicode
#ADAFRUIT_BLE_ENABLE = yes   			# Enable Bluetooth with the Adafruit EZ-Key HID
AUDIO_ENABLE = no           # Audio output on port C6
FAUXCLICKY_ENABLE = no      # Use buzzer to emulate clicky switches
LTO_ENABLE = yes			#link-time optimization
BLUETOOTH_ENABLE = AdafruitBLE       # Enable Bluetooth with the Adafruit EZ-Key HID
