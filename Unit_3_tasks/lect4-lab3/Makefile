#Eng.Yassa
CC=arm-none-eabi-
CFLAGS= -mcpu=cortex-m4 -mthumb -gdwarf-2 -g
INCS=-I .
LIBS=
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
As = $(wildcard *.s)
AsOBJ = $(As:.s=.o)

Project_Name=lec_4-lab3

all: $(Project_Name).bin
	@echo  "========== Build is Done =========="	
	
%.o: %.c
	$(CC)gcc.exe $(CFLAGS) -c $(INCS) $< -o $@
		
$(Project_Name).elf: $(OBJ) $(AsOBJ)
	$(CC)ld.exe -T Linker_Script.ld $(LIBS) $(OBJ) $(AsOBJ) -o $@ -Map=Map_file.map
	cp $(Project_Name).elf $(Project_Name).axf
$(Project_Name).bin: $(Project_Name).elf  
	$(CC)objcopy.exe -O binary $<  $@


clean_all:
	rm *.o *elf *.bin *.axf
	@echo "........done" 

clean:
	rm *elf *.bin	