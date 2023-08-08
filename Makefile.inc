mkfile_path := $(dir $(lastword $(MAKEFILE_LIST)))

APPL_COBJS +=

APPL_CXXOBJS += \
	util.o \
	Measure.o \
	Brightness.o \
	MyColorSensor.o \
	Polling.o \
	Length.o \
	TurnAngle.o \
	Odometry.o \
	Velocity.o \
	HsvHue.o \
	HsvSatu.o \
	ArmAngle.o\
	TeelAngle.o\
	PID.o \
	SimpleWalker.o \
	MoveArm.o\
	MoveTeel.o\
	SpeedControl.o \
	Walker.o \
	LineTracer.o \
	LowPassFilter.o \
	Scene.o \
	Section.o \
	SectionManager.o \
	SpeedSectionManager.o \
	DoubleLoop.o\
	BlockDeTreasure.o\
	x.o \
	y.o \
	judge.o\
	judgeLength.o\
	judgeColor.o\
	judgeBlockColor.o\
	judgeTime.o\
	judgeTurnAngle.o\
	judgeArmAngle.o\
	judgeTeelAngle.o\
	MotorManager.o  

SRCLANG := c++

ifdef CONFIG_EV3RT_APPLICATION

# Include libraries
include $(EV3RT_SDK_LIB_DIR)/libcpp-ev3/Makefile

endif

APPL_DIRS += $(mkfile_path)app $(mkfile_path)unit  $(mkfile_path)device $(mkfile_path)walker $(mkfile_path)section $(mkfile_path)judge $(mkfile_path)Measure

INCLUDES += \
	-I$(mkfile_path)app \
	-I$(mkfile_path)device \
	-I$(mkfile_path)walker \
	-I$(mkfile_path)section \
	-I$(mkfile_path)judge \
	-I$(mkfile_path)Measure

# COPTS += -fno-use-cxa-atexit
COPTS += -std=c++11
