################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/disturbed\ people.cpp 

OBJS += \
./src/disturbed\ people.o 

CPP_DEPS += \
./src/disturbed\ people.d 


# Each subdirectory must supply rules for building sources it contributes
src/disturbed\ people.o: ../src/disturbed\ people.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/disturbed people.d" -MT"src/disturbed\ people.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


