################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
MyLib/CString.obj: ../MyLib/CString.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/bin/cl2000" --silicon_version=28 -g --include_path="E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/include" --include_path="E:/_DSP_Pros/dsp28335_elec_pos/MyLib" --include_path="E:/_DSP_Pros/dsp28335_elec_pos" --include_path="E:/_DSP_Pros/dsp28335_elec_pos/My28335" --include_path="E:/_DSP_Pros/dsp28335_elec_pos/include" --include_path="E:/_DSP_Pros/dsp28335_elec_pos/user" --diag_warning=225 --large_memory_model --unified_memory --float_support=fpu32 --preproc_with_compile --preproc_dependency="MyLib/CString.d" --obj_directory="MyLib" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

MyLib/Queue.obj: ../MyLib/Queue.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/bin/cl2000" --silicon_version=28 -g --include_path="E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/include" --include_path="E:/_DSP_Pros/dsp28335_elec_pos/MyLib" --include_path="E:/_DSP_Pros/dsp28335_elec_pos" --include_path="E:/_DSP_Pros/dsp28335_elec_pos/My28335" --include_path="E:/_DSP_Pros/dsp28335_elec_pos/include" --include_path="E:/_DSP_Pros/dsp28335_elec_pos/user" --diag_warning=225 --large_memory_model --unified_memory --float_support=fpu32 --preproc_with_compile --preproc_dependency="MyLib/Queue.d" --obj_directory="MyLib" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

MyLib/SystemCore.obj: ../MyLib/SystemCore.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/bin/cl2000" --silicon_version=28 -g --include_path="E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/include" --include_path="E:/_DSP_Pros/dsp28335_elec_pos/MyLib" --include_path="E:/_DSP_Pros/dsp28335_elec_pos" --include_path="E:/_DSP_Pros/dsp28335_elec_pos/My28335" --include_path="E:/_DSP_Pros/dsp28335_elec_pos/include" --include_path="E:/_DSP_Pros/dsp28335_elec_pos/user" --diag_warning=225 --large_memory_model --unified_memory --float_support=fpu32 --preproc_with_compile --preproc_dependency="MyLib/SystemCore.d" --obj_directory="MyLib" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


