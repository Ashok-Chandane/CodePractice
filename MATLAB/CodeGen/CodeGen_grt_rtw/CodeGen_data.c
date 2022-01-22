/*
 * CodeGen_data.c
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

/* Block parameters (default storage) */
P_CodeGen_T CodeGen_P = {
  /* Variable: Enable_1
   * Referenced by: '<S1>/Vector'
   */
  { 1.0, 0.0, 0.0, 1.0, 1.0, 1.0, 0.0, 1.0, 0.0, 0.0, 0.0 },

  /* Mask Parameter: LimitedCounter_uplimit
   * Referenced by: '<S5>/FixPt Switch'
   */
  10U,

  /* Computed Parameter: Counter_op_Y0
   * Referenced by: '<S2>/Counter_op'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S2>/One_1'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S2>/Unit Delay'
   */
  0.0,

  /* Computed Parameter: Constant_Value
   * Referenced by: '<S5>/Constant'
   */
  0U,

  /* Computed Parameter: Output_InitialCondition
   * Referenced by: '<S3>/Output'
   */
  0U,

  /* Computed Parameter: FixPtConstant_Value
   * Referenced by: '<S4>/FixPt Constant'
   */
  1U
};
