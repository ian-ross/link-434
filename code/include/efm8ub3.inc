;; Definitions for EFM8UB3.

;-----------------------------------------------------------------------------
; Register Definitions
;-----------------------------------------------------------------------------

  ADC0AC    = 0xB3     ; ADC0 accumulator configuration
  ADC0CF    = 0xBC     ; ADC0 configuration
  ADC0CN0   = 0xE8     ; ADC0 control 0
  ADC0CN0.0 = 0xE8
  ADC0CN0.1 = 0xE9
  ADC0CN0.2 = 0xEA
  ADC0CN0.3 = 0xEB
  ADC0CN0.4 = 0xEC
  ADC0CN0.5 = 0xED
  ADC0CN0.6 = 0xEE
  ADC0CN0.7 = 0xEF
  ADC0CN1   = 0xB2     ; ADC0 control 1
  ADC0GT    = 0xC4     ; ADC0 greater-than high byte
  ADC0GTL   = 0xC3     ; ADC0 greater-than low byte
  ADC0      = 0xBE     ; ADC0 data word high byte
  ADC0L     = 0xBD     ; ADC0 data word low byte
  ADC0LT    = 0xC6     ; ADC0 less-than high byte
  ADC0LTL   = 0xC5     ; ADC0 less-than low byte
  ADC0MX    = 0xBB     ; ADC0 multiplexer selection
  ADC0PWR   = 0xDF     ; ADC0 power control
  ADC0TK    = 0xB9     ; ADC0 burst mode track time

  CKCON0    = 0x8E     ; Clock control 0
  CKCON1    = 0xA6     ; Clock control 1

  CLEN0     = 0xCB     ; Configurable logic enable 0
  CLIE0     = 0xCD     ; Configurable logic interrupt enable 0
  CLIF0     = 0xE8     ; Configurable logic interrupt flag 0
  CLIF0.0   = 0xE8
  CLIF0.1   = 0xE9
  CLIF0.2   = 0xEA
  CLIF0.3   = 0xEB
  CLIF0.4   = 0xEC
  CLIF0.5   = 0xED
  CLIF0.6   = 0xEE
  CLIF0.7   = 0xEF
  CLKSEL    = 0xA9     ; Clock select
  CLOUT0    = 0xD9     ; Configurable logic output 0
  CLU0CF    = 0xB1     ; CLU 0 configuration
  CLU0FN    = 0xAD     ; CLU 0 function select
  CLU0MX    = 0x84     ; CLU 0 multiplexer
  CLU1CF    = 0xBB     ; CLU 1 configuration
  CLU1FN    = 0xB9     ; CLU 1 function select
  CLU1MX    = 0x85     ; CLU 1 multiplexer
  CLU2CF    = 0xBD     ; CLU 2 configuration
  CLU2FN    = 0xBC     ; CLU 2 function select
  CLU2MX    = 0x91     ; CLU 2 multiplexer
  CLU3CF    = 0xCA     ; CLU 3 configuration
  CLU3FN    = 0xC7     ; CLU 3 function select
  CLU3MX    = 0x92     ; CLU 3 multiplexer

  CMP0CN0   = 0x9B     ; Comparator 0 control 0
  CMP0CN1   = 0x99     ; Comparator 0 control 1
  CMP0MD    = 0x9D     ; Comparator 0 mode
  CMP0MX    = 0x9F     ; Comparator 0 multiplexer selection
  CMP1CN0   = 0xBF     ; Comparator 1 control 0
  CMP1CN1   = 0xAC     ; Comparator 1 control 1
  CMP1MD    = 0xAB     ; Comparator 1 mode
  CMP1MX    = 0xAA     ; Comparator 1 multiplexer selection

  CRC0CN0   = 0xCE     ; CRC0 control 0
  CRC0CN1   = 0x86     ; CRC0 control 1
  CRC0CNT   = 0xD3     ; CRC0 automatic flash sector count
  CRC0DAT   = 0xDE     ; CRC0 data output
  CRC0FLIP  = 0xCF     ; CRC0 bit flip
  CRC0IN    = 0xDD     ; CRC0 data input
  CRC0ST    = 0xD2     ; CRC0 automatic flash sector start

  DERIVID   = 0xAD     ; Derivative identification
  DEVICEID  = 0xB5     ; Device identification
  REVID     = 0xB6     ; Revision identifcation

  EIE1      = 0xE6     ; Extended interrupt enable 1
  EIE2      = 0xCE     ; Extended interrupt enable 2
  EIP1      = 0xF3     ; Extended interrupt priority 1 low
  EIP1      = 0xF5     ; Extended interrupt priority 1 high
  EIP2      = 0xF4     ; Extended interrupt priority 2
  EIP2      = 0xF6     ; Extended interrupt priority 2 high

  EMI0CN    = 0xE7     ; External memory interface control
  FLKEY     = 0xB7     ; Flash lock and key

  HFO0CAL   = 0xC7     ; High frequency oscillator 0 calibration
  HFO1CAL   = 0xD6     ; High frequency oscillator 1 calibration
  HFOCN     = 0xEF     ; High frequency oscillator control
  LFO0CN    = 0xB1     ; Low frequency oscillator control

  IPH       = 0xF2     ; Interrupt priority high

  IE.6      = 0xAE
  IP.6      = 0xBE

  IT01CF    = 0x85     ; INT0/INT1 configuration

  P0MASK    = 0xFE     ; Port 0 mask
  P0MAT     = 0xFD     ; Port 0 match
  P0MDIN    = 0xF1     ; Port 0 input mode
  P0MDOUT   = 0xA4     ; Port 0 output mode
  P0SKIP    = 0xD4     ; Port 0 skip

  P1MASK    = 0xEE     ; Port 1 mask
  P1MAT     = 0xED     ; Port 1 match
  P1MDIN    = 0xF2     ; Port 1 input mode
  P1MDOUT   = 0xA5     ; Port 1 output mode
  P1SKIP    = 0xD5     ; Port 1 skip

  P2MASK    = 0xFC     ; Port 2 mask
  P2MAT     = 0xFB     ; Port 2 match
  P2MDIN    = 0xF3     ; Port 2 input mode
  P2MDOUT   = 0xA6     ; Port 2 output mode

  PCA0CENT  = 0x9E     ; PCA center alignment enable
  PCA0CLR   = 0x9C     ; PCA comparator clear control
  PCA0CN0   = 0xD8     ; PCA control
  PCA0CN0.0 = 0xD8
  PCA0CN0.1 = 0xD9
  PCA0CN0.2 = 0xDA
  PCA0CN0.3 = 0xDB
  PCA0CN0.4 = 0xDC
  PCA0CN0.5 = 0xDD
  PCA0CN0.6 = 0xDE
  PCA0CN0.7 = 0xDF
  PCA0CPH0  = 0xFC     ; PCA channel 0 capture module high byte
  PCA0CPH1  = 0xEA     ; PCA channel 1 capture module high byte
  PCA0CPH2  = 0xEC     ; PCA channel 2 capture module high byte
  PCA0CPL0  = 0xFB     ; PCA channel 0 capture module low byte
  PCA0CPL1  = 0xE9     ; PCA channel 1 capture module low byte
  PCA0CPL2  = 0xEB     ; PCA channel 2 capture module low byte
  PCA0CPM0  = 0xDA     ; PCA channel 0 capture/compare Mode
  PCA0CPM1  = 0xDB     ; PCA channel 1 capture/compare Mode
  PCA0CPM2  = 0xDC     ; PCA channel 2 capture/compare Mode
  PCA0      = 0xFA     ; PCA counter/timer high byte
  PCA0L     = 0xF9     ; PCA counter/timer low byte
  PCA0MD    = 0xD9     ; PCA mode
  PCA0POL   = 0x96     ; PCA output polarity
  PCA0PWM   = 0xF7     ; PCA PWM configuration

  PCON0     = 0x87     ; Power control
  PCON1     = 0xE4     ; Power control 1

  PFE0CN    = 0xC1     ; Prefetch engine control

  PRTDRV    = 0xF6     ; Port drive strength

  PSCTL     = 0x8F     ; Program store control

  PSTAT0    = 0xAD     ; Power status

  REF0CN    = 0xD1     ; Voltage reference control
  REG0CN    = 0xC9     ; Voltage regulator 0 control
  REG1CN    = 0xC6     ; Voltage regulator 1 control

  RSTSRC    = 0xEF     ; Reset source

  SBCON1    = 0x94     ; UART1 baud rate generator control
  SBRLH1    = 0x96     ; UART1 baud rate generator high byte
  SBRLL1    = 0x95     ; UART1 baud rate generator low byte
  SBUF1     = 0x99     ; UART1 serial port data Buffer
  SCON1     = 0x98     ; UART1 serial port control
  SCON1.0   = 0x98
  SCON1.1   = 0x99
  SCON1.2   = 0x9A
  SCON1.3   = 0x9B
  SCON1.4   = 0x9C
  SCON1.5   = 0x9D
  SCON1.6   = 0x9E
  SCON1.7   = 0x9F
  SMOD1     = 0x93     ; UART1 mode

  SFRPAGE   = 0xA7     ; SFR page
  SFRPGCN   = 0xCF     ; SFR page control
  SFRSTACK  = 0xD7     ; SFR page stack

  SMB0ADM   = 0xD6     ; SMBus 0 slave address Mask
  SMB0ADR   = 0xD7     ; SMBus 0 slave address
  SMB0CF    = 0xC1     ; SMBus 0 configuration
  SMB0CN0   = 0xC0     ; SMBus 0 control
  SMB0CN0.0 = 0xC0
  SMB0CN0.1 = 0xC1
  SMB0CN0.2 = 0xC2
  SMB0CN0.3 = 0xC3
  SMB0CN0.4 = 0xC4
  SMB0CN0.5 = 0xC5
  SMB0CN0.6 = 0xC6
  SMB0CN0.7 = 0xC7
  SMB0DAT   = 0xC2     ; SMBus 0 data
  SMB0FCN0  = 0xC3     ; SMBus 0 FIFO control 0
  SMB0FCN1  = 0xC4     ; SMBus 0 FIFO control 1
  SMB0FCT   = 0xEF     ; SMBus 0 FIFO Count
  SMB0RXLN  = 0xC5     ; SMBus 0 receive length counter
  SMB0TC    = 0xAC     ; SMBus 0 timing and pin control

  SPI0CFG   = 0xA1     ; SPI0 configuration
  SPI0CKR   = 0xA2     ; SPI0 clock rate
  SPI0CN0   = 0xF8     ; SPI0 control
  SPI0CN0.0 = 0xF8
  SPI0CN0.1 = 0xF9
  SPI0CN0.2 = 0xFA
  SPI0CN0.3 = 0xFB
  SPI0CN0.4 = 0xFC
  SPI0CN0.5 = 0xFD
  SPI0CN0.6 = 0xFE
  SPI0CN0.7 = 0xFF
  SPI0DAT   = 0xA3     ; SPI0 data
  SPI0FCN0  = 0x9A     ; SPI0 FIFO control 0
  SPI0FCN1  = 0x9B     ; SPI0 FIFO control 1
  SPI0FCT   = 0xF7     ; SPI0 FIFO count
  SPI0PCF   = 0xDF     ; SPI0 pin configuration

  TMR2CN0   = 0xC8     ; Timer 2 control 0
  TMR2CN0.0 = 0xC8
  TMR2CN0.1 = 0xC9
  TMR2CN0.2 = 0xCA
  TMR2CN0.3 = 0xCB
  TMR2CN0.4 = 0xCC
  TMR2CN0.5 = 0xCD
  TMR2CN0.6 = 0xCE
  TMR2CN0.7 = 0xCF
  TMR2CN1   = 0xFD     ; Timer 2 control 1
  TMR2      = 0xCD     ; Timer 2 high byte
  TMR2L     = 0xCC     ; Timer 2 low byte
  TMR2RL    = 0xCB     ; Timer 2 reload high byte
  TMR2RLL   = 0xCA     ; Timer 2 reload low byte

  TMR3CN0   = 0x91     ; Timer 3 control 0
  TMR3CN1   = 0xFE     ; Timer 3 control 1
  TMR3      = 0x95     ; Timer 3 high byte
  TMR3L     = 0x94     ; Timer 3 low byte
  TMR3RL    = 0x93     ; Timer 3 reload high byte
  TMR3RLL   = 0x92     ; Timer 3 reload low byte

  TMR4CN0   = 0x98     ; Timer 4 control 0
  TMR4CN0.0 = 0x98
  TMR4CN0.1 = 0x99
  TMR4CN0.2 = 0x9A
  TMR4CN0.3 = 0x9B
  TMR4CN0.4 = 0x9C
  TMR4CN0.5 = 0x9D
  TMR4CN0.6 = 0x9E
  TMR4CN0.7 = 0x9F
  TMR4CN1   = 0xFF     ; Timer 4 control 1
  TMR4      = 0xA5     ; Timer 4 high byte
  TMR4L     = 0xA4     ; Timer 4 low byte
  TMR4RL    = 0xA3     ; Timer 4 reload high byte
  TMR4RLL   = 0xA2     ; Timer 4 reload low byte

  TMR5CN0   = 0xC0     ; Timer 5 control 0
  TMR5CN0.0 = 0xC0
  TMR5CN0.1 = 0xC1
  TMR5CN0.2 = 0xC2
  TMR5CN0.3 = 0xC3
  TMR5CN0.4 = 0xC4
  TMR5CN0.5 = 0xC5
  TMR5CN0.6 = 0xC6
  TMR5CN0.7 = 0xC7
  TMR5CN1   = 0xF1     ; Timer 5 control 1
  TMR5      = 0xD5     ; Timer 5 high byte
  TMR5L     = 0xD4     ; Timer 5 low byte
  TMR5RL    = 0xD3     ; Timer 5 reload high byte
  TMR5RLL   = 0xD2     ; Timer 5 reload low byte

  UART1FCN0 = 0x9D     ; UART1 FIFO control 0
  UART1FCN1 = 0xD8     ; UART1 FIFO control 1
  UART1FCN1.0 = 0xD8
  UART1FCN1.1 = 0xD9
  UART1FCN1.2 = 0xDA
  UART1FCN1.3 = 0xDB
  UART1FCN1.4 = 0xDC
  UART1FCN1.5 = 0xDD
  UART1FCN1.6 = 0xDE
  UART1FCN1.7 = 0xDF
  UART1FCT  = 0xFA     ; UART1 FIFO count
  UART1LIN  = 0x9E     ; UART1 LIN configuration
  UART1PCF  = 0xDA     ; UART1 configuration

  USB0ADR   = 0xAE     ; USB0 indirect address
  USB0AEC   = 0xB2     ; USB0 advanced energy control
  USB0CDCF  = 0xB6     ; USB0 charger detect configuration
  USB0CDCN  = 0xBE     ; USB0 charger detect control
  USB0CDSTA = 0xBF     ; USB0 charger detect status
  USB0CF    = 0xB5     ; USB0 configuration
  USB0DAT   = 0xAF     ; USB0 data
  USB0XCN   = 0xB3     ; USB0 transceiver control

  VDM0CN    = 0xFF     ; Supply monitor control

  WDTCN     = 0x97     ; Watchdog timer control

  XBR0      = 0xE1     ; Port I/O crossbar 0
  XBR1      = 0xE2     ; Port I/O crossbar 1
  XBR2      = 0xE3     ; Port I/O crossbar 2


;------------------------------------------------------------------------------
; Indirect Register Definitions
;------------------------------------------------------------------------------

  CLKREC    = 0x0F     ; USB0 clock recovery control
  CMIE      = 0x0B     ; USB0 common interrupt enable
  CMINT     = 0x06     ; USB0 common interrupt
  E0CNT     = 0x16     ; USB0 endpoint0 data count
  E0CSR     = 0x11     ; USB0 endpoint0 control
  EENABLE   = 0x1E     ; USB0 endpoint enable
  EINCSR    = 0x12     ; USB0 IN endpoint control high
  EINCSRL   = 0x11     ; USB0 IN endpoint control
  EOUTCNT   = 0x17     ; USB0 OUT endpoint count high
  EOUTCNTL  = 0x16     ; USB0 OUT endpoint count
  EOUTCSR   = 0x15     ; USB0 OUT endpoint control high
  EOUTCSRL  = 0x14     ; USB0 OUT endpoint control
  FADDR     = 0x00     ; USB0 function address
  FIFO0     = 0x20     ; USB0 endpoint 0 FIFO access
  FIFO1     = 0x21     ; USB0 endpoint 1 FIFO access
  FIFO2     = 0x22     ; USB0 endpoint 2 FIFO access
  FIFO3     = 0x23     ; USB0 endpoint 3 FIFO access
  FRAME     = 0x0D     ; USB0 frame number high
  FRAMEL    = 0x0C     ; USB0 frame number
  IN1IE     = 0x07     ; USB0 IN endpoint interrupt enable
  IN1INT    = 0x02     ; USB0 IN endpoint interrupt
  INDEX     = 0x0E     ; USB0 endpoint Index
  OUT1IE    = 0x09     ; USB0 OUT endpoint interrupt enable
  OUT1INT   = 0x04     ; USB0 OUT endpoint interrupt
  POWER     = 0x01     ; USB0 power


;------------------------------------------------------------------------------
; Bit Definitions
;------------------------------------------------------------------------------

;; ACC 0xE0 (accumulator)
  ACC_ACC0 = ACC.0
  ACC_ACC1 = ACC.1
  ACC_ACC2 = ACC.2
  ACC_ACC3 = ACC.3
  ACC_ACC4 = ACC.4
  ACC_ACC5 = ACC.5
  ACC_ACC6 = ACC.6
  ACC_ACC7 = ACC.7

;; ADC0CN0 0xE8 (ADC0 control 0)
  ADC0CN0_ADWINT = ADC0CN0.3       ; Window compare interrupt flag
  ADC0CN0_ADBUSY = ADC0CN0.4       ; ADC busy
  ADC0CN0_ADINT  = ADC0CN0.5       ; Conversion complete interrupt flag
  ADC0CN0_ADBMEN = ADC0CN0.6       ; Burst mode enable
  ADC0CN0_ADEN   = ADC0CN0.7       ; ADC enable

;; CLIF0 0xE8 (Configurable logic interrupt flag 0)
  CLIF0_C0FIF = CLIF0.0            ; CLU0 falling edge flag
  CLIF0_C0RIF = CLIF0.1            ; CLU0 rising edge flag
  CLIF0_C1FIF = CLIF0.2            ; CLU1 falling edge flag
  CLIF0_C1RIF = CLIF0.3            ; CLU1 rising edge flag
  CLIF0_C2FIF = CLIF0.4            ; CLU2 falling edge flag
  CLIF0_C2RIF = CLIF0.5            ; CLU2 rising edge flag
  CLIF0_C3FIF = CLIF0.6            ; CLU3 falling edge flag
  CLIF0_C3RIF = CLIF0.7            ; CLU3 rising edge flag

;; IE 0xA8 (Interrupt enable)
  IE_EX0   = IE.0                  ; External interrupt 0 enable
  IE_ET0   = IE.1                  ; Timer 0 interrupt enable
  IE_EX1   = IE.2                  ; External interrupt 1 enable
  IE_ET1   = IE.3                  ; Timer 1 interrupt enable
  IE_ES1   = IE.4                  ; UART1 interrupt enable
  IE_ET2   = IE.5                  ; Timer 2 interrupt enable
  IE_ESPI0 = IE.6                  ; SPI0 interrupt enable
  IE_EA    = IE.7                  ; All interrupts enable

;; IP 0xB8 (Interrupt priority)
  IP_PX0   = IP.0                  ; External interrupt 0 priority control LSB
  IP_PT0   = IP.1                  ; Timer 0 interrupt priority control LSB
  IP_PX1   = IP.2                  ; External interrupt 1 priority control LSB
  IP_PT1   = IP.3                  ; Timer 1 interrupt priority control LSB
  IP_PS1   = IP.4                  ; UART1 interrupt priority control LSB
  IP_PT2   = IP.5                  ; Timer 2 interrupt priority control LSB
  IP_PSPI0 = IP.6                  ; SPI0 interrupt priority control LSB

;; PCA0CN0 0xD8 (PCA control)
  PCA0CN0_CCF0 = PCA0CN0.0         ; PCA module 0 capture/compare flag
  PCA0CN0_CCF1 = PCA0CN0.1         ; PCA module 1 capture/compare flag
  PCA0CN0_CCF2 = PCA0CN0.2         ; PCA module 2 capture/compare flag
  PCA0CN0_CR   = PCA0CN0.6         ; PCA counter/timer run control
  PCA0CN0_CF   = PCA0CN0.7         ; PCA counter/timer overflow flag

;; PSW 0xD0 (Program Status Word)
  PSW_PARITY = PSW.0               ; Parity flag
  PSW_F1     = PSW.1               ; User flag 1
  PSW_OV     = PSW.2               ; Overflow flag
  PSW_RS0    = PSW.3               ; Register bank select bit 0
  PSW_RS1    = PSW.4               ; Register bank select bit 1
  PSW_F0     = PSW.5               ; User flag 0
  PSW_AC     = PSW.6               ; Auxiliary carry flag
  PSW_CY     = PSW.7               ; Carry flag

;; SCON1 0x98 (UART1 serial port control)
  SCON1_RI   = SCON1.0             ; Receive interrupt flag
  SCON1_TI   = SCON1.1             ; Transmit interrupt flag
  SCON1_RBX  = SCON1.2             ; Extra receive bit
  SCON1_TBX  = SCON1.3             ; Extra transmission bit
  SCON1_REN  = SCON1.4             ; Receive enable
  SCON1_PERR = SCON1.6             ; Parity error flag
  SCON1_OVR  = SCON1.7             ; Receive FIFO overrun flag

;; SMB0CN0 0xC0 (SMBus 0 control)
  SMB0CN0_SI      = SMB0CN0.0      ; SMBus interrupt flag
  SMB0CN0_ACK     = SMB0CN0.1      ; SMBus acknowledge
  SMB0CN0_ARBLOST = SMB0CN0.2      ; SMBus arbitration lost indicator
  SMB0CN0_ACKRQ   = SMB0CN0.3      ; SMBus acknowledge request
  SMB0CN0_STO     = SMB0CN0.4      ; SMBus stop flag
  SMB0CN0_STA     = SMB0CN0.5      ; SMBus start flag
  SMB0CN0_TXMODE  = SMB0CN0.6      ; SMBus transmit mode indicator
  SMB0CN0_MASTER  = SMB0CN0.7      ; SMBus master/slave indicator

;; SPI0CN0 0xF8 (SPI0 control)
  SPI0CN0_SPIEN  = SPI0CN0.0       ; SPI0 enable
  SPI0CN0_TXNF   = SPI0CN0.1       ; TX FIFO not full
  SPI0CN0_NSSMD0 = SPI0CN0.2       ; Slave select mode bit 0
  SPI0CN0_NSSMD1 = SPI0CN0.3       ; Slave select mode bit 1
  SPI0CN0_RXOVRN = SPI0CN0.4       ; Receive overrun flag
  SPI0CN0_MODF   = SPI0CN0.5       ; Mode fault flag
  SPI0CN0_WCOL   = SPI0CN0.6       ; Write collision flag
  SPI0CN0_SPIF   = SPI0CN0.7       ; SPI0 interrupt flag

;; TCON 0x88 (Timer 0/1 control)
  TCON_IT0 = TCON.0                ; Interrupt 0 type select
  TCON_IE0 = TCON.1                ; External interrupt 0
  TCON_IT1 = TCON.2                ; Interrupt 1 type select
  TCON_IE1 = TCON.3                ; External interrupt 1
  TCON_TR0 = TCON.4                ; Timer 0 run control
  TCON_TF0 = TCON.5                ; Timer 0 overflow flag
  TCON_TR1 = TCON.6                ; Timer 1 run control
  TCON_TF1 = TCON.7                ; Timer 1 overflow flag

;; TMR2CN0 0xC8 (Timer 2 control 0)
  TMR2CN0_T2XCLK0 = TMR2CN0.0      ; Timer 2 external clock select bit 0
  TMR2CN0_T2XCLK1 = TMR2CN0.1      ; Timer 2 external clock select bit 1
  TMR2CN0_TR2     = TMR2CN0.2      ; Timer 2 Run control
  TMR2CN0_T2SPLIT = TMR2CN0.3      ; Timer 2 Split mode enable
  TMR2CN0_TF2CEN  = TMR2CN0.4      ; Timer 2 capture enable
  TMR2CN0_TF2LEN  = TMR2CN0.5      ; Timer 2 low byte interrupt enable
  TMR2CN0_TF2L    = TMR2CN0.6      ; Timer 2 low byte overflow flag
  TMR2CN0_TF2     = TMR2CN0.7      ; Timer 2 high byte overflow flag

;; TMR4CN0 0x98 (Timer 4 control 0)
  TMR4CN0_T4XCLK0 = TMR4CN0.0      ; Timer 4 external clock select bit 0
  TMR4CN0_T4XCLK1 = TMR4CN0.1      ; Timer 4 external clock select bit 1
  TMR4CN0_TR4     = TMR4CN0.2      ; Timer 4 Run control
  TMR4CN0_T4SPLIT = TMR4CN0.3      ; Timer 4 Split mode enable
  TMR4CN0_TF4CEN  = TMR4CN0.4      ; Timer 4 capture enable
  TMR4CN0_TF4LEN  = TMR4CN0.5      ; Timer 4 low byte interrupt enable
  TMR4CN0_TF4L    = TMR4CN0.6      ; Timer 4 low byte overflow flag
  TMR4CN0_TF4     = TMR4CN0.7      ; Timer 4 high byte overflow flag

;; TMR5CN0 0xC0 (Timer 5 control 0)
  TMR5CN0_T5XCLK0 = TMR5CN0.0      ; Timer 5 external clock select bit 0
  TMR5CN0_T5XCLK1 = TMR5CN0.1      ; Timer 5 external clock select bit 1
  TMR5CN0_TR5     = TMR5CN0.2      ; Timer 5 Run control
  TMR5CN0_T5SPLIT = TMR5CN0.3      ; Timer 5 Split mode enable
  TMR5CN0_TF5CEN  = TMR5CN0.4      ; Timer 5 capture enable
  TMR5CN0_TF5LEN  = TMR5CN0.5      ; Timer 5 low byte interrupt enable
  TMR5CN0_TF5L    = TMR5CN0.6      ; Timer 5 low byte overflow flag
  TMR5CN0_TF5     = TMR5CN0.7      ; Timer 5 high byte overflow flag

;; UART1FCN1 0xD8 (UART1 FIFO control 1)
  UART1FCN1_RIE    = UART1FCN1.0   ; Receive interrupt enable
  UART1FCN1_RXTO0  = UART1FCN1.1   ; Receive timeout bit 0
  UART1FCN1_RXTO1  = UART1FCN1.2   ; Receive timeout bit 1
  UART1FCN1_RFRQ   = UART1FCN1.3   ; Receive FIFO request
  UART1FCN1_TIE    = UART1FCN1.4   ; Transmit interrupt enable
  UART1FCN1_TXHOLD = UART1FCN1.5   ; Transmit hold
  UART1FCN1_TXNF   = UART1FCN1.6   ; TX FIFO not full
  UART1FCN1_TFRQ   = UART1FCN1.7   ; Transmit FIFO request


;------------------------------------------------------------------------------
; Interrupt Definitions
;------------------------------------------------------------------------------

  INT0_IRQn    = 0      ; External interrupt 0
  TIMER0_IRQn  = 1      ; Timer 0 overflow
  INT1_IRQn    = 2      ; External interrupt 1
  TIMER1_IRQn  = 3      ; Timer 1 overflow
  UART1_IRQn   = 4      ; UART1
  TIMER2_IRQn  = 5      ; Timer 2 overflow / capture
  SPI0_IRQn    = 6      ; SPI0
  SMBUS0_IRQn  = 7      ; SMBus 0
  PMATCH_IRQn  = 8      ; Port match
  ADC0WC_IRQn  = 9      ; ADC0 window compare
  ADC0EOC_IRQn = 10     ; ADC0 end of conversion
  PCA0_IRQn    = 11     ; PCA0
  CMP0_IRQn    = 12     ; Comparator 0
  CMP1_IRQn    = 13     ; Comparator 1
  TIMER3_IRQn  = 14     ; Timer 3 overflow / capture
  USB0_IRQn    = 15     ; USB0 events
  VBUS_IRQn    = 16     ; VBUS / USB charge detect
  TIMER4_IRQn  = 17     ; Timer 4 overflow / capture
  TIMER5_IRQn  = 18     ; Timer 5 overflow / capture
  CL0_IRQn     = 21     ; Configurable logic


;------------------------------------------------------------------------------
; SFR page Definitions
;------------------------------------------------------------------------------

  CRC0_PAGE       = 0x00     ; CRC0 page
  LEGACY_PAGE     = 0x00     ; Legacy SFR page
  PCA0_PAGE       = 0x00     ; PCA0 page
  PG2_PAGE        = 0x10     ; Page2
  TIMER2_PAGE     = 0x10     ; Timer 2 page
  TIMER3_PAGE     = 0x10     ; Timer 3 page
  TIMER4_PAGE     = 0x10     ; Timer 4 page
  TIMER5_PAGE     = 0x10     ; Timer 5 page
  I2CSLAVE0_PAGE  = 0x20     ; I2C slave 0 page
  PG3_PAGE        = 0x20     ; Page3
  SMB0_PAGE       = 0x20     ; SMBus 0 page
  SPI0_PAGE       = 0x20     ; SPI0 page
  UART1_PAGE      = 0x20     ; UART1 page
  USB0_PAGE       = 0x20     ; USB0 page
