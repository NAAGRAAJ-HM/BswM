/******************************************************************************/
/* File   : ServiceBswM.cpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "ServiceBswM.hpp"
#include "infServiceBswM_Imp.hpp"

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

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_ServiceBswM, BSWM_VAR) ServiceBswM;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, BSWM_CODE) module_ServiceBswM::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, BSWM_CONST,       BSWM_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   BSWM_CONFIG_DATA, BSWM_APPL_CONST) lptrCfgModule
){
#if(STD_ON == ServiceBswM_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstServiceBswM_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == ServiceBswM_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == ServiceBswM_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == ServiceBswM_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  BSWM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, BSWM_CODE) module_ServiceBswM::DeInitFunction(
   void
){
#if(STD_ON == ServiceBswM_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServiceBswM_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == ServiceBswM_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  BSWM_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, BSWM_CODE) module_ServiceBswM::MainFunction(
   void
){
#if(STD_ON == ServiceBswM_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServiceBswM_InitCheck)
   }
   else{
#if(STD_ON == ServiceBswM_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  BSWM_E_UNINIT
      );
#endif
   }
#endif
}

// ServiceEcuM_Init.SelectShutdownTarget(...);
// ServiceEcuM_Init.GoDownHaltPoll(...);

FUNC(void, BSWM_CODE) module_ServiceBswM::CurrentWakeupSources(
   void
){
}

FUNC(void, BSWM_CODE) module_ServiceBswM::PartitionRestarted(
   void
){
}

FUNC(void, BSWM_CODE) module_ServiceBswM::CurrentIcomConfiguration(
   void
){
}

FUNC(void, BSWM_CODE) module_ServiceBswM::CurrentState(
   void
){
}

FUNC(void, BSWM_CODE) module_ServiceBswM::CurrentMode(
   void
){
}

FUNC(void, BSWM_CODE) module_ServiceBswM::CurrentPNCMode(
   void
){
}

FUNC(void, BSWM_CODE) module_ServiceBswM::InitiateReset(
   void
){
}

FUNC(void, BSWM_CODE) module_ServiceBswM::ApplicationUpdated(
   void
){
}

FUNC(void, BSWM_CODE) module_ServiceBswM::CurrentWakeup(
   void
){
}

FUNC(void, BSWM_CODE) module_ServiceBswM::McalPortGroupMcalLinkStateChg(
   void
){
}

FUNC(void, BSWM_CODE) module_ServiceBswM::BroadcastStatus(
   void
){
}

FUNC(void, BSWM_CODE) module_ServiceBswM::StateChangeNotification(
   void
){
}

FUNC(void, BSWM_CODE) module_ServiceBswM::CurrentSchedule(
   void
){
}

FUNC(void, BSWM_CODE) module_ServiceBswM::RequestMode(
   void
){
}

FUNC(void, BSWM_CODE) module_ServiceBswM::CarWakeUpIndication(
   void
){
}

FUNC(void, BSWM_CODE) module_ServiceBswM::CurrentBlockMode(
   void
){
}

FUNC(void, BSWM_CODE) module_ServiceBswM::CurrentJobMode(
   void
){
}

FUNC(void, BSWM_CODE) module_ServiceBswM::ClientServiceCurrentState(
   void
){
}

FUNC(void, BSWM_CODE) module_ServiceBswM::ConsumedEventGroupCurrentState(
   void
){
}

FUNC(void, BSWM_CODE) module_ServiceBswM::EventHandlerCurrentState(
   void
){
}

FUNC(void, BSWM_CODE) module_ServiceBswM::RequestPartitionReset(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

