################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

CG_TOOL_ROOT := E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS

GEN_OPTS__FLAG := 
GEN_CMDS__FLAG := 

ORDERED_OBJS += \
"./main.obj" \
"./My28335/My28335_Init.obj" \
"./MyLib/SystemCore.obj" \
"./src/DSP2833x_ADC_cal.obj" \
"./src/DSP2833x_Adc.obj" \
"./src/DSP2833x_CSMPasswords.obj" \
"./src/DSP2833x_CodeStartBranch.obj" \
"./src/DSP2833x_CpuTimers.obj" \
"./src/DSP2833x_DBGIER.obj" \
"./src/DSP2833x_DMA.obj" \
"./src/DSP2833x_DefaultIsr.obj" \
"./src/DSP2833x_DisInt.obj" \
"./src/DSP2833x_ECan.obj" \
"./src/DSP2833x_ECap.obj" \
"./src/DSP2833x_EPwm.obj" \
"./src/DSP2833x_EQep.obj" \
"./src/DSP2833x_GlobalVariableDefs.obj" \
"./src/DSP2833x_Gpio.obj" \
"./src/DSP2833x_Mcbsp.obj" \
"./src/DSP2833x_MemCopy.obj" \
"./src/DSP2833x_PieCtrl.obj" \
"./src/DSP2833x_PieVect.obj" \
"./src/DSP2833x_SysCtrl.obj" \
"./src/DSP2833x_Xintf.obj" \
"./src/DSP2833x_usDelay.obj" \
"./user/led.obj" \
"./user/tim.obj" \
"../28335_RAM_lnk.cmd" \
"../cmd/DSP2833x_Headers_nonBIOS.cmd" \
$(GEN_CMDS__FLAG) \
-lrts2800_fpu32.lib \

-include ../makefile.init

RM := DEL /F
RMDIR := RMDIR /S/Q

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include My28335/subdir_vars.mk
-include MyLib/subdir_vars.mk
-include cmd/subdir_vars.mk
-include src/subdir_vars.mk
-include user/subdir_vars.mk
-include subdir_rules.mk
-include My28335/subdir_rules.mk
-include MyLib/subdir_rules.mk
-include cmd/subdir_rules.mk
-include src/subdir_rules.mk
-include user/subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
28335_MyFirst.out \

EXE_OUTPUTS__QUOTED += \
"28335_MyFirst.out" \


# All Target
all: 28335_MyFirst.out

# Tool invocations
28335_MyFirst.out: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@echo 'Building target: $@'
	@echo 'Invoking: C2000 Linker'
	"E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/bin/cl2000" --silicon_version=28 -g -O2 --diag_warning=225 --large_memory_model --unified_memory --float_support=fpu32 -z -m"28335_MyFirst.map" --stack_size=0x300 --warn_sections -i"E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/lib" -i"E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/include" --reread_libs --xml_link_info="28335_MyFirst_linkInfo.xml" --rom_model -o "28335_MyFirst.out" $(ORDERED_OBJS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXE_OUTPUTS__QUOTED)
	-$(RM) "main.obj" "My28335\My28335_Init.obj" "MyLib\SystemCore.obj" "src\DSP2833x_ADC_cal.obj" "src\DSP2833x_Adc.obj" "src\DSP2833x_CSMPasswords.obj" "src\DSP2833x_CodeStartBranch.obj" "src\DSP2833x_CpuTimers.obj" "src\DSP2833x_DBGIER.obj" "src\DSP2833x_DMA.obj" "src\DSP2833x_DefaultIsr.obj" "src\DSP2833x_DisInt.obj" "src\DSP2833x_ECan.obj" "src\DSP2833x_ECap.obj" "src\DSP2833x_EPwm.obj" "src\DSP2833x_EQep.obj" "src\DSP2833x_GlobalVariableDefs.obj" "src\DSP2833x_Gpio.obj" "src\DSP2833x_Mcbsp.obj" "src\DSP2833x_MemCopy.obj" "src\DSP2833x_PieCtrl.obj" "src\DSP2833x_PieVect.obj" "src\DSP2833x_SysCtrl.obj" "src\DSP2833x_Xintf.obj" "src\DSP2833x_usDelay.obj" "user\led.obj" "user\tim.obj" 
	-$(RM) "main.d" "My28335\My28335_Init.d" "MyLib\SystemCore.d" "src\DSP2833x_Adc.d" "src\DSP2833x_CpuTimers.d" "src\DSP2833x_DMA.d" "src\DSP2833x_DefaultIsr.d" "src\DSP2833x_ECan.d" "src\DSP2833x_ECap.d" "src\DSP2833x_EPwm.d" "src\DSP2833x_EQep.d" "src\DSP2833x_GlobalVariableDefs.d" "src\DSP2833x_Gpio.d" "src\DSP2833x_Mcbsp.d" "src\DSP2833x_MemCopy.d" "src\DSP2833x_PieCtrl.d" "src\DSP2833x_PieVect.d" "src\DSP2833x_SysCtrl.d" "src\DSP2833x_Xintf.d" "user\led.d" "user\tim.d" 
	-$(RM) "src\DSP2833x_ADC_cal.d" "src\DSP2833x_CSMPasswords.d" "src\DSP2833x_CodeStartBranch.d" "src\DSP2833x_DBGIER.d" "src\DSP2833x_DisInt.d" "src\DSP2833x_usDelay.d" 
	-@echo 'Finished clean'
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets

