/******************************************************************************/
/* File   : BswM.cpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "BswM.hpp"
#include "infBswM_Imp.hpp"

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
VAR(module_BswM, BSWM_VAR) BswM;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, BSWM_CODE) module_BswM::InitFunction(
   CONSTP2CONST(CfgModule_TypeAbstract, BSWM_CONFIG_DATA, BSWM_APPL_CONST) lptrCfgModule
){
#if(STD_ON == BswM_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(NULL_PTR != lptrCfgModule){
         lptrCfg = lptrCfgModule;
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

FUNC(void, BSWM_CODE) module_BswM::DeInitFunction(
   void
){
#if(STD_ON == BswM_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
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

FUNC(void, BSWM_CODE) module_BswM::MainFunction(
   void
){
#if(STD_ON == BswM_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
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

FUNC(void, BSWM_CODE) module_BswM::CurrentWakeupSources(
   void
){
}

FUNC(void, BSWM_CODE) module_BswM::PartitionRestarted(
   void
){
}

FUNC(void, BSWM_CODE) module_BswM::CurrentIcomConfiguration(
   void
){
}

FUNC(void, BSWM_CODE) module_BswM::CurrentState(
   void
){
}

FUNC(void, BSWM_CODE) module_BswM::CurrentMode(
   void
){
}

FUNC(void, BSWM_CODE) module_BswM::CurrentPNCMode(
   void
){
}

FUNC(void, BSWM_CODE) module_BswM::InitiateReset(
   void
){
}

FUNC(void, BSWM_CODE) module_BswM::ApplicationUpdated(
   void
){
}

FUNC(void, BSWM_CODE) module_BswM::CurrentWakeup(
   void
){
}

FUNC(void, BSWM_CODE) module_BswM::PortGroupLinkStateChg(
   void
){
}

FUNC(void, BSWM_CODE) module_BswM::BroadcastStatus(
   void
){
}

FUNC(void, BSWM_CODE) module_BswM::StateChangeNotification(
   void
){
}

FUNC(void, BSWM_CODE) module_BswM::CurrentSchedule(
   void
){
}

FUNC(void, BSWM_CODE) module_BswM::RequestMode(
   void
){
}

FUNC(void, BSWM_CODE) module_BswM::CarWakeUpIndication(
   void
){
}

FUNC(void, BSWM_CODE) module_BswM::CurrentBlockMode(
   void
){
}

FUNC(void, BSWM_CODE) module_BswM::CurrentJobMode(
   void
){
}

FUNC(void, BSWM_CODE) module_BswM::ClientServiceCurrentState(
   void
){
}

FUNC(void, BSWM_CODE) module_BswM::ConsumedEventGroupCurrentState(
   void
){
}

FUNC(void, BSWM_CODE) module_BswM::EventHandlerCurrentState(
   void
){
}

FUNC(void, BSWM_CODE) module_BswM::RequestPartitionReset(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

