################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/main.c \
../src/utility.c 

LST += \
main.lst \
utility.lst 

C_DEPS += \
./src/main.d \
./src/utility.d 

OBJS += \
./src/main.o \
./src/utility.o 

MAP += \
rx231_basic.map 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	$(file > $@.in,-Og -ffunction-sections -fdata-sections -fno-strict-aliasing -fdiagnostics-parseable-fixits -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Waggregate-return -Wstack-usage=100 -g2 -misa=v2 -mlittle-endian-data -I"C:/Users/sata/develop/e2studio_2024_01/RX231/rx231_basic/generate" -I"C:/Users/sata/develop/e2studio_2024_01/RX231/rx231_basic/src" -I"C:/Users/sata/develop/e2studio_2024_01/RX231/rx231_basic/src/module" -Wa,-adlnh="$(basename $(notdir $<)).lst" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" "$<" -c -o "$@")
	@rx-elf-gcc @"$@.in"

