/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

/*!
 * @addtogroup pin_mux
 * @{
 */

/***********************************************************************************************************************
 * API
 **********************************************************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif

/*!
 * @brief Calls initialization functions.
 *
 */
void BOARD_InitBootPins(void);

#define IOCON_PIO_DIGITAL_EN 0x80u    /*!<@brief Enables digital function */
#define IOCON_PIO_FUNC1 0x01u         /*!<@brief Selects pin function 1 */
#define IOCON_PIO_FUNC2 0x02u         /*!<@brief Selects pin function 2 */
#define IOCON_PIO_FUNC3 0x03u         /*!<@brief Selects pin function 3 */
#define IOCON_PIO_INPFILT_OFF 0x0100u /*!<@brief Input filter disabled */
#define IOCON_PIO_INV_DI 0x00u        /*!<@brief Input function is not inverted */
#define IOCON_PIO_MODE_INACT 0x00u    /*!<@brief No addition pin function */
#define IOCON_PIO_OPENDRAIN_DI 0x00u  /*!<@brief Open drain is disabled */
#define IOCON_PIO_SLEW_STANDARD 0x00u /*!<@brief Standard mode, output slew rate control is enabled */
#define PIO114_DIGIMODE_DIGITAL 0x01u /*!<@brief Select Analog/Digital mode.: Digital mode. */
#define PIO114_FUNC_ALT3 0x03u        /*!<@brief Selects pin function.: Alternative connection 3. */

/*! @name FC0_RXD_SDA_MOSI (number 31), U18[4]/TO_MUX_P0_0-ISP_RX
  @{ */
/* @} */

/*! @name FC0_TXD_SCL_MISO (number 32), U6[4]/U22[3]/P0_1-ISP_TX
  @{ */
/* @} */

/*! @name SCT0_OUT4 (number 30), J9[8]/D2[4]/P1_10-SCT4-LED_GREEN
  @{ */
/* @} */

/*! @name SCT0_OUT2 (number 11), J2[5]/D2[1]/P0_29-CT32B0_MAT3-RED
  @{ */
/* @} */

/*!
 * @brief Configures pin routing and optionally pin electrical features.
 *
 */
void BOARD_InitPins(void); /* Function assigned for the Cortex-M4F */

#if defined(__cplusplus)
}
#endif

/*!
 * @}
 */
#endif /* _PIN_MUX_H_ */

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
