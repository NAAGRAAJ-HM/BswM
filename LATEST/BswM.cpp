/*****************************************************/
/* File   : BswM.cpp                                 */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "BswM.h"

#include "EcuM.h"
#include "BswM_EcuM.h"
#include "BswM_SchM.h"

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
interface_BswM_EcuM_Init BswM_EcuM_Init;
interface_BswM_EcuM_DeInit BswM_EcuM_DeInit;
interface_BswM_SchM_Main BswM_SchM_Main;
class_BswM BswM;

interface_EcuM_Init_Client *EcuM_Init_Client_ptr_BswM = &BswM_EcuM_Init;
interface_EcuM_DeInit_Client *EcuM_DeInit_Client_ptr_BswM = &BswM_EcuM_DeInit;
interface_SchM_Main_Client *SchM_Main_Client_ptr_BswM = &BswM_SchM_Main;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, BSWM_CODE) interface_BswM_EcuM_Init::InitFunction(void){
}

FUNC(void, BSWM_CODE) interface_BswM_EcuM_DeInit::DeInitFunction(void){
}

FUNC(void, BSWM_CODE) interface_BswM_SchM_Main::MainFunction(void){
}

// EcuM_Init.SelectShutdownTarget(...);
// EcuM_Init.GoDownHaltPoll(...);

FUNC(void, BSWM_CODE) class_BswM::CurrentWakeupSources(void){
}

FUNC(void, BSWM_CODE) PartitionRestarted(void){}
FUNC(void, BSWM_CODE) CurrentIcomConfiguration(void){}
FUNC(void, BSWM_CODE) CurrentState(void){}
FUNC(void, BSWM_CODE) CurrentMode(void){}
FUNC(void, BSWM_CODE) CurrentPNCMode(void){}
FUNC(void, BSWM_CODE) InitiateReset(void){}
FUNC(void, BSWM_CODE) ApplicationUpdated(void){}
FUNC(void, BSWM_CODE) CurrentWakeup(void){}
FUNC(void, BSWM_CODE) PortGroupLinkStateChg(void){}
FUNC(void, BSWM_CODE) GetVersionInfo(void){}
FUNC(void, BSWM_CODE) BroadcastStatus(void){}
FUNC(void, BSWM_CODE) StateChangeNotification(void){}
FUNC(void, BSWM_CODE) CurrentSchedule(void){}
FUNC(void, BSWM_CODE) RequestMode(void){}
FUNC(void, BSWM_CODE) CarWakeUpIndication(void){}
FUNC(void, BSWM_CODE) CurrentBlockMode(void){}
FUNC(void, BSWM_CODE) CurrentJobMode(void){}
FUNC(void, BSWM_CODE) ClientServiceCurrentState(void){}
FUNC(void, BSWM_CODE) ConsumedEventGroupCurrentState(void){}
FUNC(void, BSWM_CODE) EventHandlerCurrentState(void){}
FUNC(void, BSWM_CODE) RequestPartitionReset(void){}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

