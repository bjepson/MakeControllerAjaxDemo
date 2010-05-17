##################################################################################################
#
# This file generated automatically by mcbuilder - May 16, 2010 6:34 pm
# Any manual changes made to this file will be overwritten the next time mcbuilder builds.
#
##################################################################################################

OUTPUT = aintoweb_public

all: $(OUTPUT).bin

THUMB_SRC= \
  C:\mcbuilder\cores\makecontroller\libraries\appled\appled.c \
  C:\mcbuilder\cores\makecontroller\libraries\webserver\webserver.c \
  C:\mcbuilder\cores\makecontroller\core\freertos\tasks.c \
  C:\mcbuilder\cores\makecontroller\core\freertos\queue.c \
  C:\mcbuilder\cores\makecontroller\core\freertos\list.c \
  C:\mcbuilder\cores\makecontroller\core\freertos\portable\GCC\ARM7_AT91SAM7S\port.c \
  C:\mcbuilder\cores\makecontroller\core\startup\extras.c \
  C:\mcbuilder\cores\makecontroller\core\freertos\portable\MemMang\heap_2.c \
  C:\mcbuilder\cores\makecontroller\core\makingthings\main.c \
  C:\mcbuilder\cores\makecontroller\core\makingthings\eeprom.c \
  C:\mcbuilder\cores\makecontroller\core\makingthings\analogin.c \
  C:\mcbuilder\cores\makecontroller\core\makingthings\serial.c \
  C:\mcbuilder\cores\makecontroller\core\makingthings\pwm.c \
  C:\mcbuilder\cores\makecontroller\core\makingthings\spi.c \
  C:\mcbuilder\cores\makecontroller\core\makingthings\USB-CDC.c \
  C:\mcbuilder\cores\makecontroller\core\makingthings\rtos.c \
  C:\mcbuilder\cores\makecontroller\core\makingthings\usb.c \
  C:\mcbuilder\cores\makecontroller\core\makingthings\network.c \
  C:\mcbuilder\cores\makecontroller\core\makingthings\system.c \
  C:\mcbuilder\cores\makecontroller\core\makingthings\io.c \
  C:\mcbuilder\cores\makecontroller\core\makingthings\led.c \
  C:\mcbuilder\cores\makecontroller\core\makingthings\timer.c \
  C:\mcbuilder\cores\makecontroller\core\makingthings\fasttimer.c \
  C:\mcbuilder\cores\makecontroller\core\makingthings\debugosc.c \
  C:\mcbuilder\cores\makecontroller\core\lwip\src\core\tcp_out.c \
  C:\mcbuilder\cores\makecontroller\core\lwip\src\core\ipv4\inet.c \
  C:\mcbuilder\cores\makecontroller\core\lwip\src\core\mem.c \
  C:\mcbuilder\cores\makecontroller\core\lwip\src\core\memp.c \
  C:\mcbuilder\cores\makecontroller\core\lwip\src\core\netif.c \
  C:\mcbuilder\cores\makecontroller\core\lwip\src\core\pbuf.c \
  C:\mcbuilder\cores\makecontroller\core\lwip\src\core\raw.c \
  C:\mcbuilder\cores\makecontroller\core\lwip\src\core\stats.c \
  C:\mcbuilder\cores\makecontroller\core\lwip\src\core\sys.c \
  C:\mcbuilder\cores\makecontroller\core\lwip\src\core\tcp.c \
  C:\mcbuilder\cores\makecontroller\core\lwip\src\core\tcp_in.c \
  C:\mcbuilder\cores\makecontroller\core\lwip\src\core\init.c \
  C:\mcbuilder\cores\makecontroller\core\lwip\src\core\ipv4\ip.c \
  C:\mcbuilder\cores\makecontroller\core\lwip\src\core\ipv4\ip_addr.c \
  C:\mcbuilder\cores\makecontroller\core\lwip\src\core\ipv4\icmp.c \
  C:\mcbuilder\cores\makecontroller\core\lwip\src\core\ipv4\inet_chksum.c \
  C:\mcbuilder\cores\makecontroller\core\lwip\src\core\dhcp.c \
  C:\mcbuilder\cores\makecontroller\core\lwip\src\core\dns.c \
  C:\mcbuilder\cores\makecontroller\core\lwip\src\api\tcpip.c \
  C:\mcbuilder\cores\makecontroller\core\lwip\src\api\api_msg.c \
  C:\mcbuilder\cores\makecontroller\core\lwip\src\api\err.c \
  C:\mcbuilder\cores\makecontroller\core\lwip\src\api\netbuf.c \
  C:\mcbuilder\cores\makecontroller\core\lwip\src\api\api_lib.c \
  C:\mcbuilder\cores\makecontroller\core\lwip\src\netif\etharp.c \
  C:\mcbuilder\cores\makecontroller\core\lwip\contrib\port\FreeRTOS\AT91SAM7X\sys_arch.c \
  C:\mcbuilder\cores\makecontroller\core\lwip\src\netif\ethernetif.c \
  C:\mcbuilder\cores\makecontroller\core\makingthings\SAM7_EMAC.c \
  C:\mcbuilder\cores\makecontroller\core\lwip\src\core\udp.c \
  C:\mcbuilder\cores\makecontroller\core\lwip\src\core\ipv4\ip_frag.c \
  C:\mcbuilder\cores\makecontroller\core\makingthings\osc.c \
  C:\mcbuilder\cores\makecontroller\core\makingthings\osc_patternmatch.c \
  C:\Sync\Desktop\todo\AinToWeb_public\AinToWeb_public.c \

ARM_SRC= \
  C:\mcbuilder\cores\makecontroller\core\freertos\portable\GCC\ARM7_AT91SAM7S\portISR.c \
  C:\mcbuilder\cores\makecontroller\core\makingthings\SAM7_EMAC_ISR.c \
  C:\mcbuilder\cores\makecontroller\core\makingthings\USBIsr.c \
  C:\mcbuilder\cores\makecontroller\core\startup\Cstartup_SAM7.c \
  C:\mcbuilder\cores\makecontroller\core\makingthings\analogin_isr.c \
  C:\mcbuilder\cores\makecontroller\core\makingthings\fasttimer_isr.c \
  C:\mcbuilder\cores\makecontroller\core\makingthings\serial_isr.c \
  C:\mcbuilder\cores\makecontroller\core\makingthings\timer_isr.c \

INCLUDEDIRS = \
  -IC:\Sync\Desktop\todo\AinToWeb_public \
  -IC:\mcbuilder\cores\makecontroller\libraries\appled \
  -IC:\mcbuilder\cores\makecontroller\libraries\webserver \
  -IC:\mcbuilder\cores\makecontroller\core\makingthings \
  -IC:\mcbuilder\cores\makecontroller\core\lwip\src\include \
  -IC:\mcbuilder\cores\makecontroller\core\lwip\contrib\port\FreeRTOS\AT91SAM7X \
  -IC:\mcbuilder\cores\makecontroller\core\freertos\include \
  -IC:\mcbuilder\cores\makecontroller\core\freertos\portable\GCC\ARM7_AT91SAM7S \
  -IC:\mcbuilder\cores\makecontroller\core\lwip\src\include\ipv4 \

CC=C:\mcbuilder\resources\tools\arm-elf\bin\arm-elf-gcc
OBJCOPY=C:\mcbuilder\resources\tools\arm-elf\bin\arm-elf-objcopy
ARCH=C:\mcbuilder\resources\tools\arm-elf\bin\arm-elf-ar
CRT0=C:\mcbuilder\cores\makecontroller\core\startup\boot.s
DEBUG=
OPTIM=-Os
LDSCRIPT=C:\mcbuilder\cores\makecontroller\core\startup\atmel-rom.ld

CFLAGS= \
$(INCLUDEDIRS) \
-Wall \
-Wextra \
-Wstrict-prototypes \
-Wmissing-prototypes \
-Wmissing-declarations \
-Wno-strict-aliasing \
-D SAM7_GCC \
-D THUMB_INTERWORK \
-mthumb-interwork \
-mcpu=arm7tdmi \
-T$(LDSCRIPT) \
$(DEBUG) \
$(OPTIM)

THUMB_FLAGS=-mthumb
LINKER_FLAGS=-Xlinker -o$(OUTPUT).elf -Xlinker -M -Xlinker -Map=$(OUTPUT)_o.map

ARM_OBJ = $(ARM_SRC:.c=.o)
THUMB_OBJ = $(THUMB_SRC:.c=.o)

$(OUTPUT).bin : $(OUTPUT).elf
	$(OBJCOPY) $(OUTPUT).elf -O binary $(OUTPUT).bin

$(OUTPUT).elf : $(ARM_OBJ) $(THUMB_OBJ) $(CRT0)
	$(CC) $(CFLAGS) $(ARM_OBJ) $(THUMB_OBJ) -nostartfiles $(CRT0) $(LINKER_FLAGS)

$(THUMB_OBJ) : %.o : %.c ../config.h
	$(CC) -c $(THUMB_FLAGS) $(CFLAGS) $< -o $@

$(ARM_OBJ) : %.o : %.c ../config.h
	$(CC) -c $(CFLAGS) $< -o $@

clean :
	rm -f $(ARM_OBJ)
	rm -f $(THUMB_OBJ)
	rm -f $(OUTPUT).elf
	rm -f $(OUTPUT).bin
	rm -f $(OUTPUT)_o.map

