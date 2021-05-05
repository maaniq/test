/** @file
 *  @brief Header file for a (dummy) error LED driver.
 */

#ifndef ERROR_LED_ERROR_LED_H_
#define ERROR_LED_ERROR_LED_H_

#include <stdbool.h>


/** @brief Initializes the error LED.
 */
void error_led_init(void);

/** @brief Turns the error LED on or off.
 *  @param[in] on_off Whether the LED must be turned on (true) or off (false).
 */
void error_led_set(bool on_off);

#endif  //  ERROR_LED_ERROR_LED_H_
