/******************************************************************************/
/* File   : BswM.cpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "module.h"
#include "BswM_Cfg.h"
#include "infBswM_EcuM.h"
#include "infBswM_Dcm.h"
#include "infBswM_SchM.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define BSWM_AR_RELEASE_MAJOR_VERSION                                          4
#define BSWM_AR_RELEASE_MINOR_VERSION                                          3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(BSWM_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION)
   #error "Incompatible BSWM_AR_RELEASE_MAJOR_VERSION!"
#endif

#if(BSWM_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION)
   #error "Incompatible BSWM_AR_RELEASE_MINOR_VERSION!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_BswM:
      public abstract_module
{
   public:
      FUNC(void, BSWM_CODE) InitFunction   (void);
      FUNC(void, BSWM_CODE) DeInitFunction (void);
      FUNC(void, BSWM_CODE) GetVersionInfo (void);
      FUNC(void, BSWM_CODE) MainFunction   (void);
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
VAR(module_BswM, BSWM_VAR) BswM;
CONSTP2VAR(infEcuMClient, BSWM_VAR, BSWM_CONST) gptrinfEcuMClient_BswM = &BswM;
CONSTP2VAR(infDcmClient,  BSWM_VAR, BSWM_CONST) gptrinfDcmClient_BswM  = &BswM;
CONSTP2VAR(infSchMClient, BSWM_VAR, BSWM_CONST) gptrinfSchMClient_BswM = &BswM;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, BSWM_CODE) module_BswM::InitFunction(void){
   BswM.IsInitDone = E_OK;
}

FUNC(void, BSWM_CODE) module_BswM::DeInitFunction(void){
   BswM.IsInitDone = E_NOT_OK;
}

FUNC(void, BSWM_CODE) module_BswM::GetVersionInfo(void){
#if(STD_ON == BswM_DevErrorDetect)
//TBD: API parameter check
   Det_ReportError(
   );
#endif
}

FUNC(void, BSWM_CODE) module_BswM::MainFunction(void){
}

// EcuM_Init.SelectShutdownTarget(...);
// EcuM_Init.GoDownHaltPoll(...);

#include "BswM_Unused.h"

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

