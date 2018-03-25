################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../main.c 

CMD_SRCS += \
../28335_RAM_lnk.cmd 

OBJS += \
./main.obj 

C_DEPS += \
./main.pp 

OBJS__QTD += \
".\main.obj" 

C_DEPS__QTD += \
".\main.pp" 

C_SRCS_QUOTED += \
"../main.c" 


# Each subdirectory must supply rules for building sources it contributes
28335_RAM_lnk.out: ../28335_RAM_lnk.cmd $(GEN_CMDS)
	@echo 'Building file: $<'
	@echo 'Invoking: Linker'
	"G:/CCSV4/ccsv4/tools/compiler/c2000/bin/cl2000" --silicon_version=28 -g -O2 --diag_warning=225 --large_memory_model --unified_memory --float_support=fpu32 -z -m"28335_MyFirst.map" --stack_size=0x300 --warn_sections -i"G:/CCSV4/ccsv4/tools/compiler/c2000/lib" -i"G:/CCSV4/ccsv4/tools/compiler/c2000/include" --reread_libs --rom_model -o "$@" "$<" "../28335_RAM_lnk.cmd"
	@echo 'Finished building: $<'
	@echo ' '

main.obj: ../main.c $(GEN_OPTS) $(GEN_SRCS)
	@echo 'Building file: $<'
	@echo 'Invoking: Compiler'
	"G:/CCSV4/ccsv4/tools/compiler/c2000/bin/cl2000" --silicon_version=28 -g -O2 --include_path="G:/CCSV4/ccsv4/tools/compiler/c2000/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/My28335" --diag_warning=225 --large_memory_model --unified_memory --float_support=fpu32 --preproc_with_compile --preproc_dependency="main.pp" $(GEN_OPTS_QUOTED) $(subst #,$(wildcard $(subst $(SPACE),\$(SPACE),$<)),"#")
	@echo 'Finished building: $<'
	@echo ' '


