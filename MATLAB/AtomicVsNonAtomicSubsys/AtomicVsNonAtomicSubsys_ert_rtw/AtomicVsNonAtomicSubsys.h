/*
 * File: AtomicVsNonAtomicSubsys.h
 *
 * Code generated for Simulink model 'AtomicVsNonAtomicSubsys'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Sun Jun 27 23:41:20 2021
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_AtomicVsNonAtomicSubsys_h_
#define RTW_HEADER_AtomicVsNonAtomicSubsys_h_
#ifndef AtomicVsNonAtomicSubsys_COMMON_INCLUDES_
# define AtomicVsNonAtomicSubsys_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                            /* AtomicVsNonAtomicSubsys_COMMON_INCLUDES_ */

#include "AtomicVsNonAtomicSubsys_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Real-time Model Data Structure */
struct tag_RTM_AtomicVsNonAtomicSubs_T {
  const char_T * volatile errorStatus;
};

/* Model entry point functions */
extern void AtomicVsNonAtomicSubsys_initialize(void);
extern void AtomicVsNonAtomicSubsys_step(void);
extern void AtomicVsNonAtomicSubsys_terminate(void);

/* Real-time Model object */
extern RT_MODEL_AtomicVsNonAtomicSub_T *const AtomicVsNonAtomicSubsys_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Add' : Unused code path elimination
 * Block '<Root>/Add1' : Unused code path elimination
 * Block '<S1>/Add2' : Unused code path elimination
 * Block '<S1>/Add3' : Unused code path elimination
 * Block '<S1>/Unit Delay2' : Unused code path elimination
 * Block '<S1>/Unit Delay3' : Unused code path elimination
 * Block '<Root>/Constant' : Unused code path elimination
 * Block '<Root>/Constant1' : Unused code path elimination
 * Block '<Root>/Scope' : Unused code path elimination
 * Block '<Root>/Scope1' : Unused code path elimination
 * Block '<Root>/Unit Delay' : Unused code path elimination
 * Block '<Root>/Unit Delay1' : Unused code path elimination
 */

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
 * '<Root>' : 'AtomicVsNonAtomicSubsys'
 * '<S1>'   : 'AtomicVsNonAtomicSubsys/Atomic Subsystem'
 */
#endif                               /* RTW_HEADER_AtomicVsNonAtomicSubsys_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
