################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/rx231_basic.c 

LST += \
rx231_basic.lst 

C_DEPS += \
./src/rx231_basic.d 

OBJS += \
./src/rx231_basic.o 

MAP += \
rx231_basic.map 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	$(file > $@.in,-Og -ffunction-sections -fdata-sections -fno-strict-aliasing -fdiagnostics-parseable-fixits -Wunused -Wuninitialized -Wall -Wextra -Wmissing-declarations -Wconversion -Wpointer-arith -Wshadow -Waggregate-return -Wstack-usage=100 -g2 -misa=v2 -mlittle-endian-data -I"C:/Users/sata/develop/e2studio_2024_01/RX231/rx231_basic/generate" -Wa,-adlnh="$(basename $(notdir $<)).lst" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" "$<" -c -o "$@")
	@rx-elf-gcc @"$@.in"

