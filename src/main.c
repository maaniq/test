/** @file
 *  @brief Main file.
 *  @description Just contains some example code. Adapt it in the way you like.
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

#include "drivers/adc_driver/adc_driver.h"
#include "drivers/error_led/error_led.h"

int main(int argc, char *argv[]) {
  adc_value_t value = 0;

  error_led_init();
  adc_init(ADC_CHANNEL1);

  adc_read_set_output(ADC_CHANNEL1, 120, ADC_RET_NOK);
  adc_read(ADC_CHANNEL1, &value);

  error_led_set(true);
}
