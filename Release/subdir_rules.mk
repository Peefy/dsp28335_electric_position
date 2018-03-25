################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
main.obj: ../main.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: C2000 Compiler'
	"E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/bin/cl2000" --silicon_version=28 -g -O2 --include_path="E:/CCS/ccsv7/tools/compiler/ti-cgt-c2000_16.9.1.LTS/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/My28335" --diag_warning=225 --large_memory_model --unified_memory --float_support=fpu32 --preproc_with_compile --preproc_dependency="main.d" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


