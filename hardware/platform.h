/*
 * platform.h
 *
 *  Created on: Mar 12, 2013
 *      Author: zhizhouli
 */

#ifndef PLATFORM_H_
#define PLATFORM_H_

#include "FPGA.h"
#include "PIO26.h"
#include "PIO8.h"
#include "shield_ctrl.h"
#include "AM2301.h"
#include "sht1x.h"
#include "position_sensor.h"
#include "step_motor.h"
#include "brush_motor.h"
#include "fan_motor.h"
#include "led.h"
#include "unit_test.h"

#define ADC7490_0           QSYS_ADDRESS_TO_LINUX_ADDRESS(0x10000400)
#define ADC7490_1           QSYS_ADDRESS_TO_LINUX_ADDRESS(0x10000440)

#define LED_0               QSYS_ADDRESS_TO_LINUX_ADDRESS(0x10000100)
#define LED_1               QSYS_ADDRESS_TO_LINUX_ADDRESS(0x10000104)
#define LED_2               QSYS_ADDRESS_TO_LINUX_ADDRESS(0x10000108)
#define LED_3               QSYS_ADDRESS_TO_LINUX_ADDRESS(0x1000010C)

#define PWM_0               QSYS_ADDRESS_TO_LINUX_ADDRESS(0x10000150)
#define PWM_1               QSYS_ADDRESS_TO_LINUX_ADDRESS(0x10000150)
#define PWM_2               QSYS_ADDRESS_TO_LINUX_ADDRESS(0x10000150)
#define PWM_3               QSYS_ADDRESS_TO_LINUX_ADDRESS(0x10000150)

#define AM2301_0            QSYS_ADDRESS_TO_LINUX_ADDRESS(0x10000220)
#define AM2301_1            QSYS_ADDRESS_TO_LINUX_ADDRESS(0x10000240)
#define AM2301_2            QSYS_ADDRESS_TO_LINUX_ADDRESS(0x10000480)
#define AM2301_3            QSYS_ADDRESS_TO_LINUX_ADDRESS(0x100004a0)
#define AM2301_4            QSYS_ADDRESS_TO_LINUX_ADDRESS(0x100004c0)
#define AM2301_5            QSYS_ADDRESS_TO_LINUX_ADDRESS(0x100004e0)
#define AM2301_6            QSYS_ADDRESS_TO_LINUX_ADDRESS(0x10000500)
#define AM2301_7            QSYS_ADDRESS_TO_LINUX_ADDRESS(0x10000520)
#define AM2301_8            QSYS_ADDRESS_TO_LINUX_ADDRESS(0x10000540)

#define STEP_MOTOR_0        QSYS_ADDRESS_TO_LINUX_ADDRESS(0x10000260)
#define STEP_MOTOR_1        QSYS_ADDRESS_TO_LINUX_ADDRESS(0x10000280)
#define STEP_MOTOR_2        QSYS_ADDRESS_TO_LINUX_ADDRESS(0x100002a0)
#define STEP_MOTOR_3        QSYS_ADDRESS_TO_LINUX_ADDRESS(0x100002c0)
#define STEP_MOTOR_4        QSYS_ADDRESS_TO_LINUX_ADDRESS(0x100002e0)

#define POSITITON_SENSNOR_0 QSYS_ADDRESS_TO_LINUX_ADDRESS(0x10000300)
#define POSITITON_SENSNOR_1 QSYS_ADDRESS_TO_LINUX_ADDRESS(0x10000320)
#define POSITITON_SENSNOR_2 QSYS_ADDRESS_TO_LINUX_ADDRESS(0x10000340)
#define POSITITON_SENSNOR_3 QSYS_ADDRESS_TO_LINUX_ADDRESS(0x10000360)

#define BRUSH_MOTOR_0       QSYS_ADDRESS_TO_LINUX_ADDRESS(0x10000380)
#define BRUSH_MOTOR_1       QSYS_ADDRESS_TO_LINUX_ADDRESS(0x100003a0)
#define BRUSH_MOTOR_2       QSYS_ADDRESS_TO_LINUX_ADDRESS(0x100003c0)
#define BRUSH_MOTOR_3       QSYS_ADDRESS_TO_LINUX_ADDRESS(0x100003e0)
#define BRUSH_MOTOR_4       QSYS_ADDRESS_TO_LINUX_ADDRESS(0x10000400)

//#define FAN_MOTOR_0         QSYS_ADDRESS_TO_LINUX_ADDRESS(0x10000400)
//#define FAN_MOTOR_1         QSYS_ADDRESS_TO_LINUX_ADDRESS(0x10000420)

#define SUBDIVISION_STEP_MOTOR_0  QSYS_ADDRESS_TO_LINUX_ADDRESS(0x10000440)

//#define SHT1X_0             QSYS_ADDRESS_TO_LINUX_ADDRESS(0x10000460)
//#define SHT1X_1             QSYS_ADDRESS_TO_LINUX_ADDRESS(0x10000480)

#define SHT1X_0             QSYS_ADDRESS_TO_LINUX_ADDRESS(0x10000300)
#define SHT1X_1             QSYS_ADDRESS_TO_LINUX_ADDRESS(0x10000320)

#define STERING_MOTOR_0       QSYS_ADDRESS_TO_LINUX_ADDRESS(0x10000600)
#define STERING_MOTOR_1       QSYS_ADDRESS_TO_LINUX_ADDRESS(0x10000620)
#define STERING_MOTOR_2       QSYS_ADDRESS_TO_LINUX_ADDRESS(0x10000640)
#define STERING_MOTOR_3       QSYS_ADDRESS_TO_LINUX_ADDRESS(0x10000660)
#define STERING_MOTOR_4       QSYS_ADDRESS_TO_LINUX_ADDRESS(0x10000680)
#define STERING_MOTOR_5       QSYS_ADDRESS_TO_LINUX_ADDRESS(0x100006a0)
#define STERING_MOTOR_6       QSYS_ADDRESS_TO_LINUX_ADDRESS(0x100006c0)
#define STERING_MOTOR_7       QSYS_ADDRESS_TO_LINUX_ADDRESS(0x100006e0)
#define STERING_MOTOR_8       QSYS_ADDRESS_TO_LINUX_ADDRESS(0x10000700)
#define STERING_MOTOR_9       QSYS_ADDRESS_TO_LINUX_ADDRESS(0x10000720)
#define STERING_MOTOR_10      QSYS_ADDRESS_TO_LINUX_ADDRESS(0x10000740)
#define STERING_MOTOR_11      QSYS_ADDRESS_TO_LINUX_ADDRESS(0x10000760)
#define STERING_MOTOR_12      QSYS_ADDRESS_TO_LINUX_ADDRESS(0x10000780)
#define STERING_MOTOR_13      QSYS_ADDRESS_TO_LINUX_ADDRESS(0x100007A0)
#define STERING_MOTOR_14      QSYS_ADDRESS_TO_LINUX_ADDRESS(0x100007C0)
#define STERING_MOTOR_15      QSYS_ADDRESS_TO_LINUX_ADDRESS(0x100007e0)

#define MSE_ADDRESS	        0x10000800
#define MSE_BASE            QSYS_ADDRESS_TO_LINUX_ADDRESS(MSE_ADDRESS)
#define MSE_FAN_MOTOR_0     QSYS_ADDRESS_TO_LINUX_ADDRESS(MSE_ADDRESS+0x40)
#define MSE_FAN_MOTOR_1     QSYS_ADDRESS_TO_LINUX_ADDRESS(MSE_ADDRESS+0x60)
#define MSE_FAN_MOTOR_2     QSYS_ADDRESS_TO_LINUX_ADDRESS(MSE_ADDRESS+0x80)
#define MSE_FAN_MOTOR_3     QSYS_ADDRESS_TO_LINUX_ADDRESS(MSE_ADDRESS+0x200)
#define MSE_BRUSH_MOTOR_0   QSYS_ADDRESS_TO_LINUX_ADDRESS(MSE_ADDRESS+0x100)

#define TEST_REG            QSYS_ADDRESS_TO_LINUX_ADDRESS(0x10000c00)

//#define PNL_ADDRESS	        0x10000400
//#define PNL_BASE            QSYS_ADDRESS_TO_LINUX_ADDRESS(PNL_ADDRESS)
//#define PNL_ENCODER0        QSYS_ADDRESS_TO_LINUX_ADDRESS(PNL_ADDRESS+0x20)
//#define PNL_ENCODER1        QSYS_ADDRESS_TO_LINUX_ADDRESS(PNL_ADDRESS+0x30)
//#define PNL_LED0            QSYS_ADDRESS_TO_LINUX_ADDRESS(PNL_ADDRESS+0x80)
//#define PNL_LED1            QSYS_ADDRESS_TO_LINUX_ADDRESS(PNL_ADDRESS+0x84)
//#define PNL_LED2            QSYS_ADDRESS_TO_LINUX_ADDRESS(PNL_ADDRESS+0x88)
//#define PNL_LED3            QSYS_ADDRESS_TO_LINUX_ADDRESS(PNL_ADDRESS+0x8c)

#define PNL_ADDRESS	        0x10000c40
#define PNL_BASE            QSYS_ADDRESS_TO_LINUX_ADDRESS(PNL_ADDRESS)
#define PNL                 *((volatile int*)  PNL_BASE)
#define PNL_ID              *((volatile int*)  PNL_BASE+ 1)
#define PNL_DATA            *((volatile int*)  PNL_BASE+ 2)

#endif /* PLATFORM_H_ */
