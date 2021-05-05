/** @file
 *  @brief Header file for a (dummy) ADC driver.
 */
#ifndef DRIVERS_ADC_DRIVER_ADC_DRIVER_H_
#define DRIVERS_ADC_DRIVER_ADC_DRIVER_H_

#include <stdint.h>


/** @brief The available for ADC channels. */
typedef enum {
  ADC_CHANNEL0,
  ADC_CHANNEL1,
  ADC_NUM_CHANNELS
} adc_channel_id_t;

/** @brief Return type for ADC functions. */
typedef enum {
  ADC_RET_OK = 0,  //!< Operation successful
  ADC_RET_NOK,  //!< Operation not successful
} adc_return_t;

/** @brief Type for ADC values. */
typedef uint16_t adc_value_t;


/** @brief Initializes the ADC channel.
 *  @param[in] id The ID of the ADC channel.
 *  @returns Whether the channel was initialized successfully or not.
 */
adc_return_t adc_init(adc_channel_id_t id);

/** @brief Reads the value of the ADC channel.
 *  @param[in] id The ID of the ADC channel.
 *  @param[out] value The read ADC value, which is a value between 0 (0V) and
 *    1023 (5V).
 *  @returns Whether the channel was initialized successfully or not.
 */
adc_return_t adc_read(adc_channel_id_t id, adc_value_t* value);

/** @brief Helper function for setting what is returned by adc_read().
 *  @param[in] id The ID of the ADC channel you want to specify the adc_read()
 *    output for..
 *  @param[in] value The value that is assigned to the ADC value output.
 *  @param[in] return_value The value that is returned by adc_read().
 *  @note This is just some code for manual mocking that can help you with
 *    testing!
 */
void adc_read_set_output(adc_channel_id_t id, adc_value_t value,
                         adc_return_t return_value);


#endif  // DRIVERS_ADC_DRIVER_ADC_DRIVER_H_
