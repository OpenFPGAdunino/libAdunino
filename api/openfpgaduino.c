#include <stdio.h>
#include <stdarg.h>
#include "../hardware/platform.h"
#include "../hardware/PIO26.h"
#include "../hardware/shield_ctrl.h"
#include "../hardware/FPGA.h"
#include "../hardware/AM2301.h"
#include "../hardware/sht1x.h"
#include "../hardware/AD7490.h"
#include "../hardware/position_sensor.h"
#include "../hardware/step_motor.h"
#include "../hardware/brush_motor.h"
#include "../hardware/fan_motor.h"
void led(int id, char r, char g, char b)
{
    void* address;
    switch (id) {
    case 0:
        address = LED_0;
        break;
    case 1:
        address = LED_1;
        break;
    case 2:
        address = LED_2;
        break;
    case 3:
        address = LED_3;
        break;
    default:
        return;
    }
    set_rgb_led(address,r,g,b);
}

void dio_a_dir(int id, int dir)
{
    if(id > 5)
        id =+ 2;
    if(dir == 0) {
        IOA_OE &= (~(1 << id));
    } else if (dir == 1)
    {
        IOA_OE |= (1 << id);
    }
}

void dio_b_dir(int id, int dir)
{

    if(id > 5)
        id =+ 2;
    if(dir == 0) {
        IOB_OE &= (~(1 << id));
    } else if (dir ==1)
    {
        IOB_OE |= (1 << id);
    }
}

int dio_a_in(int id)
{
    return *(&IOA_IO_0 + id);
}

int dio_b_in(int id)
{
    return *(&IOB_IO_0 + id);
}

void dio_a_out(int id, int value)
{
    *(&IOA_IO_0 + id) = value & 0x1;
}

void dio_b_out(int id, int value)
{
    *(&IOB_IO_0 + id) = value & 0x1;
}

void ain_a_init()
{
    AD7490_init(ADC7490_0);
}

void ain_b_init()
{
    AD7490_init(ADC7490_1);
}

int ain_a(int id)
{
    return AD7490_get_data(ADC7490_0, id -1);
}

int ain_b(int id)
{
    return AD7490_get_data(ADC7490_1, id -1);
}

void pwm(int id, int pwm)
{
    //PWM_init();
    void* address;
    switch (id) {
    case 0:
        address = PWM_0;
        break;
    case 1:
        address = PWM_1;
        break;
    case 2:
        address = PWM_2;
        break;
    case 3:
        address = PWM_3;
        break;
    default:
        return;
    }

}

float am2301_temperature(int id)
{
    void* address;
    switch (id) {
    case 0:
        address = AM2301_0;
        break;
    case 1:
        address = AM2301_1;
        break;
    default:
        return 0;
    }
    return AM2301_get_temperature(address);
}

float am2301_moisture(int id)
{
    void* address;
    switch (id) {
    case 0:
        address = AM2301_0;
        break;
    case 1:
        address = AM2301_1;
        break;
    default:
        return 0;
    }
    return AM2301_get_moisture(address);
}

void steering(int id, int angle)
{
    void* address;
    switch (id) {
    case 0:
        address = STERING_MOTOR_0;
        break;
    case 1:
        address = STERING_MOTOR_1;
        break;
    default:
        return 0;
    }
    steering_set_angle(address, angle);
}

int print(const char* format, ...)
{
    va_list ap;
    int retval;
    va_start(ap, format);
    retval = vprintf(format, ap);
    fflush(stdout);
    va_end(ap);
    return retval;
}
