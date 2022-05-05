/******************************************************************************/
/* File   : BswM.cpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "CfgBswM.hpp"
#include "BswM_core.hpp"
#include "infBswM.hpp"

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
   ,  public class_BswM_Functionality
{
   public:
      module_BswM(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, BSWM_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, BSWM_CONFIG_DATA, BSWM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, BSWM_CODE) DeInitFunction (void);
      FUNC(void, BSWM_CODE) MainFunction   (void);
      BSWM_CORE_FUNCTIONALITIES
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
   if(E_OK != IsInitDone){
#endif
      if(NULL_PTR != lptrCfgModule){
         if(STD_HIGH){
            lptrCfg = lptrCfgModule;
         }
         else{
            lptrCfg = &PBcfgBswM;
         }
      }
      else{
#if(STD_ON == BswM_DevErrorDetect)
         Det_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == BswM_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == BswM_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  BSWM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, BSWM_CODE) module_BswM::DeInitFunction(void){
#if(STD_ON == BswM_InitCheck)
   if(E_OK == IsInitDone){
#endif
#if(STD_ON == BswM_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == BswM_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  BSWM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, BSWM_CODE) module_BswM::MainFunction(void){
#if(STD_ON == BswM_InitCheck)
   if(E_OK == IsInitDone){
#endif
#if(STD_ON == BswM_InitCheck)
   }
   else{
#if(STD_ON == BswM_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  BSWM_E_UNINIT
      );
#endif
   }
#endif
}

// EcuM_Init.SelectShutdownTarget(...);
// EcuM_Init.GoDownHaltPoll(...);

FUNC(void, BSWM_CODE) module_BswM::CurrentWakeupSources(void){
}

FUNC(void, BSWM_CODE) module_BswM::PartitionRestarted(void){
}

FUNC(void, BSWM_CODE) module_BswM::CurrentIcomConfiguration(void){
}

FUNC(void, BSWM_CODE) module_BswM::CurrentState(void){
}

FUNC(void, BSWM_CODE) module_BswM::CurrentMode(void){
}

FUNC(void, BSWM_CODE) module_BswM::CurrentPNCMode(void){
}

FUNC(void, BSWM_CODE) module_BswM::InitiateReset(void){
}

FUNC(void, BSWM_CODE) module_BswM::ApplicationUpdated(void){
}

FUNC(void, BSWM_CODE) module_BswM::CurrentWakeup(void){
}

FUNC(void, BSWM_CODE) module_BswM::PortGroupLinkStateChg(void){
}

FUNC(void, BSWM_CODE) module_BswM::BroadcastStatus(void){
}

FUNC(void, BSWM_CODE) module_BswM::StateChangeNotification(void){
}

FUNC(void, BSWM_CODE) module_BswM::CurrentSchedule(void){
}

FUNC(void, BSWM_CODE) module_BswM::RequestMode(void){
}

FUNC(void, BSWM_CODE) module_BswM::CarWakeUpIndication(void){
}

FUNC(void, BSWM_CODE) module_BswM::CurrentBlockMode(void){
}

FUNC(void, BSWM_CODE) module_BswM::CurrentJobMode(void){
}

FUNC(void, BSWM_CODE) module_BswM::ClientServiceCurrentState(void){
}

FUNC(void, BSWM_CODE) module_BswM::ConsumedEventGroupCurrentState(void){
}

FUNC(void, BSWM_CODE) module_BswM::EventHandlerCurrentState(void){
}

FUNC(void, BSWM_CODE) module_BswM::RequestPartitionReset(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

