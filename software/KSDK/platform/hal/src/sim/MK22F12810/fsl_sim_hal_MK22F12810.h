/*
 * Copyright (c) 2013 - 2014, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of Freescale Semiconductor, Inc. nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#if !defined(__FSL_SIM_HAL_K22F12810_H__)
#define __FSL_SIM_HAL_K22F12810_H__

/*!
 * @addtogroup sim_hal_k22f12810
 * @{
 */

/*! @file fsl_sim_hal_K22F12810.h */

/*******************************************************************************
 * Definitions
 ******************************************************************************/
/*! @brief WDOG clock source select */
typedef enum _clock_wdog_src_t
{
    kClockWdogSrcLpoClk,       /*!< LPO                                          */
    kClockWdogSrcAltClk,       /*!< Alternative clock, for this SOC it is Bus clock. */
#if (defined(DOXYGEN_OUTPUT) && (DOXYGEN_OUTPUT))
} clock_wdog_src_k22f12810_t;
#else
} clock_wdog_src_t;
#endif

/*! @brief Debug trace clock source select */
typedef enum _clock_trace_src_t
{
    kClockTraceSrcMcgoutClk,       /*!< MCG out clock  */
    kClockTraceSrcCoreClk,         /*!< core clock     */
#if (defined(DOXYGEN_OUTPUT) && (DOXYGEN_OUTPUT))
} clock_trace_src_k22f12810_t;
#else
} clock_trace_src_t;
#endif

/*! @brief PORTx digital input filter clock source select */
typedef enum _clock_port_filter_src_t
{
    kClockPortFilterSrcBusClk,       /*!< Bus clock */
    kClockPortFilterSrcLpoClk,       /*!< LPO       */
#if (defined(DOXYGEN_OUTPUT) && (DOXYGEN_OUTPUT))
} clock_port_filter_src_k22f12810_t;
#else
} clock_port_filter_src_t;
#endif

/*! @brief LPTMR clock source select */
typedef enum _clock_lptmr_src_t
{
    kClockLptmrSrcMcgIrClk,             /*!< MCGIRCLK */
    kClockLptmrSrcLpoClk,               /*!< LPO clock      */
    kClockLptmrSrcEr32kClk,             /*!< ERCLK32K clock */
    kClockLptmrSrcOsc0erClkUndiv,       /*!< OSCERCLK_UNDIV clock */
#if (defined(DOXYGEN_OUTPUT) && (DOXYGEN_OUTPUT))
} clock_lptmr_src_k22f12810_t;
#else
} clock_lptmr_src_t;
#endif

/*! @brief SIM USB FS clock source */
typedef enum _clock_usbfs_src
{
    kClockUsbfsSrcExt,       /*!< External bypass clock (USB_CLKIN) */
    kClockUsbfsSrcPllFllSel  /*!< Clock divider USB FS clock        */
#if (defined(DOXYGEN_OUTPUT) && (DOXYGEN_OUTPUT))
} clock_usbfs_src_k22f12810_t;
#else
} clock_usbfs_src_t;
#endif

/*! @brief SIM LPUART clock source */
typedef enum _clock_lpuart_src
{
    kClockLpuartSrcNone,        /*!< Clock disabled */
    kClockLpuartSrcPllFllSel,   /*!< Clock as selected by SOPT2[PLLFLLSEL] */
    kClockLpuartSrcOsc0erClk,   /*!< OSCERCLK */
    kClockLpuartSrcMcgIrClk     /*!< MCGIRCLK */
#if (defined(DOXYGEN_OUTPUT) && (DOXYGEN_OUTPUT))
} clock_lpuart_src_k22f12810_t;
#else
} clock_lpuart_src_t;
#endif

/*! @brief SAI clock source */
typedef enum _clock_sai_src
{
    kClockSaiSrcSysClk     = 0U,  /*!< SYSCLK     */
    kClockSaiSrcOsc0erClk  = 1U,  /*!< OSC0ERCLK  */
    kClockSaiSrcPllFllSel  = 3U   /*!< MCGPLLCLK  */
#if (defined(DOXYGEN_OUTPUT) && (DOXYGEN_OUTPUT))
} clock_sai_src_k22f12810_t;
#else
} clock_sai_src_t;
#endif

/*! @brief SIM PLLFLLSEL clock source select */
typedef enum _clock_pllfll_sel
{
    kClockPllFllSelFll    = 0U,    /*!< Fll clock  */
    kClockPllFllSelIrc48M = 3U     /*!< IRC48MCLK  */
#if (defined(DOXYGEN_OUTPUT) && (DOXYGEN_OUTPUT))
} clock_pllfll_sel_k22f12810_t;
#else
} clock_pllfll_sel_t;
#endif

/*! @brief SIM external reference clock source select (OSC32KSEL). */
typedef enum _clock_er32k_src
{
    kClockEr32kSrcOsc0 = 0U, /*!< OSC0 clock (OSC032KCLK).  */
    kClockEr32kSrcRtc  = 2U, /*!< RTC 32k clock .           */
    kClockEr32kSrcLpo  = 3U  /*!< LPO clock.                */
#if (defined(DOXYGEN_OUTPUT) && (DOXYGEN_OUTPUT))
} clock_er32k_src_k22f12810_t;
#else
} clock_er32k_src_t;
#endif

/*! @brief SIM CLKOUT_SEL clock source select */
typedef enum _clock_clkout_src
{
    kClockClkoutSelFlashClk    = 2U,  /*!< Flash clock    */
    kClockClkoutSelLpoClk      = 3U,  /*!< LPO clock      */
    kClockClkoutSelMcgIrClk    = 4U,  /*!< MCGIRCLK       */
    kClockClkoutSelRtc         = 5U,  /*!< RTC 32k clock  */
    kClockClkoutSelOsc0erClk   = 6U,  /*!< OSC0ERCLK      */
    kClockClkoutSelIrc48M      = 7U   /*!< IRC48MCLK      */
#if (defined(DOXYGEN_OUTPUT) && (DOXYGEN_OUTPUT))
} clock_clkout_src_k22f12810_t;
#else
} clock_clkout_src_t;
#endif

/*! @brief SIM RTCCLKOUTSEL clock source select */
typedef enum _clock_rtcout_src
{
    kClockRtcoutSrc1Hz,        /*!< 1Hz clock      */
    kClockRtcoutSrc32kHz       /*!< 32kHz clock    */
#if (defined(DOXYGEN_OUTPUT) && (DOXYGEN_OUTPUT))
} clock_rtcout_src_k22f12810_t;
#else
} clock_rtcout_src_t;
#endif

/*! @brief SIM OSC32KOUT selection */
typedef enum _clock_osc32kout_sel
{
    kClockOsc32koutNone  = 0U,    /*!< ERCLK32K is not output.      */
    kClockOsc32koutPte0  = 1U,    /*!< ERCLK32K is output on PTE0.  */
    kClockOsc32koutPte26 = 2U     /*!< ERCLK32K is output on PTE26. */
#if (defined(DOXYGEN_OUTPUT) && (DOXYGEN_OUTPUT))
} clock_osc32kout_sel_k22f12810_t;
#else
} clock_osc32kout_sel_t;
#endif

/*! @brief SIM USB voltage regulator in standby mode setting during stop modes */
typedef enum _sim_usbsstby_mode
{
    kSimUsbsstbyNoRegulator,     /*!< regulator not in standby during Stop modes */
    kSimUsbsstbyWithRegulator    /*!< regulator in standby during Stop modes */
#if (defined(DOXYGEN_OUTPUT) && (DOXYGEN_OUTPUT))
} sim_usbsstby_mode_k22f12810_t;
#else
} sim_usbsstby_mode_t;
#endif

/*! @brief SIM USB voltage regulator in standby mode setting during VLPR and VLPW modes */
typedef enum _sim_usbvstby_mode
{
    kSimUsbvstbyNoRegulator,     /*!< regulator not in standby during VLPR and VLPW modes */
    kSimUsbvstbyWithRegulator    /*!< regulator in standby during VLPR and VLPW modes */
#if (defined(DOXYGEN_OUTPUT) && (DOXYGEN_OUTPUT))
} sim_usbvstby_mode_k22f12810_t;
#else
} sim_usbvstby_mode_t;
#endif

/*! @brief SIM ADCx pre-trigger select */
typedef enum _sim_adc_pretrg_sel
{
    kSimAdcPretrgselA,        /*!< Pre-trigger A selected for ADCx */
    kSimAdcPretrgselB         /*!< Pre-trigger B selected for ADCx */
#if (defined(DOXYGEN_OUTPUT) && (DOXYGEN_OUTPUT))
} sim_adc_pretrg_sel_k22f12810_t;
#else
} sim_adc_pretrg_sel_t;
#endif

/*! @brief SIM ADCx trigger select */
typedef enum _sim_adc_trg_sel
{
    kSimAdcTrgselExt            = 0U,  /*!< External trigger                */
    kSimAdcTrgSelHighSpeedComp0 = 1U,  /*!< High speed comparator 0 output  */
    kSimAdcTrgSelHighSpeedComp1 = 2U,  /*!< High speed comparator 1 output  */
    kSimAdcTrgSelPit0           = 4U,  /*!< PIT trigger 0                   */
    kSimAdcTrgSelPit1           = 5U,  /*!< PIT trigger 1                   */
    kSimAdcTrgSelPit2           = 6U,  /*!< PIT trigger 2                   */
    kSimAdcTrgSelPit3           = 7U,  /*!< PIT trigger 3                   */
    kSimAdcTrgSelFtm0           = 8U,  /*!< FTM0 trigger                    */
    kSimAdcTrgSelFtm1           = 9U,  /*!< FTM1 trigger                    */
    kSimAdcTrgSelFtm2           = 10U, /*!< FTM2 trigger                    */
    kSimAdcTrgSelRtcAlarm       = 12U, /*!< RTC alarm                       */
    kSimAdcTrgSelRtcSec         = 13U, /*!< RTC seconds                     */
    kSimAdcTrgSelLptimer        = 14U, /*!< Low-power timer trigger         */
#if (defined(DOXYGEN_OUTPUT) && (DOXYGEN_OUTPUT))
} sim_adc_trg_sel_k22f12810_t;
#else
} sim_adc_trg_sel_t;
#endif

/*! @brief SIM LPUART RX source. */
typedef enum _sim_lpuart_rxsrc
{
    kSimLpuartRxsrcPin,               /*!< LPUARTx_RX Pin  */
    kSimLpuartRxsrcCmp0,              /*!< CMP0          */
    kSimLpuartRxsrcCmp1,              /*!< CMP1          */
#if (defined(DOXYGEN_OUTPUT) && (DOXYGEN_OUTPUT))
} sim_lpuart_rxsrc_k22f12810_t;
#else
} sim_lpuart_rxsrc_t;
#endif

/*! @brief SIM UART receive data source select */
typedef enum _sim_uart_rxsrc
{
    kSimUartRxsrcPin,               /*!< UARTx_RX Pin  */
    kSimUartRxsrcCmp0,              /*!< CMP0          */
    kSimUartRxsrcCmp1,              /*!< CMP1          */
#if (defined(DOXYGEN_OUTPUT) && (DOXYGEN_OUTPUT))
} sim_uart_rxsrc_k22f12810_t;
#else
} sim_uart_rxsrc_t;
#endif

/*! @brief SIM UART transmit data source select */
typedef enum _sim_uart_txsrc
{
    kSimUartTxsrcPin,   /*!< UARTx_TX Pin */
    kSimUartTxsrcFtm1,  /*!< UARTx_TX pin modulated with FTM1 channel 0 output */
    kSimUartTxsrcFtm2   /*!< UARTx_TX pin modulated with FTM2 channel 0 output */
#if (defined(DOXYGEN_OUTPUT) && (DOXYGEN_OUTPUT))
} sim_uart_txsrc_k22f12810_t;
#else
} sim_uart_txsrc_t;
#endif

/*! @brief SIM FlexTimer x trigger y select */
typedef enum _sim_ftm_trg_src
{
    kSimFtmTrgSrc0,            /*!< FlexTimer x trigger y select 0 */
    kSimFtmTrgSrc1             /*!< FlexTimer x trigger y select 1 */
#if (defined(DOXYGEN_OUTPUT) && (DOXYGEN_OUTPUT))
} sim_ftm_trg_src_k22f12810_t;
#else
} sim_ftm_trg_src_t;
#endif

/*! @brief SIM FlexTimer external clock select */
typedef enum _sim_ftm_clk_sel
{
    kSimFtmClkSel0,            /*!< FTM CLKIN0 pin. */
    kSimFtmClkSel1             /*!< FTM CLKIN1 pin. */
#if (defined(DOXYGEN_OUTPUT) && (DOXYGEN_OUTPUT))
} sim_ftm_clk_sel_k22f12810_t;
#else
} sim_ftm_clk_sel_t;
#endif

/*! @brief SIM FlexTimer x channel y input capture source select */
typedef enum _sim_ftm_ch_src
{
    kSimFtmChSrc0,  /*!< FlexTimer x channel y input capture source 0. */
    kSimFtmChSrc1,  /*!< FlexTimer x channel y input capture source 1. */
    kSimFtmChSrc2,  /*!< FlexTimer x channel y input capture source 2. */
    kSimFtmChSrc3   /*!< FlexTimer x channel y input capture source 3. */
#if (defined(DOXYGEN_OUTPUT) && (DOXYGEN_OUTPUT))
} sim_ftm_ch_src_k22f12810_t;
#else
} sim_ftm_ch_src_t;
#endif

/*! @brief SIM FlexTimer x channel y output source select */
typedef enum _sim_ftm_ch_out_src
{
    kSimFtmChOutSrc0, /*!< FlexTimer x channel y output source selection 0. */
    kSimFtmChOutSrc1  /*!< FlexTimer x channel y output source selection 1. */
#if (defined(DOXYGEN_OUTPUT) && (DOXYGEN_OUTPUT))
} sim_ftm_ch_out_src_k22f12810_t;
#else
} sim_ftm_ch_out_src_t;
#endif

/*! @brief SIM FlexTimer x Fault y select */
typedef enum _sim_ftm_flt_sel
{
    kSimFtmFltSel0,                 /*!< FlexTimer x fault y select 0 */
    kSimFtmFltSel1                  /*!< FlexTimer x fault y select 1 */
#if (defined(DOXYGEN_OUTPUT) && (DOXYGEN_OUTPUT))
} sim_ftm_flt_sel_k22f12810_t;
#else
} sim_ftm_flt_sel_t;
#endif

/*! @brief SIM Timer/PWM external clock select */
typedef enum _sim_tpm_clk_sel
{
    kSimTpmClkSel0,                 /*!< Timer/PWM TPM_CLKIN0 pin. */
    kSimTpmClkSel1                  /*!< Timer/PWM TPM_CLKIN1 pin. */
#if (defined(DOXYGEN_OUTPUT) && (DOXYGEN_OUTPUT))
} sim_tpm_clk_sel_k22f12810_t;
#else
} sim_tpm_clk_sel_t;
#endif

/*! @brief SIM Timer/PWM x channel y input capture source select */
typedef enum _sim_tpm_ch_src
{
    kSimTpmChSrc0,                 /*!< TPMx_CH0 signal */
    kSimTpmChSrc1                  /*!< CMP0 output */
#if (defined(DOXYGEN_OUTPUT) && (DOXYGEN_OUTPUT))
} sim_tpm_ch_src_k22f12810_t;
#else
} sim_tpm_ch_src_t;
#endif

/*! @brief SIM CMT/UART pad drive strength */
typedef enum _sim_cmtuartpad_strengh
{
    kSimCmtuartSinglePad,           /*!< Single-pad drive strength for CMT IRO or UART0_TXD */
    kSimCmtuartDualPad              /*!< Dual-pad drive strength for CMT IRO or UART0_TXD */
#if (defined(DOXYGEN_OUTPUT) && (DOXYGEN_OUTPUT))
} sim_cmtuartpad_strengh_k22f12810_t;
#else
} sim_cmtuartpad_strengh_t;
#endif

/*! @brief SIM PTD7 pad drive strength */
typedef enum _sim_ptd7pad_strengh
{
    kSimPtd7padSinglePad,           /*!< Single-pad drive strength for PTD7 */
    kSimPtd7padDualPad              /*!< Dual-pad drive strength for PTD7 */
#if (defined(DOXYGEN_OUTPUT) && (DOXYGEN_OUTPUT))
} sim_ptd7pad_strengh_k22f12810_t;
#else
} sim_ptd7pad_strengh_t;
#endif

/*! @brief SIM FlexBus security level */
typedef enum _sim_flexbus_security_level
{
    kSimFbslLevel0, /*!< FlexBus security level 0. */
    kSimFbslLevel1, /*!< FlexBus security level 1. */
    kSimFbslLevel2, /*!< FlexBus security level 2. */
    kSimFbslLevel3, /*!< FlexBus security level 3. */
#if (defined(DOXYGEN_OUTPUT) && (DOXYGEN_OUTPUT))
} sim_flexbus_security_level_k22f12810_t;
#else
} sim_flexbus_security_level_t;
#endif

/*! @brief SIM SCGC bit index. */
#define FSL_SIM_SCGC_BIT(SCGCx, n) (((SCGCx-1U)<<5U) + n)

/*! @brief Clock gate name used for SIM_HAL_EnableClock/SIM_HAL_DisableClock. */
typedef enum _sim_clock_gate_name
{
    kSimClockGateEwm0      = FSL_SIM_SCGC_BIT(4U, 1U),
    kSimClockGateI2c0      = FSL_SIM_SCGC_BIT(4U, 6U),
    kSimClockGateI2c1      = FSL_SIM_SCGC_BIT(4U, 7U),
    kSimClockGateUart0     = FSL_SIM_SCGC_BIT(4U, 10U),
    kSimClockGateUart1     = FSL_SIM_SCGC_BIT(4U, 11U),
    kSimClockGateUart2     = FSL_SIM_SCGC_BIT(4U, 12U),
    kSimClockGateUsbfs0    = FSL_SIM_SCGC_BIT(4U, 18U),
    kSimClockGateCmp       = FSL_SIM_SCGC_BIT(4U, 19U),
    kSimClockGateVref0     = FSL_SIM_SCGC_BIT(4U, 20U),
    kSimClockGateLptmr0    = FSL_SIM_SCGC_BIT(5U, 0U),
    kSimClockGatePortA     = FSL_SIM_SCGC_BIT(5U, 9U),
    kSimClockGatePortB     = FSL_SIM_SCGC_BIT(5U, 10U),
    kSimClockGatePortC     = FSL_SIM_SCGC_BIT(5U, 11U),
    kSimClockGatePortD     = FSL_SIM_SCGC_BIT(5U, 12U),
    kSimClockGatePortE     = FSL_SIM_SCGC_BIT(5U, 13U),
    kSimClockGateFtf0      = FSL_SIM_SCGC_BIT(6U, 0U),
    kSimClockGateDmamux0   = FSL_SIM_SCGC_BIT(6U, 1U),
    kSimClockGateAdc1      = FSL_SIM_SCGC_BIT(6U, 7U),
    kSimClockGateLpuart0   = FSL_SIM_SCGC_BIT(6U, 10U),
    kSimClockGateSpi0      = FSL_SIM_SCGC_BIT(6U, 12U),
    kSimClockGateSpi1      = FSL_SIM_SCGC_BIT(6U, 13U),
    kSimClockGateSai0      = FSL_SIM_SCGC_BIT(6U, 15U),
    kSimClockGateCrc0      = FSL_SIM_SCGC_BIT(6U, 18U),
    kSimClockGatePdb0      = FSL_SIM_SCGC_BIT(6U, 22U),
    kSimClockGatePit0      = FSL_SIM_SCGC_BIT(6U, 23U),
    kSimClockGateFtm0      = FSL_SIM_SCGC_BIT(6U, 24U),
    kSimClockGateFtm1      = FSL_SIM_SCGC_BIT(6U, 25U),
    kSimClockGateFtm2      = FSL_SIM_SCGC_BIT(6U, 26U),
    kSimClockGateAdc0      = FSL_SIM_SCGC_BIT(6U, 27U),
    kSimClockGateRtc0      = FSL_SIM_SCGC_BIT(6U, 29U),
    kSimClockGateDac0      = FSL_SIM_SCGC_BIT(6U, 31U),
    kSimClockGateDma0      = FSL_SIM_SCGC_BIT(7U, 1U),
#if (defined(DOXYGEN_OUTPUT) && (DOXYGEN_OUTPUT))
} sim_clock_gate_name_k22f12810_t;
#else
} sim_clock_gate_name_t;
#endif
/*! @} */

/*******************************************************************************
 * API
 ******************************************************************************/

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus*/

/*! 
 * @addtogroup sim_hal
 * @{
 */


/*!
 * @brief Enable the clock for specific module.
 *
 * This function enables the clock for specific module.
 *
 * @param base Base address for current SIM instance.
 * @param name Name of the module to enable.
 */
static inline void SIM_HAL_EnableClock(SIM_Type * base, sim_clock_gate_name_t name)
{
    SIM_BWR_SCGC_BIT(base, name, 1U);
}

/*!
 * @brief Disable the clock for specific module.
 *
 * This function disables the clock for specific module.
 *
 * @param base Base address for current SIM instance.
 * @param name Name of the module to disable.
 */
static inline void SIM_HAL_DisableClock(SIM_Type * base, sim_clock_gate_name_t name)
{
    SIM_BWR_SCGC_BIT(base, name, 0U);
}

/*!
 * @brief Get the the clock gate state for specific module.
 *
 * This function will get the clock gate state for specific module.
 *
 * @param base Base address for current SIM instance.
 * @param name Name of the module to get.
 * @return state true - ungated(Enabled), false - gated (Disabled)
 */
static inline bool SIM_HAL_GetGateCmd(SIM_Type * base, sim_clock_gate_name_t name)
{
    return (bool)SIM_BRD_SCGC_BIT(base, name);
}

/*!
 * @brief Set the selection of the clock source for the USB FS 48 MHz clock.
 *
 * This function sets the selection of the clock source for the USB FS 48 MHz clock.
 *
 * @param base Base address for current SIM instance.
 * @param instance IP instance.
 * @param setting  The value to set.
 */
static inline void CLOCK_HAL_SetUsbfsSrc(SIM_Type * base,
                                         uint32_t  instance,
                                         clock_usbfs_src_t setting)
{
    SIM_BWR_SOPT2_USBSRC(base, setting);
}

/*!
 * @brief Get the selection of the clock source for the USB FS 48 MHz clock.
 *
 * This function gets the selection of the clock source for the USB FS 48 MHz clock.
 *
 * @param base Base address for current SIM instance.
 * @param instance IP instance.
 * @return Current selection.
 */
static inline clock_usbfs_src_t CLOCK_HAL_GetUsbfsSrc(SIM_Type * base,
                                                      uint32_t  instance)
{
    return (clock_usbfs_src_t)SIM_BRD_SOPT2_USBSRC(base);
}

/*!
 * @brief Set USB FS divider setting.
 *
 * This function sets USB FS divider setting.
 * Divider output clock = Divider input clock * [ (USBFSFRAC+1) / (USBFSDIV+1) ]
 *
 * @param base Base address for current SIM instance.
 * @param usbdiv   Value of USBFSDIV.
 * @param usbfrac  Value of USBFSFRAC.
 */
void CLOCK_HAL_SetUsbfsDiv(SIM_Type * base,
                           uint8_t usbdiv,
                           uint8_t usbfrac);

/*!
 * @brief Get USB FS divider setting.
 *
 * This function gets USB FS divider setting.
 * Divider output clock = Divider input clock * [ (USBFSFRAC+1) / (USBFSDIV+1) ]
 *
 * @param base Base address for current SIM instance.
 * @param usbdiv   Value of USBFSDIV.
 * @param usbfrac  Value of USBFSFRAC.
 */
void CLOCK_HAL_GetUsbfsDiv(SIM_Type * base,
                           uint8_t *usbdiv,
                           uint8_t *usbfrac);

/*!
 * @brief Set LPUART clock source.
 *
 * This function sets lpuart clock source selection.
 *
 * @param base Base address for current SIM instance.
 * @param instance LPUART instance.
 * @param setting  The value to set.
 */
static inline void CLOCK_HAL_SetLpuartSrc(SIM_Type * base,
                                          uint32_t instance,
                                          clock_lpuart_src_t setting)
{
    SIM_BWR_SOPT2_LPUARTSRC(base, setting);
}

/*!
 * @brief Get LPUART clock source.
 *
 * This function gets lpuart clock source selection.
 *
 * @param base Base address for current SIM instance.
 * @param instance LPUART instance.
 * @return Current selection.
 */
static inline clock_lpuart_src_t CLOCK_HAL_GetLpuartSrc(SIM_Type * base,
                                                        uint32_t instance)
{
    return (clock_lpuart_src_t)SIM_BRD_SOPT2_LPUARTSRC(base);
}

/*!
 * @brief Set debug trace clock selection.
 *
 * This function sets debug trace clock selection.
 *
 * @param base Base address for current SIM instance.
 * @param setting  The value to set.
 */
static inline void CLOCK_HAL_SetTraceClkSrc(SIM_Type * base, clock_trace_src_t setting)
{
    SIM_BWR_SOPT2_TRACECLKSEL(base, setting);
}

/*!
 * @brief Get debug trace clock selection.
 *
 * This function gets debug trace clock selection.
 *
 * @param base Base address for current SIM instance.
 * @return Current selection.
 */
static inline clock_trace_src_t CLOCK_HAL_GetTraceClkSrc(SIM_Type * base)
{
    return (clock_trace_src_t)SIM_BRD_SOPT2_TRACECLKSEL(base);
}

/*!
 * @brief Set the clock selection of ERCLK32K.
 *
 * This function sets the clock selection of ERCLK32K.
 *
 * @param base Base address for current SIM instance.
 * @param setting  The value to set.
 */
static inline void CLOCK_HAL_SetExternalRefClock32kSrc(SIM_Type * base,
                                          clock_er32k_src_t setting)
{
    SIM_BWR_SOPT1_OSC32KSEL(base, setting);
}

/*!
 * @brief Get the clock selection of ERCLK32K.
 *
 * This function gets the clock selection of ERCLK32K.
 *
 * @param base Base address for current SIM instance.
 * @return Current selection.
 */
static inline clock_er32k_src_t CLOCK_HAL_GetExternalRefClock32kSrc(SIM_Type * base)
{
    return (clock_er32k_src_t)SIM_BRD_SOPT1_OSC32KSEL(base);
}

/*!
 * @brief Set PLL/FLL clock selection.
 *
 * This function sets the selection of the high frequency clock for
 * various peripheral clocking options
 *
 * @param base Base address for current SIM instance.
 * @param setting  The value to set.
 */
static inline void CLOCK_HAL_SetPllfllSel(SIM_Type * base,
                                        clock_pllfll_sel_t setting)
{
    SIM_BWR_SOPT2_PLLFLLSEL(base, setting);
}

/*!
 * @brief Get PLL/FLL clock selection.
 *
 * This function gets the selection of the high frequency clock for
 * various peripheral clocking options
 *
 * @param base Base address for current SIM instance.
 * @return Current selection.
 */
static inline clock_pllfll_sel_t CLOCK_HAL_GetPllfllSel(SIM_Type * base)
{
    return (clock_pllfll_sel_t)SIM_BRD_SOPT2_PLLFLLSEL(base);
}

/*!
 * @brief Set CLKOUTSEL selection.
 *
 * This function sets the selection of the clock to output on the CLKOUT pin.
 *
 * @param base Base address for current SIM instance.
 * @param setting  The value to set.
 */
static inline void CLOCK_HAL_SetClkOutSel(SIM_Type * base, clock_clkout_src_t setting)
{
    SIM_BWR_SOPT2_CLKOUTSEL(base, setting);
}

/*!
 * @brief Get CLKOUTSEL selection.
 *
 * This function gets the selection of the clock to output on the CLKOUT pin.
 *
 * @param base Base address for current SIM instance.
 * @return Current selection.
 */
static inline clock_clkout_src_t CLOCK_HAL_GetClkOutSel(SIM_Type * base)
{
    return (clock_clkout_src_t)SIM_BRD_SOPT2_CLKOUTSEL(base);
}

/*!
 * @brief Set RTCCLKOUTSEL selection.
 *
 * This function sets the selection of the clock to output on the RTC_CLKOUT pin.
 *
 * @param base Base address for current SIM instance.
 * @param setting  The value to set.
 */
static inline void CLOCK_HAL_SetRtcClkOutSel(SIM_Type * base,
                                           clock_rtcout_src_t setting)
{
    SIM_BWR_SOPT2_RTCCLKOUTSEL(base, setting);
}

/*!
 * @brief Get RTCCLKOUTSEL selection.
 *
 * This function gets the selection of the clock to output on the RTC_CLKOUT pin.
 *
 * @param base Base address for current SIM instance.
 * @return Current selection.
 */
static inline clock_rtcout_src_t CLOCK_HAL_GetRtcClkOutSel(SIM_Type * base)
{
    return (clock_rtcout_src_t)SIM_BRD_SOPT2_RTCCLKOUTSEL(base);
}

/*!
 * @brief Set OSC32KOUT selection.
 *
 * This function sets ERCLK32K output pin.
 *
 * @param base Base address for current SIM instance.
 * @param setting  The value to set.
 */
static inline void CLOCK_HAL_SetOsc32kOutSel(SIM_Type * base,
                                             clock_osc32kout_sel_t setting)
{
    SIM_BWR_SOPT1_OSC32KOUT(base, setting);
}

/*!
 * @brief Get OSC32KOUT selection.
 *
 * This function gets ERCLK32K output pin setting.
 *
 * @param base Base address for current SIM instance.
 * @return Current selection.
 */
static inline clock_osc32kout_sel_t CLOCK_HAL_GetOsc32kOutSel(SIM_Type * base)
{
    return (clock_osc32kout_sel_t)SIM_BRD_SOPT1_OSC32KOUT(base);
}

/*!
 * @brief Set OUTDIV1.
 *
 * This function sets divide value OUTDIV1.
 *
 * @param base Base address for current SIM instance.
 * @param setting  The value to set.
 */
static inline void CLOCK_HAL_SetOutDiv1(SIM_Type * base, uint8_t setting)
{
    SIM_BWR_CLKDIV1_OUTDIV1(base, setting);
}

/*!
 * @brief Get OUTDIV1.
 *
 * This function gets divide value OUTDIV1.
 *
 * @param base Base address for current SIM instance.
 * @return Current divider value.
 */
static inline uint8_t CLOCK_HAL_GetOutDiv1(SIM_Type * base)
{
    return SIM_BRD_CLKDIV1_OUTDIV1(base);
}

/*!
 * @brief Set OUTDIV2.
 *
 * This function sets divide value OUTDIV2.
 *
 * @param base Base address for current SIM instance.
 * @param setting  The value to set.
 */
static inline void CLOCK_HAL_SetOutDiv2(SIM_Type * base, uint8_t setting)
{
    SIM_BWR_CLKDIV1_OUTDIV2(base, setting);
}

/*!
 * @brief Get OUTDIV2.
 *
 * This function gets divide value OUTDIV2.
 *
 * @param base Base address for current SIM instance.
 * @return Current divider value.
 */
static inline uint8_t CLOCK_HAL_GetOutDiv2(SIM_Type * base)
{
    return SIM_BRD_CLKDIV1_OUTDIV2(base);
}

/*!
 * @brief Set OUTDIV4.
 *
 * This function sets divide value OUTDIV4.
 *
 * @param base Base address for current SIM instance.
 * @param setting  The value to set.
 */
static inline void CLOCK_HAL_SetOutDiv4(SIM_Type * base, uint8_t setting)
{
    SIM_BWR_CLKDIV1_OUTDIV4(base, setting);
}

/*!
 * @brief Get OUTDIV4.
 *
 * This function gets divide value OUTDIV4.
 *
 * @param base Base address for current SIM instance.
 * @return Current divider value.
 */
static inline uint8_t CLOCK_HAL_GetOutDiv4(SIM_Type * base)
{
    return SIM_BRD_CLKDIV1_OUTDIV4(base);
}

/*!
 * @brief Sets the clock out dividers setting.
 *
 * This function sets the setting for all clock out dividers at the same time.
 *
 * @param base     Base address for current SIM instance.
 * @param outdiv1      Outdivider1 setting
 * @param outdiv2      Outdivider2 setting
 * @param outdiv3      Outdivider3 setting
 * @param outdiv4      Outdivider4 setting
 */
void CLOCK_HAL_SetOutDiv(SIM_Type * base,
                         uint8_t outdiv1,
                         uint8_t outdiv2,
                         uint8_t outdiv3,
                         uint8_t outdiv4);
/*!
 * @brief Gets the clock out dividers setting.
 *
 * This function gets the setting for all clock out dividers at the same time.
 *
 * @param base     Base address for current SIM instance.
 * @param outdiv1      Outdivider1 setting
 * @param outdiv2      Outdivider2 setting
 * @param outdiv3      Outdivider3 setting
 * @param outdiv4      Outdivider4 setting
 */
void CLOCK_HAL_GetOutDiv(SIM_Type * base,
                         uint8_t *outdiv1,
                         uint8_t *outdiv2,
                         uint8_t *outdiv3,
                         uint8_t *outdiv4);

/*!
 * @brief Gets RAM size.
 *
 * This function gets the RAM size. The field specifies the amount of system RAM
 * available on the device.
 *
 * @param base Base address for current SIM instance.
 * @return size  RAM size on the device
 */
static inline uint32_t SIM_HAL_GetRamSize(SIM_Type * base)
{
    return SIM_BRD_SOPT1_RAMSIZE(base);
}

/*!
 * @brief Sets the ADCx alternate trigger enable setting.
 *
 * This function enables/disables the alternative conversion triggers for ADCx.
 *
 * @param base     Base address for current SIM instance.
 * @param instance     device instance.
 * @param enable Enable alternative conversion triggers for ADCx
 *               - true:  Select alternative conversion trigger.
 *               - false: Select PDB trigger.
 */
void SIM_HAL_SetAdcAlternativeTriggerCmd(SIM_Type * base,
                                         uint32_t instance,
                                         bool enable);

/*!
 * @brief Gets the ADCx alternate trigger enable setting.
 *
 * This function gets the ADCx alternate trigger enable setting.
 *
 * @param base     Base address for current SIM instance.
 * @param instance     device instance.
 * @return enabled True if  ADCx alternate trigger is enabled
 */
bool SIM_HAL_GetAdcAlternativeTriggerCmd(SIM_Type * base, uint32_t instance);

/*!
 * @brief Sets the ADCx pre-trigger select setting.
 *
 * This function selects the ADCx pre-trigger source when the alternative
 * triggers are enabled through ADCxALTTRGEN.
 *
 * @param base     Base address for current SIM instance.
 * @param instance     device instance.
 * @param select pre-trigger select setting for ADCx
 */
void SIM_HAL_SetAdcPreTriggerMode(SIM_Type * base,
                                  uint32_t instance,
                                  sim_adc_pretrg_sel_t select);

/*!
 * @brief Gets the ADCx pre-trigger select setting.
 *
 * This function  gets the ADCx pre-trigger select setting.
 *
 * @param base     Base address for current SIM instance.
 * @param instance     device instance.
 * @return select ADCx pre-trigger select setting
 */
sim_adc_pretrg_sel_t SIM_HAL_GetAdcPreTriggerMode(SIM_Type * base,
                                                  uint32_t instance);

/*!
 * @brief Sets the ADCx trigger select setting.
 *
 * This function  selects the ADCx trigger source when alternative triggers
 * are enabled through ADCxALTTRGEN.
 *
 * @param base     Base address for current SIM instance.
 * @param instance     device instance.
 * @param select       trigger select setting for ADCx
*/
void SIM_HAL_SetAdcTriggerMode(SIM_Type * base,
                               uint32_t instance,
                               sim_adc_trg_sel_t select);

/*!
 * @brief Gets the ADCx trigger select setting.
 *
 * This function  gets the ADCx trigger select setting.
 *
 * @param base     Base address for current SIM instance.
 * @param instance     device instance.
 * @return ADCx trigger select setting
 */
sim_adc_trg_sel_t SIM_HAL_GetAdcTriggerMode(SIM_Type * base,
                                            uint32_t instance);

/*!
 * @brief Sets the ADCx trigger select setting in one function.
 *
 * This function sets ADC alternate trigger, pre-trigger mode and trigger mode.
 *
 * @param base     Base address for current SIM instance.
 * @param instance     device instance.
 * @param altTrigEn    Alternative trigger enable or not.
 * @param preTrigSel   Pre-trigger mode.
 * @param trigSel      Trigger mode.
*/
void SIM_HAL_SetAdcTriggerModeOneStep(SIM_Type * base,
                                      uint32_t instance,
                                      bool    altTrigEn,
                                      sim_adc_pretrg_sel_t preTrigSel,
                                      sim_adc_trg_sel_t trigSel);

/*!
 * @brief Sets the UARTx receive data source select setting.
 *
 * This function  selects the source for the UARTx receive data.
 *
 * @param base     Base address for current SIM instance.
 * @param instance     device instance.
 * @param select the source for the UARTx receive data
 */
void SIM_HAL_SetUartRxSrcMode(SIM_Type * base,
                              uint32_t instance,
                              sim_uart_rxsrc_t select);

/*!
 * @brief Gets the UARTx receive data source select setting.
 *
 * This function  gets the UARTx receive data source select setting.
 *
 * @param base     Base address for current SIM instance.
 * @param instance     device instance.
 * @return select UARTx receive data source select setting
 */
sim_uart_rxsrc_t SIM_HAL_GetUartRxSrcMode(SIM_Type * base, uint32_t instance);

/*!
 * @brief Sets the UARTx transmit data source select setting.
 *
 * This function  selects the source for the UARTx transmit data.
 *
 * @param base     Base address for current SIM instance.
 * @param instance     device instance.
 * @param select the source for the UARTx transmit data
 */
void SIM_HAL_SetUartTxSrcMode(SIM_Type * base,
                              uint32_t instance,
                              sim_uart_txsrc_t select);

/*!
 * @brief Gets the UARTx transmit data source select setting.
 *
 * This function  gets the UARTx transmit data source select setting.
 *
 * @param base     Base address for current SIM instance.
 * @param instance     device instance.
 * @return select UARTx transmit data source select setting
 */
sim_uart_txsrc_t SIM_HAL_GetUartTxSrcMode(SIM_Type * base, uint32_t instance);

/*!
 * @brief Sets the LPUARTx receive data source select setting.
 *
 * This function  selects the source for the LPUARTx receive data.
 *
 * @param base     Base address for current SIM instance.
 * @param instance     device instance.
 * @param select the source for the LPUARTx receive data
 */
static inline void SIM_HAL_SetLpuartRxSrcMode(SIM_Type * base,
                                              uint32_t instance,
                                              sim_lpuart_rxsrc_t select)
{
    SIM_BWR_SOPT5_LPUART0RXSRC(base, select);
}

/*!
 * @brief Gets the LPUARTx receive data source select setting.
 *
 * This function  gets the LPUARTx receive data source select setting.
 *
 * @param base     Base address for current SIM instance.
 * @param instance     device instance.
 * @return select LPUARTx receive data source select setting
 */
static inline sim_lpuart_rxsrc_t SIM_HAL_GetLpuartRxSrcMode(SIM_Type * base,
                                                            uint32_t instance)
{
    return (sim_lpuart_rxsrc_t)SIM_BRD_SOPT5_LPUART0RXSRC(base);
}

/*!
 * @brief Sets the FlexTimer x hardware trigger y source select setting.
 *
 * This function  selects  the source of FTMx hardware trigger y.
 *
 * @param base     Base address for current SIM instance.
 * @param instance     device instance.
 * @param trigger      hardware trigger y
 * @param select FlexTimer x hardware trigger y
 *               - 0: Pre-trigger A selected for ADCx.
 *               - 1: Pre-trigger B selected for ADCx.
 */
void SIM_HAL_SetFtmTriggerSrcMode(SIM_Type * base,
                                  uint32_t instance,
                                  uint8_t trigger,
                                  sim_ftm_trg_src_t select);

/*!
 * @brief Gets the FlexTimer x hardware trigger y source select setting.
 *
 * This function  gets the FlexTimer x hardware trigger y source select setting.
 *
 * @param base     Base address for current SIM instance.
 * @param instance     device instance.
 * @param trigger      hardware trigger y
 * @return select FlexTimer x hardware trigger y source select setting
 */
sim_ftm_trg_src_t SIM_HAL_GetFtmTriggerSrcMode(SIM_Type * base,
                                               uint32_t instance,
                                               uint8_t trigger);

/*!
 * @brief Sets the FlexTimer x external clock pin select setting.
 *
 * This function  selects the source of FTMx external clock pin select.
 *
 * @param base     Base address for current SIM instance.
 * @param instance     device instance.
 * @param select FTMx external clock pin select
 *               - 0: FTMx external clock driven by FTM CLKIN0 pin.
 *               - 1: FTMx external clock driven by FTM CLKIN1 pin.
 */
void SIM_HAL_SetFtmExternalClkPinMode(SIM_Type * base,
                                      uint32_t instance,
                                      sim_ftm_clk_sel_t select);

/*!
 * @brief Gets the FlexTimer x external clock pin select setting.
 *
 * This function gets the FlexTimer x external clock pin select setting.
 *
 * @param base     Base address for current SIM instance.
 * @param instance     device instance.
 * @return select FlexTimer x external clock pin select setting
 */
sim_ftm_clk_sel_t SIM_HAL_GetFtmExternalClkPinMode(SIM_Type * base,
                                                   uint32_t instance);

/*!
 * @brief Sets the FlexTimer x channel y input capture source select setting.
 *
 * This function  selects the FlexTimer x channel y input capture source.
 *
 * @param base     Base address for current SIM instance.
 * @param instance     device instance.
 * @param channel      FlexTimer channel y
 * @param select FlexTimer x channel y input capture source
 */
void SIM_HAL_SetFtmChSrcMode(SIM_Type * base,
                             uint32_t instance,
                             uint8_t channel,
                             sim_ftm_ch_src_t select);

/*!
 * @brief Gets the FlexTimer x channel y input capture source select setting.
 *
 * This function gets the FlexTimer x channel y input capture
 * source select setting.
 *
 * @param base     Base address for current SIM instance.
 * @param instance     device instance.
 * @param channel      FlexTimer channel y
 * @return select FlexTimer x channel y input capture source select setting
 */
sim_ftm_ch_src_t SIM_HAL_GetFtmChSrcMode(SIM_Type * base,
                                         uint32_t instance,
                                         uint8_t channel);

/*!
 * @brief Sets the FlexTimer x channel y output source select setting.
 *
 * This function  selects the FlexTimer x channel y output source.
 *
 * @param base     Base address for current SIM instance.
 * @param instance     device instance.
 * @param channel      FlexTimer channel y
 * @param select FlexTimer x channel y output source
 */
void SIM_HAL_SetFtmChOutSrcMode(SIM_Type * base,
                                uint32_t instance,
                                uint8_t channel,
                                sim_ftm_ch_out_src_t select);

/*!
 * @brief Gets the FlexTimer x channel y output source select setting.
 *
 * This function gets the FlexTimer x channel y output
 * source select setting.
 *
 * @param base     Base address for current SIM instance.
 * @param instance     device instance.
 * @param channel      FlexTimer channel y
 * @return select FlexTimer x channel y output source select setting
 */
sim_ftm_ch_out_src_t SIM_HAL_GetFtmChOutSrcMode(SIM_Type * base,
                                                uint32_t instance,
                                                uint8_t channel);

/*!
 * @brief Set FlexTimer x hardware trigger 0 software synchronization.
 *
 * This function sets FlexTimer x hardware trigger 0 software synchronization.
 * FTMxSYNCBIT.
 *
 * @param base     Base address for current SIM instance.
 * @param instance     device instance.
 * @param sync         Synchronize or not.
 */
void SIM_HAL_SetFtmSyncCmd(SIM_Type * base, uint32_t instance, bool sync);

/*!
 * @brief Get FlexTimer x hardware trigger 0 software synchronization setting.
 *
 * This function gets FlexTimer x hardware trigger 0 software synchronization.
 * FTMxSYNCBIT.
 *
 * @param base     Base address for current SIM instance.
 * @param instance     device instance.
 */
static inline bool SIM_HAL_GetFtmSyncCmd(SIM_Type * base, uint32_t instance)
{
    assert (instance < FTM_INSTANCE_COUNT);
    return (bool)(SIM_RD_SOPT8(base) & (1U<<instance));
}

/*!
 * @brief Sets the FlexTimer x fault y select setting.
 *
 * This function  sets the FlexTimer x fault y select setting.
 *
 * @param base     Base address for current SIM instance.
 * @param instance     device instance.
 * @param fault        fault y
 * @param select FlexTimer x fault y select setting
 *               - 0: FlexTimer x fault y select 0.
 *               - 1: FlexTimer x fault y select 1.
 */
void SIM_HAL_SetFtmFaultSelMode(SIM_Type * base,
                                uint32_t instance,
                                uint8_t fault,
                                sim_ftm_flt_sel_t select);

/*!
 * @brief Gets the FlexTimer x fault y select setting.
 *
 * This function  gets the FlexTimer x fault y select setting.
 *
 * @param base     Base address for current SIM instance.
 * @param instance     device instance.
 * @param fault        fault y
 * @return select FlexTimer x fault y select setting
 */
sim_ftm_flt_sel_t SIM_HAL_GetFtmFaultSelMode(SIM_Type * base,
                                             uint32_t instance,
                                             uint8_t fault);

/*!
 * @brief Gets the Kinetis Family ID in the System Device ID register (SIM_SDID).
 *
 * This function  gets the Kinetis Family ID in the System Device ID register.
 *
 * @param base     Base address for current SIM instance.
 * @return id Kinetis Family ID
 */
static inline uint32_t SIM_HAL_GetFamilyId(SIM_Type * base)
{
    return SIM_BRD_SDID_FAMILYID(base);
}

/*!
 * @brief Gets the Kinetis Sub-Family ID in the System Device ID register (SIM_SDID).
 *
 * This function  gets the Kinetis Sub-Family ID in System Device ID register.
 *
 * @param base     Base address for current SIM instance.
 * @return id Kinetis Sub-Family ID
 */
static inline uint32_t SIM_HAL_GetSubFamilyId(SIM_Type * base)
{
    return SIM_BRD_SDID_SUBFAMID(base);
}

/*!
 * @brief Gets the Kinetis SeriesID in the System Device ID register (SIM_SDID).
 *
 * This function  gets the Kinetis Series ID in System Device ID register.
 *
 * @param base     Base address for current SIM instance.
 * @return id Kinetis Series ID
 */
static inline uint32_t SIM_HAL_GetSeriesId(SIM_Type * base)
{
    return SIM_BRD_SDID_SERIESID(base);
}

/*!
 * @brief Gets the Kinetis Fam ID in System Device ID register (SIM_SDID).
 *
 * This function  gets the Kinetis Fam ID in System Device ID register.
 *
 * @param base     Base address for current SIM instance.
 * @return id Kinetis Fam ID
 */
static inline uint32_t SIM_HAL_GetFamId(SIM_Type * base)
{
    return SIM_BRD_SDID_FAMID(base);
}

/*!
 * @brief Gets the Kinetis Pincount ID in System Device ID register (SIM_SDID).
 *
 * This function  gets the Kinetis Pincount ID in System Device ID register.
 *
 * @param base     Base address for current SIM instance.
 * @return id Kinetis Pincount ID
 */
static inline uint32_t SIM_HAL_GetPinCntId(SIM_Type * base)
{
    return SIM_BRD_SDID_PINID(base);
}

/*!
 * @brief Gets the Kinetis Revision ID in the System Device ID register (SIM_SDID).
 *
 * This function  gets the Kinetis Revision ID in System Device ID register.
 *
 * @param base     Base address for current SIM instance.
 * @return id Kinetis Revision ID
 */
static inline uint32_t SIM_HAL_GetRevId(SIM_Type * base)
{
    return SIM_BRD_SDID_REVID(base);
}

/*!
 * @brief Gets the Kinetis Die ID in the System Device ID register (SIM_SDID).
 *
 * This function  gets the Kinetis Die ID in System Device ID register.
 *
 * @param base     Base address for current SIM instance.
 * @return id Kinetis Die ID
 */
static inline uint32_t SIM_HAL_GetDieId(SIM_Type * base)
{
    return SIM_BRD_SDID_DIEID(base);
}


/*!
 * @brief Gets the program flash size in the Flash Configuration Register 1 (SIM_FCFG).
 *
 * This function  gets the program flash size in the Flash Configuration Register 1.
 *
 * @param base     Base address for current SIM instance.
 * @return size Program flash Size
 */
static inline uint32_t SIM_HAL_GetProgramFlashSize(SIM_Type * base)
{
    return SIM_BRD_FCFG1_PFSIZE(base);
}


/*!
 * @brief Sets the Flash Doze in the Flash Configuration Register 1  (SIM_FCFG).
 *
 * This function  sets the Flash Doze in the Flash Configuration Register 1.
 *
 * @param base     Base address for current SIM instance.
 * @param setting Flash Doze setting
 */
static inline void SIM_HAL_SetFlashDoze(SIM_Type * base, uint32_t setting)
{
    SIM_BWR_FCFG1_FLASHDOZE(base, setting);
}

/*!
 * @brief Gets the Flash Doze in the Flash Configuration Register 1  (SIM_FCFG).
 *
 * This function  gets the Flash Doze in the Flash Configuration Register 1.
 *
 * @param base     Base address for current SIM instance.
 * @return setting Flash Doze setting
 */
static inline uint32_t SIM_HAL_GetFlashDoze(SIM_Type * base)
{
    return SIM_BRD_FCFG1_FLASHDOZE(base);
}

/*!
 * @brief Sets the Flash disable setting.
 *
 * This function  sets the Flash disable setting in the
 * Flash Configuration Register 1.
 *
 * @param base     Base address for current SIM instance.
 * @param disable      Flash disable setting
 */
static inline void SIM_HAL_SetFlashDisableCmd(SIM_Type * base, bool disable)
{
    SIM_BWR_FCFG1_FLASHDIS(base, disable);
}

/*!
 * @brief Gets the Flash disable setting.
 *
 * This function  gets the Flash disable setting in the
 * Flash Configuration Register 1.
 *
 * @param base     Base address for current SIM instance.
 * @return setting Flash disable setting
 */
static inline bool SIM_HAL_GetFlashDisableCmd(SIM_Type * base)
{
    return (bool)SIM_BRD_FCFG1_FLASHDIS(base);
}

/*!
 * @brief Gets the Flash maximum address block 0 in the Flash Configuration Register 1  (SIM_FCFG).
 *
 * This function gets the Flash maximum block 0 in Flash Configuration Register 2.
 *
 * @param base     Base address for current SIM instance.
 * @return address Flash maximum block 0 address
 */
static inline uint32_t SIM_HAL_GetFlashMaxAddrBlock0(SIM_Type * base)
{
    return SIM_BRD_FCFG2_MAXADDR0(base);
}

/*!
 * @brief Gets the Flash maximum address block 1 in Flash Configuration Register 2.
 *
 * This function  gets the Flash maximum block 1 in Flash Configuration Register 1.
 *
 * @param base     Base address for current SIM instance.
 * @return address Flash maximum block 0 address
 */
static inline uint32_t SIM_HAL_GetFlashMaxAddrBlock1(SIM_Type * base)
{
    return SIM_BRD_FCFG2_MAXADDR1(base);
}



/*! @}*/
#if defined(__cplusplus)
}
#endif /* __cplusplus*/


#endif /* __FSL_SIM_HAL_K22F12810_H__ */
/*******************************************************************************
 * EOF
 ******************************************************************************/

