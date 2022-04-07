/******************************************************************************/
/* File   : BswM.cpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "infBswM_EcuM.hpp"
#include "infBswM_Dcm.hpp"
#include "infBswM_SchM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define BSWM_AR_RELEASE_VERSION_MAJOR                                          4
#define BSWM_AR_RELEASE_VERSION_MINOR                                          3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(BSWM_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible BSWM_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(BSWM_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible BSWM_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_BswM:
      public abstract_module
{
   public:
      module_BswM(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, BSWM_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, BSWM_CONFIG_DATA, BSWM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, BSWM_CODE) DeInitFunction (void);
      FUNC(void, BSWM_CODE) MainFunction   (void);
};

extern VAR(module_BswM, BSWM_VAR) BswM;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, BSWM_VAR, BSWM_CONST) gptrinfEcuMClient_BswM = &BswM;
CONSTP2VAR(infDcmClient,  BSWM_VAR, BSWM_CONST) gptrinfDcmClient_BswM  = &BswM;
CONSTP2VAR(infSchMClient, BSWM_VAR, BSWM_CONST) gptrinfSchMClient_BswM = &BswM;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
#include "CfgBswM.hpp"

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_BswM, BSWM_VAR) BswM(
   {
         BSWM_AR_RELEASE_VERSION_MAJOR
      ,  BSWM_AR_RELEASE_VERSION_MINOR
      ,  0x00
      ,  0xFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, BSWM_CODE) module_BswM::InitFunction(
   CONSTP2CONST(CfgModule_TypeAbstract, BSWM_CONFIG_DATA, BSWM_APPL_CONST) lptrCfgModule
){
#if(STD_ON == BswM_InitCheck)
   if(E_OK == IsInitDone){
#if(STD_ON == BswM_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
      if(NULL_PTR == lptrCfgModule){
#if(STD_ON == BswM_DevErrorDetect)
         Det_ReportError(
         );
#endif
      }
      else{
         if(STD_LOW){
// check lptrCfgModule for memory faults
            lptrCfg = lptrCfgModule;
         }
         else{
// use PBcfgCanIf as back-up configuration
            lptrCfg = &PBcfgBswM;
         }
      }
      IsInitDone = E_OK;
#if(STD_ON == BswM_InitCheck)
   }
#endif
}

FUNC(void, BSWM_CODE) module_BswM::DeInitFunction(void){
#if(STD_ON == BswM_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == BswM_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
      IsInitDone = E_NOT_OK;
#if(STD_ON == BswM_InitCheck)
   }
#endif
}

FUNC(void, BSWM_CODE) module_BswM::MainFunction(void){
#if(STD_ON == BswM_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == BswM_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
#if(STD_ON == BswM_InitCheck)
   }
#endif
}

// EcuM_Init.SelectShutdownTarget(...);
// EcuM_Init.GoDownHaltPoll(...);

class class_BswM_Unused{
   public:
      FUNC(void, BSWM_CODE) CurrentWakeupSources           (void);
      FUNC(void, BSWM_CODE) PartitionRestarted             (void);
      FUNC(void, BSWM_CODE) CurrentIcomConfiguration       (void);
      FUNC(void, BSWM_CODE) CurrentState                   (void);
      FUNC(void, BSWM_CODE) CurrentMode                    (void);
      FUNC(void, BSWM_CODE) CurrentPNCMode                 (void);
      FUNC(void, BSWM_CODE) InitiateReset                  (void);
      FUNC(void, BSWM_CODE) ApplicationUpdated             (void);
      FUNC(void, BSWM_CODE) CurrentWakeup                  (void);
      FUNC(void, BSWM_CODE) PortGroupLinkStateChg          (void);
      FUNC(void, BSWM_CODE) BroadcastStatus                (void);
      FUNC(void, BSWM_CODE) StateChangeNotification        (void);
      FUNC(void, BSWM_CODE) CurrentSchedule                (void);
      FUNC(void, BSWM_CODE) RequestMode                    (void);
      FUNC(void, BSWM_CODE) CarWakeUpIndication            (void);
      FUNC(void, BSWM_CODE) CurrentBlockMode               (void);
      FUNC(void, BSWM_CODE) CurrentJobMode                 (void);
      FUNC(void, BSWM_CODE) ClientServiceCurrentState      (void);
      FUNC(void, BSWM_CODE) ConsumedEventGroupCurrentState (void);
      FUNC(void, BSWM_CODE) EventHandlerCurrentState       (void);
      FUNC(void, BSWM_CODE) RequestPartitionReset          (void);
};

FUNC(void, BSWM_CODE) class_BswM_Unused::CurrentWakeupSources(void){
}

FUNC(void, BSWM_CODE) class_BswM_Unused::PartitionRestarted(void){
}

FUNC(void, BSWM_CODE) class_BswM_Unused::CurrentIcomConfiguration(void){
}

FUNC(void, BSWM_CODE) class_BswM_Unused::CurrentState(void){
}

FUNC(void, BSWM_CODE) class_BswM_Unused::CurrentMode(void){
}

FUNC(void, BSWM_CODE) class_BswM_Unused::CurrentPNCMode(void){
}

FUNC(void, BSWM_CODE) class_BswM_Unused::InitiateReset(void){
}

FUNC(void, BSWM_CODE) class_BswM_Unused::ApplicationUpdated(void){
}

FUNC(void, BSWM_CODE) class_BswM_Unused::CurrentWakeup(void){
}

FUNC(void, BSWM_CODE) class_BswM_Unused::PortGroupLinkStateChg(void){
}

FUNC(void, BSWM_CODE) class_BswM_Unused::BroadcastStatus(void){
}

FUNC(void, BSWM_CODE) class_BswM_Unused::StateChangeNotification(void){
}

FUNC(void, BSWM_CODE) class_BswM_Unused::CurrentSchedule(void){
}

FUNC(void, BSWM_CODE) class_BswM_Unused::RequestMode(void){
}

FUNC(void, BSWM_CODE) class_BswM_Unused::CarWakeUpIndication(void){
}

FUNC(void, BSWM_CODE) class_BswM_Unused::CurrentBlockMode(void){
}

FUNC(void, BSWM_CODE) class_BswM_Unused::CurrentJobMode(void){
}

FUNC(void, BSWM_CODE) class_BswM_Unused::ClientServiceCurrentState(void){
}

FUNC(void, BSWM_CODE) class_BswM_Unused::ConsumedEventGroupCurrentState(void){
}

FUNC(void, BSWM_CODE) class_BswM_Unused::EventHandlerCurrentState(void){
}

FUNC(void, BSWM_CODE) class_BswM_Unused::RequestPartitionReset(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

