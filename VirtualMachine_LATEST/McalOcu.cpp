/******************************************************************************/
/* File   : McalOcu.cpp                                                       */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "McalOcu.hpp"
#include "infMcalOcu_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define MCALOCU_AR_RELEASE_VERSION_MAJOR                                       4
#define MCALOCU_AR_RELEASE_VERSION_MINOR                                       3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(MCALOCU_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible MCALOCU_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(MCALOCU_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible MCALOCU_AR_RELEASE_VERSION_MINOR!"
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
VAR(module_McalOcu, MCALOCU_VAR) McalOcu;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, MCALOCU_CODE) module_McalOcu::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, MCALOCU_CONST,       MCALOCU_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   MCALOCU_CONFIG_DATA, MCALOCU_APPL_CONST) lptrCfgModule
){
#if(STD_ON == McalOcu_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstMcalOcu_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == McalOcu_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == McalOcu_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == McalOcu_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCALOCU_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALOCU_CODE) module_McalOcu::DeInitFunction(
   void
){
#if(STD_ON == McalOcu_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == McalOcu_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == McalOcu_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCALOCU_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALOCU_CODE) module_McalOcu::MainFunction(
   void
){
#if(STD_ON == McalOcu_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == McalOcu_InitCheck)
   }
   else{
#if(STD_ON == McalOcu_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  MCALOCU_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, MCALOCU_CODE) module_McalOcu::StartChannel(
   void
){
}

FUNC(void, MCALOCU_CODE) module_McalOcu::StopChannel(
   void
){
}

FUNC(void, MCALOCU_CODE) module_McalOcu::SetPinState(
   void
){
}

FUNC(void, MCALOCU_CODE) module_McalOcu::SetPinAction(
   void
){
}

FUNC(void, MCALOCU_CODE) module_McalOcu::GetCounter(
   void
){
}

FUNC(void, MCALOCU_CODE) module_McalOcu::SetAbsoluteThreshold(
   void
){
}

FUNC(void, MCALOCU_CODE) module_McalOcu::SetRelativeThreshold(
   void
){
}

FUNC(void, MCALOCU_CODE) module_McalOcu::DisableNotification(
   void
){
}

FUNC(void, MCALOCU_CODE) module_McalOcu::EnableNotification(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

