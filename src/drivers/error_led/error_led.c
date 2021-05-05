/** @file
 *  @brief Source file for a (dummy) error LED driver.
 */

#include "error_led.h"

#include <stdio.h>

void error_led_init() {
  printf("[ERROR_LED] Initializing\n");
  error_led_set(false);
}

void error_led_set(bool on_off) {
  if (on_off) {
    printf("[ERROR_LED] ON\n");
  } else {
    printf("[ERROR_LED] OFF\n");
  }
}
