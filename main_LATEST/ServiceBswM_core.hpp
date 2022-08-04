#pragma once
/******************************************************************************/
/* File   : ServiceBswM_core.hpp                                                     */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_ServiceBswM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define BSWM_CORE_FUNCTIONALITIES                                              \
              FUNC(void, BSWM_CODE) CurrentWakeupSources           (void);     \
              FUNC(void, BSWM_CODE) PartitionRestarted             (void);     \
              FUNC(void, BSWM_CODE) CurrentIcomConfiguration       (void);     \
              FUNC(void, BSWM_CODE) CurrentState                   (void);     \
              FUNC(void, BSWM_CODE) CurrentMode                    (void);     \
              FUNC(void, BSWM_CODE) CurrentPNCMode                 (void);     \
              FUNC(void, BSWM_CODE) InitiateReset                  (void);     \
              FUNC(void, BSWM_CODE) ApplicationUpdated             (void);     \
              FUNC(void, BSWM_CODE) CurrentWakeup                  (void);     \
              FUNC(void, BSWM_CODE) McalPortGroupMcalLinkStateChg          (void);     \
              FUNC(void, BSWM_CODE) BroadcastStatus                (void);     \
              FUNC(void, BSWM_CODE) StateChangeNotification        (void);     \
              FUNC(void, BSWM_CODE) CurrentSchedule                (void);     \
              FUNC(void, BSWM_CODE) RequestMode                    (void);     \
              FUNC(void, BSWM_CODE) CarWakeUpIndication            (void);     \
              FUNC(void, BSWM_CODE) CurrentBlockMode               (void);     \
              FUNC(void, BSWM_CODE) CurrentJobMode                 (void);     \
              FUNC(void, BSWM_CODE) ClientServiceCurrentState      (void);     \
              FUNC(void, BSWM_CODE) ConsumedEventGroupCurrentState (void);     \
              FUNC(void, BSWM_CODE) EventHandlerCurrentState       (void);     \
              FUNC(void, BSWM_CODE) RequestPartitionReset          (void);     \

#define BSWM_CORE_FUNCTIONALITIES_VIRTUAL                                      \
      virtual FUNC(void, BSWM_CODE) CurrentWakeupSources           (void) = 0; \
      virtual FUNC(void, BSWM_CODE) PartitionRestarted             (void) = 0; \
      virtual FUNC(void, BSWM_CODE) CurrentIcomConfiguration       (void) = 0; \
      virtual FUNC(void, BSWM_CODE) CurrentState                   (void) = 0; \
      virtual FUNC(void, BSWM_CODE) CurrentMode                    (void) = 0; \
      virtual FUNC(void, BSWM_CODE) CurrentPNCMode                 (void) = 0; \
      virtual FUNC(void, BSWM_CODE) InitiateReset                  (void) = 0; \
      virtual FUNC(void, BSWM_CODE) ApplicationUpdated             (void) = 0; \
      virtual FUNC(void, BSWM_CODE) CurrentWakeup                  (void) = 0; \
      virtual FUNC(void, BSWM_CODE) McalPortGroupMcalLinkStateChg          (void) = 0; \
      virtual FUNC(void, BSWM_CODE) BroadcastStatus                (void) = 0; \
      virtual FUNC(void, BSWM_CODE) StateChangeNotification        (void) = 0; \
      virtual FUNC(void, BSWM_CODE) CurrentSchedule                (void) = 0; \
      virtual FUNC(void, BSWM_CODE) RequestMode                    (void) = 0; \
      virtual FUNC(void, BSWM_CODE) CarWakeUpIndication            (void) = 0; \
      virtual FUNC(void, BSWM_CODE) CurrentBlockMode               (void) = 0; \
      virtual FUNC(void, BSWM_CODE) CurrentJobMode                 (void) = 0; \
      virtual FUNC(void, BSWM_CODE) ClientServiceCurrentState      (void) = 0; \
      virtual FUNC(void, BSWM_CODE) ConsumedEventGroupCurrentState (void) = 0; \
      virtual FUNC(void, BSWM_CODE) EventHandlerCurrentState       (void) = 0; \
      virtual FUNC(void, BSWM_CODE) RequestPartitionReset          (void) = 0; \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_ServiceBswM_Functionality{
   public:
      BSWM_CORE_FUNCTIONALITIES_VIRTUAL
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

