################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/system/EnvironmentMap.cpp \
../src/system/Task.cpp \
../src/system/TaskExecuter.cpp \
../src/system/initialization.cpp 

OBJS += \
./src/system/EnvironmentMap.o \
./src/system/Task.o \
./src/system/TaskExecuter.o \
./src/system/initialization.o 

CPP_DEPS += \
./src/system/EnvironmentMap.d \
./src/system/Task.d \
./src/system/TaskExecuter.d \
./src/system/initialization.d 


# Each subdirectory must supply rules for building sources it contributes
src/system/%.o: ../src/system/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -std=c++14 -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


