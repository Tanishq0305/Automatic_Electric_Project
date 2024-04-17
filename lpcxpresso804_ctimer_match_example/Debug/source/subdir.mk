################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../source/semihost_hardfault.c \
../source/simple_match.c 

C_DEPS += \
./source/semihost_hardfault.d \
./source/simple_match.d 

OBJS += \
./source/semihost_hardfault.o \
./source/simple_match.o 


# Each subdirectory must supply rules for building sources it contributes
source/%.o: ../source/%.c source/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=gnu99 -D__REDLIB__ -DCPU_LPC804 -DCPU_LPC804M101JDH24 -DMCUXPRESSO_SDK -DCPU_LPC804M101JDH24_cm0plus -DSDK_DEBUGCONSOLE=1 -DCR_INTEGER_PRINTF -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -I"E:\VIIT Projects\AEL\8th Presentation\AEL Code\AEL_Company_File\AEL_Company_File\LPC code\display key adc code code\final ADC vrms and dispaly\new\lpcxpresso804_ctimer_match_example\source" -I"E:\VIIT Projects\AEL\8th Presentation\AEL Code\AEL_Company_File\AEL_Company_File\LPC code\display key adc code code\final ADC vrms and dispaly\new\lpcxpresso804_ctimer_match_example\drivers" -I"E:\VIIT Projects\AEL\8th Presentation\AEL Code\AEL_Company_File\AEL_Company_File\LPC code\display key adc code code\final ADC vrms and dispaly\new\lpcxpresso804_ctimer_match_example\device" -I"E:\VIIT Projects\AEL\8th Presentation\AEL Code\AEL_Company_File\AEL_Company_File\LPC code\display key adc code code\final ADC vrms and dispaly\new\lpcxpresso804_ctimer_match_example\component\uart" -I"E:\VIIT Projects\AEL\8th Presentation\AEL Code\AEL_Company_File\AEL_Company_File\LPC code\display key adc code code\final ADC vrms and dispaly\new\lpcxpresso804_ctimer_match_example\utilities" -I"E:\VIIT Projects\AEL\8th Presentation\AEL Code\AEL_Company_File\AEL_Company_File\LPC code\display key adc code code\final ADC vrms and dispaly\new\lpcxpresso804_ctimer_match_example\CMSIS" -I"E:\VIIT Projects\AEL\8th Presentation\AEL Code\AEL_Company_File\AEL_Company_File\LPC code\display key adc code code\final ADC vrms and dispaly\new\lpcxpresso804_ctimer_match_example\board" -I"E:\VIIT Projects\AEL\8th Presentation\AEL Code\AEL_Company_File\AEL_Company_File\LPC code\display key adc code code\final ADC vrms and dispaly\new\lpcxpresso804_ctimer_match_example\lpcxpresso804\driver_examples\ctimer\simple_match" -O0 -fno-common -g3 -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m0plus -mthumb -D__REDLIB__ -fstack-usage -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-source

clean-source:
	-$(RM) ./source/semihost_hardfault.d ./source/semihost_hardfault.o ./source/simple_match.d ./source/simple_match.o

.PHONY: clean-source

