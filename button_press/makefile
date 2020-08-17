WWITCH=C:\Development\WWitch

WWITCH_INCLUDES = $(WWITCH)\include
WWITCH_LIB = $(WWITCH)\lib
LSIC_LIB = $(WWITCH)\lsic86ww\lib\s

default:
	lcc86 -I$(WWITCH_INCLUDES) -L$(WWITCH_LIB) -L$(LSIC_LIB) -o button_press.bin button_press.c
	mkfent button_press.cf
