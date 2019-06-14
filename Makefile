# Specify compiler
CC=gcc
  
# Specify linker
LINK=gcc

compile:
	@$(CC) -c main.c display.c motor.c sensor.c
	@echo "Compiled."
	
	@$(LINK) main.o display.o motor.o sensor.o -o main.exe
	@echo "Linked."

clean:
	@rm -rf main.exe main.o display.o motor.o sensor.o
	@echo "Clean."
	
cleanO:
	@rm -rf main.o display.o motor.o sensor.o
	@echo "Object Files Removed."