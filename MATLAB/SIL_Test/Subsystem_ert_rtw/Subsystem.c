/*
 * File: Subsystem.c
 *
 * Code generated for Simulink model 'Subsystem'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Mon Jun 28 00:24:56 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR (32-bit)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Subsystem.h"
#include "Subsystem_private.h"

/* Block states (default storage) */
DW_Subsystem_T Subsystem_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Subsystem_T Subsystem_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Subsystem_T Subsystem_Y;

/* Real-time model */
RT_MODEL_Subsystem_T Subsystem_M_;
RT_MODEL_Subsystem_T *const Subsystem_M = &Subsystem_M_;

/* Model step function */
void Subsystem_step(void)
{
  real_T rtb_UnitDelay;
  real_T rtb_UnitDelay1;

  /* Outputs for Atomic SubSystem: '<Root>/Subsystem' */
  /* UnitDelay: '<S1>/Unit Delay' */
  rtb_UnitDelay = Subsystem_DW.UnitDelay_DSTATE;

  /* UnitDelay: '<S1>/Unit Delay1' */
  rtb_UnitDelay1 = Subsystem_DW.UnitDelay1_DSTATE;

  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/In1'
   *  Sum: '<S1>/Add'
   *  UnitDelay: '<S1>/Unit Delay'
   *  UnitDelay: '<S1>/Unit Delay1'
   *  UnitDelay: '<S1>/Unit Delay2'
   */
  Subsystem_Y.Out1 = ((Subsystem_U.In1 + Subsystem_DW.UnitDelay_DSTATE) +
                      Subsystem_DW.UnitDelay1_DSTATE) +
    Subsystem_DW.UnitDelay2_DSTATE;

  /* Update for UnitDelay: '<S1>/Unit Delay' incorporates:
   *  Inport: '<Root>/In1'
   */
  Subsystem_DW.UnitDelay_DSTATE = Subsystem_U.In1;

  /* Update for UnitDelay: '<S1>/Unit Delay1' */
  Subsystem_DW.UnitDelay1_DSTATE = rtb_UnitDelay;

  /* Update for UnitDelay: '<S1>/Unit Delay2' */
  Subsystem_DW.UnitDelay2_DSTATE = rtb_UnitDelay1;

  /* End of Outputs for SubSystem: '<Root>/Subsystem' */
}

/* Model initialize function */
void Subsystem_initialize(void)
{
  /* (no initialization code required) */
}

/* Model terminate function */
void Subsystem_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
