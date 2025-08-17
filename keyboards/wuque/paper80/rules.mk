
DFU_SUFFIX_ARGS = -p FFFF -v FFFF
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MAGIC_ENABLE = yes
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no        # Commands for debug and configuration
NKRO_ENABLE = yes           # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGB_MATRIX_ENABLE = yes     # Enable keyboard RGB matrix (do not use together with RGBLIGHT_ENABLE)

RGBLIGHT_DRIVER = ws2812 
AUDIO_ENABLE = no           # Audio output
# Enter lower-power sleep mode when on the ChibiOS idle thread
