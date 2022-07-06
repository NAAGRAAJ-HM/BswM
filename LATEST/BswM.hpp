#pragma once
/******************************************************************************/
/* File   : BswM.hpp                                                          */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CfgBswM.hpp"
#include "BswM_core.hpp"
#include "infBswM_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_BswM:
      INTERFACES_EXPORTED_BSWM
      public abstract_module
   ,  public class_BswM_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, BSWM_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, BSWM_CONFIG_DATA, BSWM_APPL_CONST) lptrCfgModule
      );
      FUNC(void, BSWM_CODE) DeInitFunction (void);
      FUNC(void, BSWM_CODE) MainFunction   (void);
      BSWM_CORE_FUNCTIONALITIES
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
extern VAR(module_BswM, BSWM_VAR) BswM;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

