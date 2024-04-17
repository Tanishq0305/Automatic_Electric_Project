################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../source/Ctimer.c \
../source/fsl_adc_interrupt.c \
../source/rmsCalc.c \
../source/semihost_hardfault.c \
../source/test.c \
../source/test2.c 

C_DEPS += \
./source/Ctimer.d \
./source/fsl_adc_interrupt.d \
./source/rmsCalc.d \
./source/semihost_hardfault.d \
./source/test.d \
./source/test2.d 

OBJS += \
./source/Ctimer.o \
./source/fsl_adc_interrupt.o \
./source/rmsCalc.o \
./source/semihost_hardfault.o \
./source/test.o \
./source/test2.o 


# Each subdirectory must supply rules for building sources it contributes
source/%.o: ../source/%.c source/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=gnu99 -D__REDLIB__ -DCPU_LPC804M101JDH24 -DCPU_LPC804M101JDH24_cm0plus -DCPU_LPC804 -DMCUXPRESSO_SDK -DSDK_DEBUGCONSOLE=1 -DCR_INTEGER_PRINTF -DPRINTF_FLOAT_ENABLE=0 -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -DSDK_OS_BAREMETAL -I"E:\VIIT Projects\AEL\8th Presentation\AEL Code\AEL_Company_File\AEL_Company_File\LPC code\display key adc code code\final ADC vrms and dispaly\new\lpcxpresso804_lpc_adc_interrupt\utilities" -I"E:\VIIT Projects\AEL\8th Presentation\AEL Code\AEL_Company_File\AEL_Company_File\LPC code\display key adc code code\final ADC vrms and dispaly\new\lpcxpresso804_lpc_adc_interrupt\drivers" -I"E:\VIIT Projects\AEL\8th Presentation\AEL Code\AEL_Company_File\AEL_Company_File\LPC code\display key adc code code\final ADC vrms and dispaly\new\lpcxpresso804_lpc_adc_interrupt\device" -I"E:\VIIT Projects\AEL\8th Presentation\AEL Code\AEL_Company_File\AEL_Company_File\LPC code\display key adc code code\final ADC vrms and dispaly\new\lpcxpresso804_lpc_adc_interrupt\component\uart" -I"E:\VIIT Projects\AEL\8th Presentation\AEL Code\AEL_Company_File\AEL_Company_File\LPC code\display key adc code code\final ADC vrms and dispaly\new\lpcxpresso804_lpc_adc_interrupt\CMSIS" -I"E:\VIIT Projects\AEL\8th Presentation\AEL Code\AEL_Company_File\AEL_Company_File\LPC code\display key adc code code\final ADC vrms and dispaly\new\lpcxpresso804_lpc_adc_interrupt\component\timer" -I"E:\VIIT Projects\AEL\8th Presentation\AEL Code\AEL_Company_File\AEL_Company_File\LPC code\display key adc code code\final ADC vrms and dispaly\new\lpcxpresso804_lpc_adc_interrupt\source" -I"E:\VIIT Projects\AEL\8th Presentation\AEL Code\AEL_Company_File\AEL_Company_File\LPC code\display key adc code code\final ADC vrms and dispaly\new\lpcxpresso804_lpc_adc_interrupt\board" -I"E:\VIIT Projects\AEL\8th Presentation\AEL Code\AEL_Company_File\AEL_Company_File\LPC code\display key adc code code\final ADC vrms and dispaly\new\lpcxpresso804_lpc_adc_interrupt\lpcxpresso804\driver_examples\adc\lpc_adc_interrupt" -O0 -fno-common -g3 -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m0plus -mthumb -D__REDLIB__ -fstack-usage -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-source

clean-source:
	-$(RM) ./source/Ctimer.d ./source/Ctimer.o ./source/fsl_adc_interrupt.d ./source/fsl_adc_interrupt.o ./source/rmsCalc.d ./source/rmsCalc.o ./source/semihost_hardfault.d ./source/semihost_hardfault.o ./source/test.d ./source/test.o ./source/test2.d ./source/test2.o

.PHONY: clean-source

