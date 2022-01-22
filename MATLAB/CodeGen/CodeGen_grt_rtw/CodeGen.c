/*
 * CodeGen.c
 *
 * Code generation for model "CodeGen".
 *
 * Model version              : 1.3
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C source code generated on : Sun Mar 14 19:39:46 2021
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "CodeGen.h"
#include "CodeGen_private.h"

/* Block signals (default storage) */
B_CodeGen_T CodeGen_B;

/* Block states (default storage) */
DW_CodeGen_T CodeGen_DW;

/* Real-time model */
RT_MODEL_CodeGen_T CodeGen_M_;
RT_MODEL_CodeGen_T *const CodeGen_M = &CodeGen_M_;

/* Model step function */
void CodeGen_step(void)
{
  /* local block i/o variables */
  real_T rtb_Output;
  uint8_T rtb_FixPtSum1;

  /* MultiPortSwitch: '<S1>/Output' incorporates:
   *  Constant: '<S1>/Vector'
   *  UnitDelay: '<S3>/Output'
   */
  rtb_Output = CodeGen_P.Enable_1[CodeGen_DW.Output_DSTATE];

  /* Outputs for Enabled SubSystem: '<Root>/Subsystem' incorporates:
   *  EnablePort: '<S2>/Enable'
   */
  if (rtb_Output > 0.0) {
    /* Sum: '<S2>/Add' incorporates:
     *  Constant: '<S2>/One_1'
     *  UnitDelay: '<S2>/Unit Delay'
     */
    CodeGen_B.Add = CodeGen_P.One_1_Value + CodeGen_DW.UnitDelay_DSTATE;

    /* Update for UnitDelay: '<S2>/Unit Delay' */
    CodeGen_DW.UnitDelay_DSTATE = CodeGen_B.Add;
  }

  /* End of Outputs for SubSystem: '<Root>/Subsystem' */
  /* Sum: '<S4>/FixPt Sum1' incorporates:
   *  Constant: '<S4>/FixPt Constant'
   *  UnitDelay: '<S3>/Output'
   */
  rtb_FixPtSum1 = (uint8_T)((uint32_T)CodeGen_DW.Output_DSTATE +
    CodeGen_P.FixPtConstant_Value);

  /* Switch: '<S5>/FixPt Switch' */
  if (rtb_FixPtSum1 > CodeGen_P.LimitedCounter_uplimit) {
    /* Update for UnitDelay: '<S3>/Output' incorporates:
     *  Constant: '<S5>/Constant'
     */
    CodeGen_DW.Output_DSTATE = CodeGen_P.Constant_Value;
  } else {
    /* Update for UnitDelay: '<S3>/Output' */
    CodeGen_DW.Output_DSTATE = rtb_FixPtSum1;
  }

  /* End of Switch: '<S5>/FixPt Switch' */

  /* Matfile logging */
  rt_UpdateTXYLogVars(CodeGen_M->rtwLogInfo, (&CodeGen_M->Timing.taskTime0));

  /* signal main to stop simulation */
  {                                    /* Sample time: [1.0s, 0.0s] */
    if ((rtmGetTFinal(CodeGen_M)!=-1) &&
        !((rtmGetTFinal(CodeGen_M)-CodeGen_M->Timing.taskTime0) >
          CodeGen_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(CodeGen_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++CodeGen_M->Timing.clockTick0)) {
    ++CodeGen_M->Timing.clockTickH0;
  }

  CodeGen_M->Timing.taskTime0 = CodeGen_M->Timing.clockTick0 *
    CodeGen_M->Timing.stepSize0 + CodeGen_M->Timing.clockTickH0 *
    CodeGen_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void CodeGen_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)CodeGen_M, 0,
                sizeof(RT_MODEL_CodeGen_T));
  rtmSetTFinal(CodeGen_M, 10.0);
  CodeGen_M->Timing.stepSize0 = 1.0;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = NULL;
    CodeGen_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(CodeGen_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(CodeGen_M->rtwLogInfo, (NULL));
    rtliSetLogT(CodeGen_M->rtwLogInfo, "tout");
    rtliSetLogX(CodeGen_M->rtwLogInfo, "");
    rtliSetLogXFinal(CodeGen_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(CodeGen_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(CodeGen_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(CodeGen_M->rtwLogInfo, 0);
    rtliSetLogDecimation(CodeGen_M->rtwLogInfo, 1);
    rtliSetLogY(CodeGen_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(CodeGen_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(CodeGen_M->rtwLogInfo, (NULL));
  }

  /* block I/O */
  (void) memset(((void *) &CodeGen_B), 0,
                sizeof(B_CodeGen_T));

  /* states (dwork) */
  (void) memset((void *)&CodeGen_DW, 0,
                sizeof(DW_CodeGen_T));

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(CodeGen_M->rtwLogInfo, 0.0, rtmGetTFinal
    (CodeGen_M), CodeGen_M->Timing.stepSize0, (&rtmGetErrorStatus(CodeGen_M)));

  /* InitializeConditions for UnitDelay: '<S3>/Output' */
  CodeGen_DW.Output_DSTATE = CodeGen_P.Output_InitialCondition;

  /* SystemInitialize for Enabled SubSystem: '<Root>/Subsystem' */
  /* InitializeConditions for UnitDelay: '<S2>/Unit Delay' */
  CodeGen_DW.UnitDelay_DSTATE = CodeGen_P.UnitDelay_InitialCondition;

  /* SystemInitialize for Outport: '<S2>/Counter_op' */
  CodeGen_B.Add = CodeGen_P.Counter_op_Y0;

  /* End of SystemInitialize for SubSystem: '<Root>/Subsystem' */
}

/* Model terminate function */
void CodeGen_terminate(void)
{
  /* (no terminate code required) */
}
