//=========================================================
// src/InitDevice.c: generated by Hardware Configurator
//
// This file will be regenerated when saving a document.
// leave the sections inside the "$[...]" comment tags alone
// or they will be overwritten!
//=========================================================

// USER INCLUDES
#include <SI_EFM8SB1_Register_Enums.h>
#include "InitDevice.h"

// USER PROTOTYPES
// USER FUNCTIONS

// $[Library Includes]
// [Library Includes]$

//==============================================================================
// enter_DefaultMode_from_RESET
//==============================================================================
extern void enter_DefaultMode_from_RESET(void) {
  // $[Config Calls]
  // Save the SFRPAGE
  uint8_t SFRPAGE_save = SFRPAGE;
  PCA_0_enter_DefaultMode_from_RESET();
  PCACH_2_enter_DefaultMode_from_RESET();
  PORTS_0_enter_DefaultMode_from_RESET();
  PORTS_1_enter_DefaultMode_from_RESET();
  PBCFG_0_enter_DefaultMode_from_RESET();
  VDDMON_0_enter_DefaultMode_from_RESET();
  RTC_0_enter_DefaultMode_from_RESET();
  CLOCK_0_enter_DefaultMode_from_RESET();
  TIMER01_0_enter_DefaultMode_from_RESET();
  TIMER16_2_enter_DefaultMode_from_RESET();
  TIMER16_3_enter_DefaultMode_from_RESET();
  TIMER_SETUP_0_enter_DefaultMode_from_RESET();
  ADC_0_enter_DefaultMode_from_RESET();
  VREF_0_enter_DefaultMode_from_RESET();
  UART_0_enter_DefaultMode_from_RESET();
  INTERRUPT_0_enter_DefaultMode_from_RESET();
  // Restore the SFRPAGE
  SFRPAGE = SFRPAGE_save;
  // [Config Calls]$

}

//================================================================================
// PCA_0_enter_DefaultMode_from_RESET
//================================================================================
extern void PCA_0_enter_DefaultMode_from_RESET(void) {
  // $[PCA0MD - PCA Mode]
  /***********************************************************************
   - Disable Watchdog Timer
   - System clock divided by 12
   - PCA continues to function normally while the system controller is in
   Idle Mode
   - Disable the CF interrupt
   - Disable Watchdog Timer
   - Watchdog Timer Enable unlocked
   ***********************************************************************/
  SFRPAGE = 0x00;
  PCA0MD &= ~PCA0MD_WDTE__BMASK;
  PCA0MD = PCA0MD_CPS__SYSCLK_DIV_12 | PCA0MD_CIDL__NORMAL
      | PCA0MD_ECF__OVF_INT_DISABLED | PCA0MD_WDTE__DISABLED
      | PCA0MD_WDLCK__UNLOCKED;
  // [PCA0MD - PCA Mode]$

  // $[PCA0H - PCA Counter/Timer High Byte]
  // [PCA0H - PCA Counter/Timer High Byte]$

  // $[PCA0L - PCA Counter/Timer Low Byte]
  // [PCA0L - PCA Counter/Timer Low Byte]$

  // $[PCA0PWM - PCA PWM Configuration]
  // [PCA0PWM - PCA PWM Configuration]$

  // $[PCA0CN0 - PCA Control 0]
  // [PCA0CN0 - PCA Control 0]$

}

//================================================================================
// PCACH_2_enter_DefaultMode_from_RESET
//================================================================================
extern void PCACH_2_enter_DefaultMode_from_RESET(void) {
  // $[PCA0 Settings Save]
  // Select Capture/Compare register)
  PCA0PWM &= ~PCA0PWM_ARSEL__BMASK;
  // [PCA0 Settings Save]$

  // $[PCA0CPM2 - PCA Channel 2 Capture/Compare Mode]
  /***********************************************************************
   - Disable negative edge capture
   - Disable CCF2 interrupts
   - Enable match function
   - 8 to 11-bit PWM selected
   - Disable positive edge capture
   - Disable comparator function
   - Disable PWM function
   - Disable toggle function
   ***********************************************************************/
  PCA0CPM2 = PCA0CPM2_CAPN__DISABLED | PCA0CPM2_ECCF__DISABLED
      | PCA0CPM2_MAT__ENABLED | PCA0CPM2_PWM16__8_BIT | PCA0CPM2_CAPP__DISABLED
      | PCA0CPM2_ECOM__DISABLED | PCA0CPM2_PWM__DISABLED
      | PCA0CPM2_TOG__DISABLED;
  // [PCA0CPM2 - PCA Channel 2 Capture/Compare Mode]$

  // $[PCA0CPL2 - PCA Channel 2 Capture Module Low Byte]
  // [PCA0CPL2 - PCA Channel 2 Capture Module Low Byte]$

  // $[PCA0CPH2 - PCA Channel 2 Capture Module High Byte]
  PCA0CPH2 = 0x00;
  // [PCA0CPH2 - PCA Channel 2 Capture Module High Byte]$

  // $[Auto-reload]
  // [Auto-reload]$

  // $[PCA0 Settings Restore]
  // [PCA0 Settings Restore]$

}

//================================================================================
// PORTS_0_enter_DefaultMode_from_RESET
//================================================================================
extern void PORTS_0_enter_DefaultMode_from_RESET(void) {
  // $[P0 - Port 0 Pin Latch]
  // [P0 - Port 0 Pin Latch]$

  // $[P0MDOUT - Port 0 Output Mode]
  /***********************************************************************
   - P0.0 output is open-drain
   - P0.1 output is open-drain
   - P0.2 output is open-drain
   - P0.3 output is open-drain
   - P0.4 output is push-pull
   - P0.5 output is open-drain
   - P0.6 output is open-drain
   - P0.7 output is open-drain
   ***********************************************************************/
  P0MDOUT = P0MDOUT_B0__OPEN_DRAIN | P0MDOUT_B1__OPEN_DRAIN
      | P0MDOUT_B2__OPEN_DRAIN | P0MDOUT_B3__OPEN_DRAIN | P0MDOUT_B4__PUSH_PULL
      | P0MDOUT_B5__OPEN_DRAIN | P0MDOUT_B6__OPEN_DRAIN
      | P0MDOUT_B7__OPEN_DRAIN;
  // [P0MDOUT - Port 0 Output Mode]$

  // $[P0MDIN - Port 0 Input Mode]
  // [P0MDIN - Port 0 Input Mode]$

  // $[P0SKIP - Port 0 Skip]
  // [P0SKIP - Port 0 Skip]$

  // $[P0MASK - Port 0 Mask]
  // [P0MASK - Port 0 Mask]$

  // $[P0MAT - Port 0 Match]
  // [P0MAT - Port 0 Match]$

  // $[P0DRV - Port 0 Drive Strength]
  // [P0DRV - Port 0 Drive Strength]$

}

//================================================================================
// PBCFG_0_enter_DefaultMode_from_RESET
//================================================================================
extern void PBCFG_0_enter_DefaultMode_from_RESET(void) {
  // $[XBR2 - Port I/O Crossbar 2]
  /***********************************************************************
   - Weak Pullups enabled 
   - Crossbar enabled
   ***********************************************************************/
  XBR2 = XBR2_WEAKPUD__PULL_UPS_ENABLED | XBR2_XBARE__ENABLED;
  // [XBR2 - Port I/O Crossbar 2]$

  // $[XBR0 - Port I/O Crossbar 0]
  /***********************************************************************
   - UART TX, RX routed to Port pins P0.4 and P0.5
   - SPI I/O unavailable at Port pins
   - SMBus 0 I/O unavailable at Port pins
   - CP0 unavailable at Port pin
   - Asynchronous CP0 unavailable at Port pin
   - SYSCLK unavailable at Port pin
   ***********************************************************************/
  XBR0 = XBR0_URT0E__ENABLED | XBR0_SPI0E__DISABLED | XBR0_SMB0E__DISABLED
      | XBR0_CP0E__DISABLED | XBR0_CP0AE__DISABLED | XBR0_SYSCKE__DISABLED;
  // [XBR0 - Port I/O Crossbar 0]$

  // $[XBR1 - Port I/O Crossbar 1]
  // [XBR1 - Port I/O Crossbar 1]$

}

//================================================================================
// VDDMON_0_enter_DefaultMode_from_RESET
//================================================================================
extern void VDDMON_0_enter_DefaultMode_from_RESET(void) {
  // $[VDM0CN - VDD Supply Monitor Control]
  /***********************************************************************
   - Disable the VDD Early Warning interrupt
   - Disable the VDD supply monitor
   ***********************************************************************/
  VDM0CN &= ~(VDM0CN_VDDOKIE__BMASK | VDM0CN_VDMEN__BMASK);
  // [VDM0CN - VDD Supply Monitor Control]$

}

//================================================================================
// TIMER01_0_enter_DefaultMode_from_RESET
//================================================================================
extern void TIMER01_0_enter_DefaultMode_from_RESET(void) {
  // $[Timer Initialization]
  //Save Timer Configuration
  uint8_t TCON_save;
  TCON_save = TCON;
  //Stop Timers
  TCON &= ~TCON_TR0__BMASK & ~TCON_TR1__BMASK;

  // [Timer Initialization]$

  // $[TH0 - Timer 0 High Byte]
  // [TH0 - Timer 0 High Byte]$

  // $[TL0 - Timer 0 Low Byte]
  // [TL0 - Timer 0 Low Byte]$

  // $[TH1 - Timer 1 High Byte]
  /***********************************************************************
   - Timer 1 High Byte = 0xF5
   ***********************************************************************/
  TH1 = (0xF5 << TH1_TH1__SHIFT);
  // [TH1 - Timer 1 High Byte]$

  // $[TL1 - Timer 1 Low Byte]
  /***********************************************************************
   - Timer 1 Low Byte = 0xCB
   ***********************************************************************/
  TL1 = (0xCB << TL1_TL1__SHIFT);
  // [TL1 - Timer 1 Low Byte]$

  // $[Timer Restoration]
  //Restore Timer Configuration
  TCON |= (TCON_save & TCON_TR0__BMASK) | (TCON_save & TCON_TR1__BMASK);

  // [Timer Restoration]$

}

//================================================================================
// TIMER16_2_enter_DefaultMode_from_RESET
//================================================================================
extern void TIMER16_2_enter_DefaultMode_from_RESET(void) {
  // $[Timer Initialization]
  // Save Timer Configuration
  uint8_t TMR2CN0_TR2_save;
  TMR2CN0_TR2_save = TMR2CN0 & TMR2CN0_TR2__BMASK;
  // Stop Timer
  TMR2CN0 &= ~(TMR2CN0_TR2__BMASK);
  // [Timer Initialization]$

  // $[TMR2CN0 - Timer 2 Control]
  // [TMR2CN0 - Timer 2 Control]$

  // $[TMR2H - Timer 2 High Byte]
  // [TMR2H - Timer 2 High Byte]$

  // $[TMR2L - Timer 2 Low Byte]
  // [TMR2L - Timer 2 Low Byte]$

  // $[TMR2RLH - Timer 2 Reload High Byte]
  // [TMR2RLH - Timer 2 Reload High Byte]$

  // $[TMR2RLL - Timer 2 Reload Low Byte]
  // [TMR2RLL - Timer 2 Reload Low Byte]$

  // $[TMR2CN0]
  // [TMR2CN0]$

  // $[Timer Restoration]
  // Restore Timer Configuration
  TMR2CN0 |= TMR2CN0_TR2_save;
  // [Timer Restoration]$

}

//================================================================================
// TIMER16_3_enter_DefaultMode_from_RESET
//================================================================================
extern void TIMER16_3_enter_DefaultMode_from_RESET(void) {
  // $[Timer Initialization]
  // Save Timer Configuration
  uint8_t TMR3CN0_TR3_save;
  TMR3CN0_TR3_save = TMR3CN0 & TMR3CN0_TR3__BMASK;
  // Stop Timer
  TMR3CN0 &= ~(TMR3CN0_TR3__BMASK);
  // [Timer Initialization]$

  // $[TMR3CN0 - Timer 3 Control]
  /***********************************************************************
   - External Clock is RTC. Capture trigger is External Oscillator/8
   ***********************************************************************/
  TMR3CN0 |= TMR3CN0_T3XCLK__RTC_CAP_EXTOSC;
  // [TMR3CN0 - Timer 3 Control]$

  // $[TMR3H - Timer 3 High Byte]
  /***********************************************************************
   - Timer 3 High Byte = 0xF8
   ***********************************************************************/
  TMR3H = (0xF8 << TMR3H_TMR3H__SHIFT);
  // [TMR3H - Timer 3 High Byte]$

  // $[TMR3L - Timer 3 Low Byte]
  /***********************************************************************
   - Timer 3 Low Byte = 0x06
   ***********************************************************************/
  TMR3L = (0x06 << TMR3L_TMR3L__SHIFT);
  // [TMR3L - Timer 3 Low Byte]$

  // $[TMR3RLH - Timer 3 Reload High Byte]
  /***********************************************************************
   - Timer 3 Reload High Byte = 0xFF
   ***********************************************************************/
  TMR3RLH = (0xFF << TMR3RLH_TMR3RLH__SHIFT);
  // [TMR3RLH - Timer 3 Reload High Byte]$

  // $[TMR3RLL - Timer 3 Reload Low Byte]
  /***********************************************************************
   - Timer 3 Reload Low Byte = 0xF0
   ***********************************************************************/
  TMR3RLL = (0xF0 << TMR3RLL_TMR3RLL__SHIFT);
  // [TMR3RLL - Timer 3 Reload Low Byte]$

  // $[TMR3CN0]
  /***********************************************************************
   - Start Timer 3 running
   ***********************************************************************/
  TMR3CN0 |= TMR3CN0_TR3__RUN;
  // [TMR3CN0]$

  // $[Timer Restoration]
  // Restore Timer Configuration
  TMR3CN0 |= TMR3CN0_TR3_save;
  // [Timer Restoration]$

}

//================================================================================
// TIMER_SETUP_0_enter_DefaultMode_from_RESET
//================================================================================
extern void TIMER_SETUP_0_enter_DefaultMode_from_RESET(void) {
  // $[CKCON0 - Clock Control 0]
  /***********************************************************************
   - System clock divided by 4
   - Counter/Timer 0 uses the clock defined by the prescale field, SCA
   - Timer 2 high byte uses the clock defined by T2XCLK in TMR2CN0
   - Timer 2 low byte uses the clock defined by T2XCLK in TMR2CN0
   - Timer 3 high byte uses the clock defined by T3XCLK in TMR3CN0
   - Timer 3 low byte uses the clock defined by T3XCLK in TMR3CN0
   - Timer 1 uses the clock defined by the prescale field, SCA
   ***********************************************************************/
  CKCON0 = CKCON0_SCA__SYSCLK_DIV_4 | CKCON0_T0M__PRESCALE
      | CKCON0_T2MH__EXTERNAL_CLOCK | CKCON0_T2ML__EXTERNAL_CLOCK
      | CKCON0_T3MH__EXTERNAL_CLOCK | CKCON0_T3ML__EXTERNAL_CLOCK
      | CKCON0_T1M__PRESCALE;
  // [CKCON0 - Clock Control 0]$

  // $[TMOD - Timer 0/1 Mode]
  /***********************************************************************
   - Mode 0, 13-bit Counter/Timer
   - Mode 2, 8-bit Counter/Timer with Auto-Reload
   - Timer Mode
   - Timer 0 enabled when TR0 = 1 irrespective of INT0 logic level
   - Timer Mode
   - Timer 1 enabled when TR1 = 1 irrespective of INT1 logic level
   ***********************************************************************/
  TMOD = TMOD_T0M__MODE0 | TMOD_T1M__MODE2 | TMOD_CT0__TIMER
      | TMOD_GATE0__DISABLED | TMOD_CT1__TIMER | TMOD_GATE1__DISABLED;
  // [TMOD - Timer 0/1 Mode]$

  // $[TCON - Timer 0/1 Control]
  /***********************************************************************
   - Start Timer 1 running
   ***********************************************************************/
  TCON |= TCON_TR1__RUN;
  // [TCON - Timer 0/1 Control]$

}

//================================================================================
// ADC_0_enter_DefaultMode_from_RESET
//================================================================================
extern void ADC_0_enter_DefaultMode_from_RESET(void) {
  // $[ADC0MX - ADC0 Multiplexer Selection]
  /***********************************************************************
   - Select channel ADC0.27
   ***********************************************************************/
  ADC0MX = ADC0MX_ADC0MX__TEMP;
  // [ADC0MX - ADC0 Multiplexer Selection]$

  // $[ADC0AC - ADC0 Accumulator Configuration]
  /***********************************************************************
   - Perform and Accumulate 1 conversion 
   - Disable 12-bit mode
   - ADC0H:ADC0L contain the result of the latest conversion when Burst
   Mode is disabled
   - Left justified. No shifting applied
   ***********************************************************************/
  ADC0AC = ADC0AC_ADRPT__ACC_1 | ADC0AC_AD12BE__12_BIT_DISABLED
      | ADC0AC_ADAE__ACC_DISABLED | ADC0AC_ADSJST__LEFT_NO_SHIFT;
  // [ADC0AC - ADC0 Accumulator Configuration]$

  // $[ADC0TK - ADC0 Burst Mode Track Time]
  // [ADC0TK - ADC0 Burst Mode Track Time]$

  // $[ADC0PWR - ADC0 Power Control]
  /***********************************************************************
   - Burst Mode Power Up Time = 0x0F
   - Enable low power mode 
   ***********************************************************************/
  ADC0PWR = (0x0F << ADC0PWR_ADPWR__SHIFT) | ADC0PWR_ADLPM__LOW_POWER_ENABLED;
  // [ADC0PWR - ADC0 Power Control]$

  // $[ADC0CF - ADC0 Configuration]
  /***********************************************************************
   - ADC0 operates in 10-bit or 12-bit mode 
   - The on-chip PGA gain is 0.5
   - SAR Clock Divider = 0x09
   - Normal Track Mode
   ***********************************************************************/
  ADC0CF = ADC0CF_AD8BE__NORMAL | ADC0CF_ADGN__GAIN_0P5
      | (0x09 << ADC0CF_ADSC__SHIFT) | ADC0CF_ADTM__TRACK_NORMAL;
  // [ADC0CF - ADC0 Configuration]$

  // $[ADC0GTH - ADC0 Greater-Than High Byte]
  /***********************************************************************
   - Greater-Than High Byte = 0x00
   ***********************************************************************/
  ADC0GTH = (0x00 << ADC0GTH_ADC0GTH__SHIFT);
  // [ADC0GTH - ADC0 Greater-Than High Byte]$

  // $[ADC0GTL - ADC0 Greater-Than Low Byte]
  /***********************************************************************
   - Greater-Than Low Byte = 0x00
   ***********************************************************************/
  ADC0GTL = (0x00 << ADC0GTL_ADC0GTL__SHIFT);
  // [ADC0GTL - ADC0 Greater-Than Low Byte]$

  // $[ADC0LTH - ADC0 Less-Than High Byte]
  // [ADC0LTH - ADC0 Less-Than High Byte]$

  // $[ADC0LTL - ADC0 Less-Than Low Byte]
  // [ADC0LTL - ADC0 Less-Than Low Byte]$

  // $[ADC0CN0 - ADC0 Control 0]
  // [ADC0CN0 - ADC0 Control 0]$

}

//================================================================================
// VREF_0_enter_DefaultMode_from_RESET
//================================================================================
extern void VREF_0_enter_DefaultMode_from_RESET(void) {
  // $[REF0CN - Voltage Reference Control]
  /***********************************************************************
   - Enable the Temperature Sensor
   - The ADC0 ground reference is the GND pin
   - The ADC0 voltage reference is the internal 1.65 V high speed voltage
   reference
   ***********************************************************************/
  REF0CN = REF0CN_TEMPE__TEMP_ENABLED | REF0CN_GNDSL__GND_PIN
      | REF0CN_REFSL__HIGH_SPEED_VREF;
  // [REF0CN - Voltage Reference Control]$

}

//================================================================================
// UART_0_enter_DefaultMode_from_RESET
//================================================================================
extern void UART_0_enter_DefaultMode_from_RESET(void) {
  // $[SCON0 - UART0 Serial Port Control]
  /***********************************************************************
   - UART0 reception enabled
   ***********************************************************************/
  SCON0 |= SCON0_REN__RECEIVE_ENABLED;
  // [SCON0 - UART0 Serial Port Control]$

}

//================================================================================
// INTERRUPT_0_enter_DefaultMode_from_RESET
//================================================================================
extern void INTERRUPT_0_enter_DefaultMode_from_RESET(void) {
  // $[EIE1 - Extended Interrupt Enable 1]
  /***********************************************************************
   - Disable ADC0 Conversion Complete interrupt
   - Disable ADC0 Window Comparison interrupt
   - Disable CP0 interrupts
   - Disable all PCA0 interrupts
   - Enable interrupt requests generated by a RTC Alarm
   - Disable all SMB0 interrupts
   - Enable interrupt requests generated by the TF3L or TF3H flags
   ***********************************************************************/
  EIE1 = EIE1_EADC0__DISABLED | EIE1_EWADC0__DISABLED | EIE1_ECP0__DISABLED
      | EIE1_EPCA0__DISABLED | EIE1_ERTC0A__ENABLED | EIE1_ESMB0__DISABLED
      | EIE1_ET3__ENABLED;
  // [EIE1 - Extended Interrupt Enable 1]$

  // $[EIP1 - Extended Interrupt Priority 1]
  // [EIP1 - Extended Interrupt Priority 1]$

  // $[IE - Interrupt Enable]
  /***********************************************************************
   - Enable each interrupt according to its individual mask setting
   - Disable external interrupt 0
   - Disable external interrupt 1
   - Disable all SPI0 interrupts
   - Disable all Timer 0 interrupt
   - Disable all Timer 1 interrupt
   - Disable Timer 2 interrupt
   - Enable UART0 interrupt
   ***********************************************************************/
  IE = IE_EA__ENABLED | IE_EX0__DISABLED | IE_EX1__DISABLED | IE_ESPI0__DISABLED
      | IE_ET0__DISABLED | IE_ET1__DISABLED | IE_ET2__DISABLED
      | IE_ES0__ENABLED;
  // [IE - Interrupt Enable]$

  // $[IP - Interrupt Priority]
  // [IP - Interrupt Priority]$

  // $[EIE2 - Extended Interrupt Enable 2]
  /***********************************************************************
   - Disable Capacitive Sense Conversion Complete interrupt
   - Disable Capacitive Sense Digital Comparator interrupt
   - Disable Capacitive Sense End of Scan interrupt
   - Enable interrupt requests generated by a Port Match
   - Disable RTC Oscillator Fail interrupts
   - Disable the Supply Monitor Early Warning interrupt
   ***********************************************************************/
  EIE2 = EIE2_ECSCPT__DISABLED | EIE2_ECSDC__DISABLED | EIE2_ECSEOS__DISABLED
      | EIE2_EMAT__ENABLED | EIE2_ERTC0F__DISABLED | EIE2_EWARN__DISABLED;
  // [EIE2 - Extended Interrupt Enable 2]$

  // $[EIP2 - Extended Interrupt Priority 2]
  // [EIP2 - Extended Interrupt Priority 2]$

}

extern void HFOSC_0_enter_DefaultMode_from_RESET(void) {

  // $[HFO#CAL - High Frequency Oscillator Calibration]
  // [HFO#CAL - High Frequency Oscillator Calibration]$

  // $[HFO#CN - High Frequency Oscillator Control]
  /***********************************************************************
   - High Frequency Oscillator enabled
   ***********************************************************************/
  HFO0CN |= HFO0CN_IOSCEN__ENABLED;
  // [HFO#CN - High Frequency Oscillator Control]$

  // $[Oscillator Ready]
  while ((HFO0CN & HFO0CN_IFRDY__BMASK) == HFO0CN_IFRDY__NOT_SET)
    ;
  // [Oscillator Ready]$

}

extern void CLOCK_0_enter_DefaultMode_from_RESET(void) {

  // $[CLKSEL - Clock Select]
  /***********************************************************************
   - SYSCLK is equal to selected clock source divided by 2
   - Clock derived from the Internal Low Power Oscillator
   ***********************************************************************/
  CLKSEL = CLKSEL_CLKDIV__SYSCLK_DIV_2 | CLKSEL_CLKSL__LPOSC;
  // Wait for the clock to be ready
  while ((CLKSEL & CLKSEL_CLKRDY__BMASK) != CLKSEL_CLKRDY__SET)
    ;
  // [CLKSEL - Clock Select]$

}

extern void PORTS_1_enter_DefaultMode_from_RESET(void) {
  // $[P1 - Port 1 Pin Latch]
  // [P1 - Port 1 Pin Latch]$

  // $[P1MDOUT - Port 1 Output Mode]
  // [P1MDOUT - Port 1 Output Mode]$

  // $[P1MDIN - Port 1 Input Mode]
  // [P1MDIN - Port 1 Input Mode]$

  // $[P1SKIP - Port 1 Skip]
  /***********************************************************************
   - P1.0 pin is not skipped by the crossbar
   - P1.1 pin is not skipped by the crossbar
   - P1.2 pin is not skipped by the crossbar
   - P1.3 pin is not skipped by the crossbar
   - P1.4 pin is not skipped by the crossbar
   - P1.5 pin is not skipped by the crossbar
   - P1.6 pin is skipped by the crossbar
   - P1.7 pin is skipped by the crossbar
   ***********************************************************************/
  P1SKIP = P1SKIP_B0__NOT_SKIPPED | P1SKIP_B1__NOT_SKIPPED
      | P1SKIP_B2__NOT_SKIPPED | P1SKIP_B3__NOT_SKIPPED | P1SKIP_B4__NOT_SKIPPED
      | P1SKIP_B5__NOT_SKIPPED | P1SKIP_B6__SKIPPED | P1SKIP_B7__SKIPPED;
  // [P1SKIP - Port 1 Skip]$

  // $[Missing Pin Skip]
  // [Missing Pin Skip]$

  // $[P1MASK - Port 1 Mask]
  // [P1MASK - Port 1 Mask]$

  // $[P1MAT - Port 1 Match]
  // [P1MAT - Port 1 Match]$

  // $[P1DRV - Port 1 Drive Strength]
  // [P1DRV - Port 1 Drive Strength]$

}

extern void VREG_0_enter_DefaultMode_from_RESET(void) {
  // $[REG0CN - Voltage Regulator Control]
  /***********************************************************************
   - Enable the precision High Frequency Oscillator bias
   ***********************************************************************/
  REG0CN = REG0CN_OSCBIAS__ENABLED;
  // [REG0CN - Voltage Regulator Control]$

}

extern void RTC_0_enter_DefaultMode_from_RESET(void) {
  // $[RTC Initialization]
  // [RTC Initialization]$

  // $[RTC0XCN0 - RTC Oscillator Control: Initial start-up setting]
  // [RTC0XCN0 - RTC Oscillator Control: Initial start-up setting]$

  // $[RTC0XCN - RTC Oscillator Control]
  /***********************************************************************
   - Self-Oscillate Mode selected
   - Enable AGC
   - Disable the Bias Double feature
   - LFOSC0 enabled and selected as RTC oscillator source
   ***********************************************************************/
  RTC0ADR = RTC0XCN0;
  RTC0DAT = RTC0XCN0_XMODE__SELF_OSCILLATE | RTC0XCN0_AGCEN__ENABLED
      | RTC0XCN0_BIASX2__DISABLED | RTC0XCN0_LFOEN__ENABLED;
  while ((RTC0ADR & RTC0ADR_BUSY__BMASK) == RTC0ADR_BUSY__SET)
    ;    //Poll Busy Bit
  // [RTC0XCN - RTC Oscillator Control]$

  // $[RTC0XCF - RTC Oscillator Configuration]
  // [RTC0XCF - RTC Oscillator Configuration]$

  // $[CAPTURE0 - RTC Timer Capture 0]
  // [CAPTURE0 - RTC Timer Capture 0]$

  // $[CAPTURE1 - RTC Timer Capture 1]
  // [CAPTURE1 - RTC Timer Capture 1]$

  // $[CAPTURE2 - RTC Timer Capture 2]
  // [CAPTURE2 - RTC Timer Capture 2]$

  // $[CAPTURE3 - RTC Timer Capture 3]
  // [CAPTURE3 - RTC Timer Capture 3]$

  // $[ALARM0 - RTC Alarm Programmed Value 0]
  // [ALARM0 - RTC Alarm Programmed Value 0]$

  // $[ALARM1 - RTC Alarm Programmed Value 1]
  /***********************************************************************
   - RTC Alarm Programmed Value 1 = 0x80
   ***********************************************************************/
  RTC0ADR = ALARM1;
  RTC0DAT = (0x80 << ALARM1_ALARM1__SHIFT);
  while ((RTC0ADR & RTC0ADR_BUSY__BMASK) == RTC0ADR_BUSY__SET)
    ;    //Poll Busy Bit
  // [ALARM1 - RTC Alarm Programmed Value 1]$

  // $[ALARM2 - RTC Alarm Programmed Value 2]
  // [ALARM2 - RTC Alarm Programmed Value 2]$

  // $[ALARM3 - RTC Alarm Programmed Value 3]
  // [ALARM3 - RTC Alarm Programmed Value 3]$

  // $[RTC0CN - RTC Control]
  /***********************************************************************
   - Enable RTC oscillator
   - RTC timer is running
   - Enable missing RTC detector
   - Enable RTC alarm
   - Alarm event flag is set or enable the auto reset function
   - Do not start a capture operation
   - Do not start a set operation
   ***********************************************************************/
  RTC0ADR = RTC0CN0;
  RTC0DAT = RTC0CN0_RTC0EN__ENABLED | RTC0CN0_RTC0TR__RUN
      | RTC0CN0_MCLKEN__ENABLED | RTC0CN0_RTC0AEN__ENABLED | RTC0CN0_ALRM__SET
      | RTC0CN0_RTC0CAP__NOT_SET | RTC0CN0_RTC0SET__NOT_SET;
  while ((RTC0ADR & RTC0ADR_BUSY__BMASK) == RTC0ADR_BUSY__SET)
    ;    //Poll Busy Bit

  // [RTC0CN - RTC Control]$

  // $[External Oscillator Setup]
  // [External Oscillator Setup]$

}

