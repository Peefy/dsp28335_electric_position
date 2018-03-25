################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Add inputs and outputs from these tool invocations to the build variables 
ASM_SRCS += \
../src/DSP2833x_ADC_cal.asm \
../src/DSP2833x_CSMPasswords.asm \
../src/DSP2833x_CodeStartBranch.asm \
../src/DSP2833x_DBGIER.asm \
../src/DSP2833x_DisInt.asm \
../src/DSP2833x_usDelay.asm 

C_SRCS += \
../src/DSP2833x_Adc.c \
../src/DSP2833x_CpuTimers.c \
../src/DSP2833x_DMA.c \
../src/DSP2833x_DefaultIsr.c \
../src/DSP2833x_ECan.c \
../src/DSP2833x_ECap.c \
../src/DSP2833x_EPwm.c \
../src/DSP2833x_EQep.c \
../src/DSP2833x_GlobalVariableDefs.c \
../src/DSP2833x_Gpio.c \
../src/DSP2833x_I2C.c \
../src/DSP2833x_Mcbsp.c \
../src/DSP2833x_MemCopy.c \
../src/DSP2833x_PieCtrl.c \
../src/DSP2833x_PieVect.c \
../src/DSP2833x_Sci.c \
../src/DSP2833x_SysCtrl.c \
../src/DSP2833x_Xintf.c 

C_DEPS += \
./src/DSP2833x_Adc.d \
./src/DSP2833x_CpuTimers.d \
./src/DSP2833x_DMA.d \
./src/DSP2833x_DefaultIsr.d \
./src/DSP2833x_ECan.d \
./src/DSP2833x_ECap.d \
./src/DSP2833x_EPwm.d \
./src/DSP2833x_EQep.d \
./src/DSP2833x_GlobalVariableDefs.d \
./src/DSP2833x_Gpio.d \
./src/DSP2833x_I2C.d \
./src/DSP2833x_Mcbsp.d \
./src/DSP2833x_MemCopy.d \
./src/DSP2833x_PieCtrl.d \
./src/DSP2833x_PieVect.d \
./src/DSP2833x_Sci.d \
./src/DSP2833x_SysCtrl.d \
./src/DSP2833x_Xintf.d 

OBJS += \
./src/DSP2833x_ADC_cal.obj \
./src/DSP2833x_Adc.obj \
./src/DSP2833x_CSMPasswords.obj \
./src/DSP2833x_CodeStartBranch.obj \
./src/DSP2833x_CpuTimers.obj \
./src/DSP2833x_DBGIER.obj \
./src/DSP2833x_DMA.obj \
./src/DSP2833x_DefaultIsr.obj \
./src/DSP2833x_DisInt.obj \
./src/DSP2833x_ECan.obj \
./src/DSP2833x_ECap.obj \
./src/DSP2833x_EPwm.obj \
./src/DSP2833x_EQep.obj \
./src/DSP2833x_GlobalVariableDefs.obj \
./src/DSP2833x_Gpio.obj \
./src/DSP2833x_I2C.obj \
./src/DSP2833x_Mcbsp.obj \
./src/DSP2833x_MemCopy.obj \
./src/DSP2833x_PieCtrl.obj \
./src/DSP2833x_PieVect.obj \
./src/DSP2833x_Sci.obj \
./src/DSP2833x_SysCtrl.obj \
./src/DSP2833x_Xintf.obj \
./src/DSP2833x_usDelay.obj 

ASM_DEPS += \
./src/DSP2833x_ADC_cal.d \
./src/DSP2833x_CSMPasswords.d \
./src/DSP2833x_CodeStartBranch.d \
./src/DSP2833x_DBGIER.d \
./src/DSP2833x_DisInt.d \
./src/DSP2833x_usDelay.d 

OBJS__QUOTED += \
"src\DSP2833x_ADC_cal.obj" \
"src\DSP2833x_Adc.obj" \
"src\DSP2833x_CSMPasswords.obj" \
"src\DSP2833x_CodeStartBranch.obj" \
"src\DSP2833x_CpuTimers.obj" \
"src\DSP2833x_DBGIER.obj" \
"src\DSP2833x_DMA.obj" \
"src\DSP2833x_DefaultIsr.obj" \
"src\DSP2833x_DisInt.obj" \
"src\DSP2833x_ECan.obj" \
"src\DSP2833x_ECap.obj" \
"src\DSP2833x_EPwm.obj" \
"src\DSP2833x_EQep.obj" \
"src\DSP2833x_GlobalVariableDefs.obj" \
"src\DSP2833x_Gpio.obj" \
"src\DSP2833x_I2C.obj" \
"src\DSP2833x_Mcbsp.obj" \
"src\DSP2833x_MemCopy.obj" \
"src\DSP2833x_PieCtrl.obj" \
"src\DSP2833x_PieVect.obj" \
"src\DSP2833x_Sci.obj" \
"src\DSP2833x_SysCtrl.obj" \
"src\DSP2833x_Xintf.obj" \
"src\DSP2833x_usDelay.obj" 

C_DEPS__QUOTED += \
"src\DSP2833x_Adc.d" \
"src\DSP2833x_CpuTimers.d" \
"src\DSP2833x_DMA.d" \
"src\DSP2833x_DefaultIsr.d" \
"src\DSP2833x_ECan.d" \
"src\DSP2833x_ECap.d" \
"src\DSP2833x_EPwm.d" \
"src\DSP2833x_EQep.d" \
"src\DSP2833x_GlobalVariableDefs.d" \
"src\DSP2833x_Gpio.d" \
"src\DSP2833x_I2C.d" \
"src\DSP2833x_Mcbsp.d" \
"src\DSP2833x_MemCopy.d" \
"src\DSP2833x_PieCtrl.d" \
"src\DSP2833x_PieVect.d" \
"src\DSP2833x_Sci.d" \
"src\DSP2833x_SysCtrl.d" \
"src\DSP2833x_Xintf.d" 

ASM_DEPS__QUOTED += \
"src\DSP2833x_ADC_cal.d" \
"src\DSP2833x_CSMPasswords.d" \
"src\DSP2833x_CodeStartBranch.d" \
"src\DSP2833x_DBGIER.d" \
"src\DSP2833x_DisInt.d" \
"src\DSP2833x_usDelay.d" 

ASM_SRCS__QUOTED += \
"../src/DSP2833x_ADC_cal.asm" \
"../src/DSP2833x_CSMPasswords.asm" \
"../src/DSP2833x_CodeStartBranch.asm" \
"../src/DSP2833x_DBGIER.asm" \
"../src/DSP2833x_DisInt.asm" \
"../src/DSP2833x_usDelay.asm" 

C_SRCS__QUOTED += \
"../src/DSP2833x_Adc.c" \
"../src/DSP2833x_CpuTimers.c" \
"../src/DSP2833x_DMA.c" \
"../src/DSP2833x_DefaultIsr.c" \
"../src/DSP2833x_ECan.c" \
"../src/DSP2833x_ECap.c" \
"../src/DSP2833x_EPwm.c" \
"../src/DSP2833x_EQep.c" \
"../src/DSP2833x_GlobalVariableDefs.c" \
"../src/DSP2833x_Gpio.c" \
"../src/DSP2833x_I2C.c" \
"../src/DSP2833x_Mcbsp.c" \
"../src/DSP2833x_MemCopy.c" \
"../src/DSP2833x_PieCtrl.c" \
"../src/DSP2833x_PieVect.c" \
"../src/DSP2833x_Sci.c" \
"../src/DSP2833x_SysCtrl.c" \
"../src/DSP2833x_Xintf.c" 


