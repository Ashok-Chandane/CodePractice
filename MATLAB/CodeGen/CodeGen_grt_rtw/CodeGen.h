/*
 * CodeGen.h
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

#ifndef RTW_HEADER_CodeGen_h_
#define RTW_HEADER_CodeGen_h_
#include <float.h>
#include <string.h>
#include <stddef.h>
#ifndef CodeGen_COMMON_INCLUDES_
# define CodeGen_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#endif                                 /* CodeGen_COMMON_INCLUDES_ */

#include "CodeGen_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               (&(rtm)->Timing.taskTime0)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T Add;                          /* '<S2>/Add' */
} B_CodeGen_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay_DSTATE;             /* '<S2>/Unit Delay' */
  uint8_T Output_DSTATE;               /* '<S3>/Output' */
} DW_CodeGen_T;

/* Parameters (default storage) */
struct P_CodeGen_T_ {
  real_T Enable_1[11];                 /* Variable: Enable_1
                                        * Referenced by: '<S1>/Vector'
                                        */
  uint8_T LimitedCounter_uplimit;      /* Mask Parameter: LimitedCounter_uplimit
                                        * Referenced by: '<S5>/FixPt Switch'
                                        */
  real_T Counter_op_Y0;                /* Computed Parameter: Counter_op_Y0
                                        * Referenced by: '<S2>/Counter_op'
                                        */
  real_T One_1_Value;                  /* Expression: 1
                                        * Referenced by: '<S2>/One_1'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S2>/Unit Delay'
                                        */
  uint8_T Constant_Value;              /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S5>/Constant'
                                        */
  uint8_T Output_InitialCondition;/* Computed Parameter: Output_InitialCondition
                                   * Referenced by: '<S3>/Output'
                                   */
  uint8_T FixPtConstant_Value;        /* Computed Parameter: FixPtConstant_Value
                                       * Referenced by: '<S4>/FixPt Constant'
                                       */
};

/* Real-time Model Data Structure */
struct tag_RTM_CodeGen_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P_CodeGen_T CodeGen_P;

/* Block signals (default storage) */
extern B_CodeGen_T CodeGen_B;

/* Block states (default storage) */
extern DW_CodeGen_T CodeGen_DW;

/* Model entry point functions */
extern void CodeGen_initialize(void);
extern void CodeGen_step(void);
extern void CodeGen_terminate(void);

/* Real-time Model object */
extern RT_MODEL_CodeGen_T *const CodeGen_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'CodeGen'
 * '<S1>'   : 'CodeGen/Enable_1'
 * '<S2>'   : 'CodeGen/Subsystem'
 * '<S3>'   : 'CodeGen/Enable_1/LimitedCounter'
 * '<S4>'   : 'CodeGen/Enable_1/LimitedCounter/Increment Real World'
 * '<S5>'   : 'CodeGen/Enable_1/LimitedCounter/Wrap To Zero'
 */
#endif                                 /* RTW_HEADER_CodeGen_h_ */
