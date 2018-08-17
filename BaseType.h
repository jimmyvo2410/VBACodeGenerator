#ifndef BASETYPE_H
#define BASETYPE_H
/********************************************************************************************/
/* Author  : Jimmy Vo                                                                       */
/* Email   : jimmy.vo.2410@gmail.com                                                        */
/********************************************************************************************/
/*                                                                                          */
/* Filename        : BaseType.h                                                             */
/* Path            : C:\Users\Duy Vo\Desktop\GitHub\VBACodeGenerator\                       */
/* Generation Date : 8/16/2018                                                              */
/* Generation Time : 11:36:10 PM                                                            */
/* Generate by     : Duy Vo                                                                 */
/*                                                                                          */
/********************************************************************************************/
/* Auto generated file. Do not edit!                                                        */
/********************************************************************************************/



/********************************************************************************************/
/* INCLUDE                                                                                  */
/********************************************************************************************/



/********************************************************************************************/
/* TYPEDEF                                                                                  */
/********************************************************************************************/

/* Typedef    : sameple_type                                                                */

typedef sameple_type     bool;



/********************************************************************************************/
/* ENUMERATION                                                                              */
/********************************************************************************************/

/* Enum        : Samle1_State_e                                                             */
typedef enum
{
   Samle1_State_1 = 0,
   Samle1_State_2 = 1,
   Samle1_State_3 = 2, /* adasd */
   Samle1_State_4 = 3,
   Samle1_State_5 = 4, /* dsad */
   Samle1_State_6 = 5
} Samle1_State_e;

/* Enum        : Samle2_State_e                                                             */
typedef enum
{
   Samle2_State_2 = 0, /* 123213 */
   Samle2_State_3 = 1, /* sadsad */
   Samle2_State_4 = 2 /* dsad */
} Samle2_State_e;



/********************************************************************************************/
/* STRUCT                                                                                   */
/********************************************************************************************/

/* Struct      : SampleStruct */
typedef struct
{
   u16       cnt       : 16 ; /* counter */
   u16       Max       : 16 ; /* threshold */
   boolean_t IsExpired : 1 ; /* return if expired */
   boolean_t IsEnable  : 1 ; /* return if Enable */
} SampleStruct;




/********************************************************************************************/
/* END OF FILE                                                                              */
/********************************************************************************************/


#endif

