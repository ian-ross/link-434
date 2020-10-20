;;; Definitions for EFM8UB3 Thunderboard eval kit (SLTB005A)

  .include "efm8ub3.inc"

  ;; Push button states.
  THB_PB_PRESSED = 0
  THB_PB_UNPRESSED = 1

  ;; LED states.
  THB_LED_ON = 0
  THB_LED_OFF = 1


  ;; I/O definitions.

  THB_PB0 = P0.2                ; Push button 0
  THB_PB1 = P0.3                ; Push button 1

  THB_LED_G = P1.4              ; Green LED
  THB_LED_B = P1.5              ; Blue LED
  THB_LED_R = P1.6              ; Red LED
