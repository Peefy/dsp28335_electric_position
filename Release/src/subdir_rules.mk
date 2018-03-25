################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
src/DSP2833x_ADC_cal.obj: ../src/DSP2833x_ADC_cal.asm $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/bin/cl2000" --silicon_version=28 -g -O2 --include_path="E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/My28335" --diag_warning=225 --large_memory_model --unified_memory --float_support=fpu32 --preproc_with_compile --preproc_dependency="src/DSP2833x_ADC_cal.d" --obj_directory="src" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/DSP2833x_Adc.obj: ../src/DSP2833x_Adc.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/bin/cl2000" --silicon_version=28 -g -O2 --include_path="E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/My28335" --diag_warning=225 --large_memory_model --unified_memory --float_support=fpu32 --preproc_with_compile --preproc_dependency="src/DSP2833x_Adc.d" --obj_directory="src" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/DSP2833x_CSMPasswords.obj: ../src/DSP2833x_CSMPasswords.asm $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/bin/cl2000" --silicon_version=28 -g -O2 --include_path="E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/My28335" --diag_warning=225 --large_memory_model --unified_memory --float_support=fpu32 --preproc_with_compile --preproc_dependency="src/DSP2833x_CSMPasswords.d" --obj_directory="src" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/DSP2833x_CodeStartBranch.obj: ../src/DSP2833x_CodeStartBranch.asm $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/bin/cl2000" --silicon_version=28 -g -O2 --include_path="E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/My28335" --diag_warning=225 --large_memory_model --unified_memory --float_support=fpu32 --preproc_with_compile --preproc_dependency="src/DSP2833x_CodeStartBranch.d" --obj_directory="src" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/DSP2833x_CpuTimers.obj: ../src/DSP2833x_CpuTimers.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/bin/cl2000" --silicon_version=28 -g -O2 --include_path="E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/My28335" --diag_warning=225 --large_memory_model --unified_memory --float_support=fpu32 --preproc_with_compile --preproc_dependency="src/DSP2833x_CpuTimers.d" --obj_directory="src" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/DSP2833x_DBGIER.obj: ../src/DSP2833x_DBGIER.asm $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/bin/cl2000" --silicon_version=28 -g -O2 --include_path="E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/My28335" --diag_warning=225 --large_memory_model --unified_memory --float_support=fpu32 --preproc_with_compile --preproc_dependency="src/DSP2833x_DBGIER.d" --obj_directory="src" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/DSP2833x_DMA.obj: ../src/DSP2833x_DMA.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/bin/cl2000" --silicon_version=28 -g -O2 --include_path="E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/My28335" --diag_warning=225 --large_memory_model --unified_memory --float_support=fpu32 --preproc_with_compile --preproc_dependency="src/DSP2833x_DMA.d" --obj_directory="src" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/DSP2833x_DefaultIsr.obj: ../src/DSP2833x_DefaultIsr.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/bin/cl2000" --silicon_version=28 -g -O2 --include_path="E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/My28335" --diag_warning=225 --large_memory_model --unified_memory --float_support=fpu32 --preproc_with_compile --preproc_dependency="src/DSP2833x_DefaultIsr.d" --obj_directory="src" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/DSP2833x_DisInt.obj: ../src/DSP2833x_DisInt.asm $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/bin/cl2000" --silicon_version=28 -g -O2 --include_path="E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/My28335" --diag_warning=225 --large_memory_model --unified_memory --float_support=fpu32 --preproc_with_compile --preproc_dependency="src/DSP2833x_DisInt.d" --obj_directory="src" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/DSP2833x_ECan.obj: ../src/DSP2833x_ECan.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/bin/cl2000" --silicon_version=28 -g -O2 --include_path="E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/My28335" --diag_warning=225 --large_memory_model --unified_memory --float_support=fpu32 --preproc_with_compile --preproc_dependency="src/DSP2833x_ECan.d" --obj_directory="src" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/DSP2833x_ECap.obj: ../src/DSP2833x_ECap.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/bin/cl2000" --silicon_version=28 -g -O2 --include_path="E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/My28335" --diag_warning=225 --large_memory_model --unified_memory --float_support=fpu32 --preproc_with_compile --preproc_dependency="src/DSP2833x_ECap.d" --obj_directory="src" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/DSP2833x_EPwm.obj: ../src/DSP2833x_EPwm.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/bin/cl2000" --silicon_version=28 -g -O2 --include_path="E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/My28335" --diag_warning=225 --large_memory_model --unified_memory --float_support=fpu32 --preproc_with_compile --preproc_dependency="src/DSP2833x_EPwm.d" --obj_directory="src" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/DSP2833x_EQep.obj: ../src/DSP2833x_EQep.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/bin/cl2000" --silicon_version=28 -g -O2 --include_path="E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/My28335" --diag_warning=225 --large_memory_model --unified_memory --float_support=fpu32 --preproc_with_compile --preproc_dependency="src/DSP2833x_EQep.d" --obj_directory="src" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/DSP2833x_GlobalVariableDefs.obj: ../src/DSP2833x_GlobalVariableDefs.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/bin/cl2000" --silicon_version=28 -g -O2 --include_path="E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/My28335" --diag_warning=225 --large_memory_model --unified_memory --float_support=fpu32 --preproc_with_compile --preproc_dependency="src/DSP2833x_GlobalVariableDefs.d" --obj_directory="src" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/DSP2833x_Gpio.obj: ../src/DSP2833x_Gpio.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/bin/cl2000" --silicon_version=28 -g -O2 --include_path="E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/My28335" --diag_warning=225 --large_memory_model --unified_memory --float_support=fpu32 --preproc_with_compile --preproc_dependency="src/DSP2833x_Gpio.d" --obj_directory="src" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/DSP2833x_Mcbsp.obj: ../src/DSP2833x_Mcbsp.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/bin/cl2000" --silicon_version=28 -g -O2 --include_path="E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/My28335" --diag_warning=225 --large_memory_model --unified_memory --float_support=fpu32 --preproc_with_compile --preproc_dependency="src/DSP2833x_Mcbsp.d" --obj_directory="src" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/DSP2833x_MemCopy.obj: ../src/DSP2833x_MemCopy.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/bin/cl2000" --silicon_version=28 -g -O2 --include_path="E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/My28335" --diag_warning=225 --large_memory_model --unified_memory --float_support=fpu32 --preproc_with_compile --preproc_dependency="src/DSP2833x_MemCopy.d" --obj_directory="src" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/DSP2833x_PieCtrl.obj: ../src/DSP2833x_PieCtrl.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/bin/cl2000" --silicon_version=28 -g -O2 --include_path="E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/My28335" --diag_warning=225 --large_memory_model --unified_memory --float_support=fpu32 --preproc_with_compile --preproc_dependency="src/DSP2833x_PieCtrl.d" --obj_directory="src" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/DSP2833x_PieVect.obj: ../src/DSP2833x_PieVect.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/bin/cl2000" --silicon_version=28 -g -O2 --include_path="E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/My28335" --diag_warning=225 --large_memory_model --unified_memory --float_support=fpu32 --preproc_with_compile --preproc_dependency="src/DSP2833x_PieVect.d" --obj_directory="src" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/DSP2833x_SysCtrl.obj: ../src/DSP2833x_SysCtrl.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/bin/cl2000" --silicon_version=28 -g -O2 --include_path="E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/My28335" --diag_warning=225 --large_memory_model --unified_memory --float_support=fpu32 --preproc_with_compile --preproc_dependency="src/DSP2833x_SysCtrl.d" --obj_directory="src" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/DSP2833x_Xintf.obj: ../src/DSP2833x_Xintf.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/bin/cl2000" --silicon_version=28 -g -O2 --include_path="E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/My28335" --diag_warning=225 --large_memory_model --unified_memory --float_support=fpu32 --preproc_with_compile --preproc_dependency="src/DSP2833x_Xintf.d" --obj_directory="src" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/DSP2833x_usDelay.obj: ../src/DSP2833x_usDelay.asm $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/bin/cl2000" --silicon_version=28 -g -O2 --include_path="E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/My28335" --diag_warning=225 --large_memory_model --unified_memory --float_support=fpu32 --preproc_with_compile --preproc_dependency="src/DSP2833x_usDelay.d" --obj_directory="src" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


