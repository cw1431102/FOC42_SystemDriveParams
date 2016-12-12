/**
  ******************************************************************************
  * @file    Power stage parameters motor 2.h
  * @author  STMCWB ver.4.3.0.16508
  * @version 4.3.0
  * @date    2016-12-12 10:39:35
  * @project STM32_FOC42_F103RC.stmcx
  * @path    E:\Work\Design\Motor Driver\Software\STM32_FOC\STM32_FOC42_F103RC\SystemDriveParams
  * @brief   This file contains motor parameters needed by STM32 PMSM MC FW  
  *                 library v4.3.0
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2015 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software 
  * distributed under the License is distributed on an "AS IS" BASIS, 
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
  */
  
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __POWER_STAGE_PARAMETERS_MOTOR2_H
#define __POWER_STAGE_PARAMETERS_MOTOR2_H

#define PWBDID2            0 

/************* PWM Driving signals section **************/
#define PHASE_UH_POLARITY2            H_ACTIVE_HIGH 
#define PHASE_VH_POLARITY2            H_ACTIVE_HIGH 
#define PHASE_WH_POLARITY2            H_ACTIVE_HIGH 

#define HW_COMPLEMENTED_LOW_SIDE2     ENABLE 

#define PHASE_UL_POLARITY2            L_ACTIVE_HIGH 
#define PHASE_VL_POLARITY2            L_ACTIVE_HIGH 
#define PHASE_WL_POLARITY2            L_ACTIVE_HIGH 

#define HW_DEAD_TIME_NS2              1000 /*!< Dead-time inserted 
                                                         by HW if low side signals 
                                                         are not used */
/********** Inrush current limiter signal section *******/
#define INRUSH_CURR_LIMITER_POLARITY2 DOUT_ACTIVE_HIGH 

/******* Dissipative brake driving signal section *******/
#define DISSIPATIVE_BRAKE_POLARITY2   DOUT_ACTIVE_HIGH 

/*********** Bus voltage sensing section ****************/
#define VBUS_PARTITIONING_FACTOR2     0.0625 /*!< It expresses how 
                                                       much the Vbus is attenuated  
                                                       before being converted into 
                                                       digital value */
#define NOMINAL_BUS_VOLTAGE_V2        24 
/******** Current reading parameters section ******/
/*** Topology ***/
#define THREE_SHUNT2
/* #define SINGLE_SHUNT2 */
/* #define ICS_SENSORS2 */
 

#define RSHUNT2                       0.470

/*  ICSs gains in case of isolated current sensors,
        amplification gain for shunts based sensing */
#define AMPLIFICATION_GAIN2           1.44 

/*** Noise parameters ***/
#define TNOISE_NS2                    1000 
#define TRISE_NS2                     2550 
   
/*********** Over-current protection section ************/   
#define OVERCURR_FEEDBACK_POLARITY2       EMSTOP_ACTIVE_LOW 
#define OVERCURR_PROTECTION_HW_DISABLING2 DOUT_ACTIVE_HIGH 
   
/************ Temperature sensing section ***************/
/* V[V]=V0+dV/dT[V/Celsius]*(T-T0)[Celsius]*/
#define V0_V2                         0.290 /*!< in Volts */
#define T0_C2                         25 /*!< in Celsius degrees */
#define dV_dT2                        0.025 /*!< V/Celsius degrees */
#define T_MAX2                        70 /*!< Sensor measured 
                                                       temperature at maximum 
                                                       power stage working 
                                                       temperature, Celsius degrees */

/* ##@@_USER_CODE_START_##@@ */
/* ##@@_USER_CODE_END_##@@ */

#endif /*__POWER_STAGE_PARAMETERS_H*/
/******************* (C) COPYRIGHT 2016 STMicroelectronics *****END OF FILE****/
