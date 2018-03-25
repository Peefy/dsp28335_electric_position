################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../My28335/My28335_Init.c 

OBJS += \
./My28335/My28335_Init.obj 

C_DEPS += \
./My28335/My28335_Init.pp 

OBJS__QTD += \
".\My28335\My28335_Init.obj" 

C_DEPS__QTD += \
".\My28335\My28335_Init.pp" 

C_SRCS_QUOTED += \
"../My28335/My28335_Init.c" 


# Each subdirectory must supply rules for building sources it contributes
My28335/My28335_Init.obj: ../My28335/My28335_Init.c $(GEN_OPTS) $(GEN_SRCS)
	@echo 'Building file: $<'
	@echo 'Invoking: Compiler'
	"G:/CCSV4/ccsv4/tools/compiler/c2000/bin/cl2000" --silicon_version=28 -g -O2 --include_path="G:/CCSV4/ccsv4/tools/compiler/c2000/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/include" --include_path="G:/Ccsv4/workspace1/28335_MyFirst/My28335" --diag_warning=225 --large_memory_model --unified_memory --float_support=fpu32 --preproc_with_compile --preproc_dependency="My28335/My28335_Init.pp" --obj_directory="My28335" $(GEN_OPTS_QUOTED) $(subst #,$(wildcard $(subst $(SPACE),\$(SPACE),$<)),"#")
	@echo 'Finished building: $<'
	@echo ' '


