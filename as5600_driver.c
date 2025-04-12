#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_spi_flash.h"
#include "esp_task_wdt.h"
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "driver/gpio.h"
#include "driver/uart.h"
#include "driver/i2c.h"

#include "esp_err.h"
#include "esp_log.h"

#include "freertos/semphr.h"


#include "portmacro.h"
#include "FreeRTOSConfig.h"
#include "..\..\build\include\sdkconfig.h"


#include "mk_i2c.h"
#include "as5600_driver.h"


void as5600_read_raw_angle(uint16_t* angle) {
    uint8_t data[2] = { 0 };
    i2c_dev_read_reg(0, AS5600_ADDRESS, AS5600_REG_RAW_ANGLE, data, 2);
    *angle = (data[0] << 8) | data[1];
    }

