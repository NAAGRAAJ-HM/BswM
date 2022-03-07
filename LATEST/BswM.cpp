/*****************************************************/
/* File   : BswM.cpp                                 */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"
#include "BswM_EcuM.h"
#include "BswM_SchM.h"
#include "BswM_Unused.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class module_BswM:
      public abstract_module
{
   public:
      FUNC(void, BSWM_CODE) InitFunction   (void);
      FUNC(void, BSWM_CODE) DeInitFunction (void);
      FUNC(void, BSWM_CODE) MainFunction   (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
module_BswM    BswM;
infEcuMClient* gptrinfEcuMClient_BswM = &BswM;
infSchMClient* gptrinfSchMClient_BswM = &BswM;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, BSWM_CODE) module_BswM::InitFunction(void){
}

FUNC(void, BSWM_CODE) module_BswM::DeInitFunction(void){
}

FUNC(void, BSWM_CODE) module_BswM::MainFunction(void){
}

// EcuM_Init.SelectShutdownTarget(...);
// EcuM_Init.GoDownHaltPoll(...);

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

FUNC(void, BSWM_CODE) class_BswM_Unused::GetVersionInfo(void){
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

/*****************************************************/
/* EOF                                               */
/*****************************************************/

