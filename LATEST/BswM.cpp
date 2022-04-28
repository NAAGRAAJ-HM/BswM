/******************************************************************************/
/* File   : BswM.cpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "BswM_core.hpp"
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
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
      );
#endif
   }
   else{
#endif
      if(NULL_PTR == lptrCfgModule){
#if(STD_ON == BswM_DevErrorDetect)
         Det_ReportError(
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
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
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
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
      0 //TBD: IdModule
   ,  0 //TBD: IdInstance
   ,  0 //TBD: IdApi
   ,  0 //TBD: IdError
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

FUNC(void, BSWM_CODE) class_BswM_Functionality::CurrentWakeupSources(void){
}

FUNC(void, BSWM_CODE) class_BswM_Functionality::PartitionRestarted(void){
}

FUNC(void, BSWM_CODE) class_BswM_Functionality::CurrentIcomConfiguration(void){
}

FUNC(void, BSWM_CODE) class_BswM_Functionality::CurrentState(void){
}

FUNC(void, BSWM_CODE) class_BswM_Functionality::CurrentMode(void){
}

FUNC(void, BSWM_CODE) class_BswM_Functionality::CurrentPNCMode(void){
}

FUNC(void, BSWM_CODE) class_BswM_Functionality::InitiateReset(void){
}

FUNC(void, BSWM_CODE) class_BswM_Functionality::ApplicationUpdated(void){
}

FUNC(void, BSWM_CODE) class_BswM_Functionality::CurrentWakeup(void){
}

FUNC(void, BSWM_CODE) class_BswM_Functionality::PortGroupLinkStateChg(void){
}

FUNC(void, BSWM_CODE) class_BswM_Functionality::BroadcastStatus(void){
}

FUNC(void, BSWM_CODE) class_BswM_Functionality::StateChangeNotification(void){
}

FUNC(void, BSWM_CODE) class_BswM_Functionality::CurrentSchedule(void){
}

FUNC(void, BSWM_CODE) class_BswM_Functionality::RequestMode(void){
}

FUNC(void, BSWM_CODE) class_BswM_Functionality::CarWakeUpIndication(void){
}

FUNC(void, BSWM_CODE) class_BswM_Functionality::CurrentBlockMode(void){
}

FUNC(void, BSWM_CODE) class_BswM_Functionality::CurrentJobMode(void){
}

FUNC(void, BSWM_CODE) class_BswM_Functionality::ClientServiceCurrentState(void){
}

FUNC(void, BSWM_CODE) class_BswM_Functionality::ConsumedEventGroupCurrentState(void){
}

FUNC(void, BSWM_CODE) class_BswM_Functionality::EventHandlerCurrentState(void){
}

FUNC(void, BSWM_CODE) class_BswM_Functionality::RequestPartitionReset(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

