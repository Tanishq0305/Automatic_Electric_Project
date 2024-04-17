################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../component/uart/fsl_adapter_miniusart.c 

C_DEPS += \
./component/uart/fsl_adapter_miniusart.d 

OBJS += \
./component/uart/fsl_adapter_miniusart.o 


# Each subdirectory must supply rules for building sources it contributes
component/uart/%.o: ../component/uart/%.c component/uart/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: MCU C Compiler'
	arm-none-eabi-gcc -std=gnu99 -D__REDLIB__ -DCPU_LPC804 -DCPU_LPC804M101JDH24 -DMCUXPRESSO_SDK -DCPU_LPC804M101JDH24_cm0plus -DSDK_DEBUGCONSOLE=1 -DCR_INTEGER_PRINTF -D__MCUXPRESSO -D__USE_CMSIS -DDEBUG -I"E:\VIIT Projects\AEL\8th Presentation\AEL Code\AEL_Company_File\AEL_Company_File\LPC code\display key adc code code\final ADC vrms and dispaly\new\lpcxpresso804_ctimer_match_interrupt_example\source" -I"E:\VIIT Projects\AEL\8th Presentation\AEL Code\AEL_Company_File\AEL_Company_File\LPC code\display key adc code code\final ADC vrms and dispaly\new\lpcxpresso804_ctimer_match_interrupt_example\drivers" -I"E:\VIIT Projects\AEL\8th Presentation\AEL Code\AEL_Company_File\AEL_Company_File\LPC code\display key adc code code\final ADC vrms and dispaly\new\lpcxpresso804_ctimer_match_interrupt_example\device" -I"E:\VIIT Projects\AEL\8th Presentation\AEL Code\AEL_Company_File\AEL_Company_File\LPC code\display key adc code code\final ADC vrms and dispaly\new\lpcxpresso804_ctimer_match_interrupt_example\component\uart" -I"E:\VIIT Projects\AEL\8th Presentation\AEL Code\AEL_Company_File\AEL_Company_File\LPC code\display key adc code code\final ADC vrms and dispaly\new\lpcxpresso804_ctimer_match_interrupt_example\utilities" -I"E:\VIIT Projects\AEL\8th Presentation\AEL Code\AEL_Company_File\AEL_Company_File\LPC code\display key adc code code\final ADC vrms and dispaly\new\lpcxpresso804_ctimer_match_interrupt_example\CMSIS" -I"E:\VIIT Projects\AEL\8th Presentation\AEL Code\AEL_Company_File\AEL_Company_File\LPC code\display key adc code code\final ADC vrms and dispaly\new\lpcxpresso804_ctimer_match_interrupt_example\board" -I"E:\VIIT Projects\AEL\8th Presentation\AEL Code\AEL_Company_File\AEL_Company_File\LPC code\display key adc code code\final ADC vrms and dispaly\new\lpcxpresso804_ctimer_match_interrupt_example\lpcxpresso804\driver_examples\ctimer\simple_match_interrupt" -O0 -fno-common -g3 -c -ffunction-sections -fdata-sections -ffreestanding -fno-builtin -fmerge-constants -fmacro-prefix-map="$(<D)/"= -mcpu=cortex-m0plus -mthumb -D__REDLIB__ -fstack-usage -specs=redlib.specs -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-component-2f-uart

clean-component-2f-uart:
	-$(RM) ./component/uart/fsl_adapter_miniusart.d ./component/uart/fsl_adapter_miniusart.o

.PHONY: clean-component-2f-uart

