

#ifndef _TAF_XPDS_CP_FSM_PDE_PROC_COMM_H_
#define _TAF_XPDS_CP_FSM_PDE_PROC_COMM_H_

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "vos.h"
#include "TafXpdsEncode.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(4)

/*****************************************************************************
2 宏定义
*****************************************************************************/


/*****************************************************************************
3 枚举定义
*****************************************************************************/


/*****************************************************************************
4 全局变量声明
*****************************************************************************/


/*****************************************************************************
5 消息头定义
*****************************************************************************/


/*****************************************************************************
6 消息定义
*****************************************************************************/


/*****************************************************************************
7 STRUCT定义
*****************************************************************************/


/*****************************************************************************
8 UNION定义
*****************************************************************************/


/*****************************************************************************
9 OTHERS定义
*****************************************************************************/


/*****************************************************************************
10 函数声明
*****************************************************************************/

extern VOS_VOID TAF_XPDS_SndPdeStartDeliverData_L2Pde(VOS_VOID);

extern VOS_UINT32 TAF_XPDS_RcvXpdsForwardPdeDataInd_L2Pde_MsaWaitPdeLocRespInfo(
    VOS_UINT32                          ulEventType,
    struct MsgCB                       *pstMsg
);

extern VOS_UINT32 TAF_XPDS_RcvTiXpdsForwardPdeDataIndExpired_L2Pde_MsaWaitPdeLocRespInfo(
    VOS_UINT32                          ulEventType,
    struct MsgCB                       *pstMsg
);

extern VOS_VOID TAF_XPDS_SndPdeReverseMsg_L2Pde(
    TAF_XPDS_ENCODE_RL_INFO_STRU       *pstEncodeRlInfo,
    TAF_XPDS_CALL_TYPE_ENUM_UINT8       enCallType
);

extern VOS_VOID TAF_XPDS_ProcPdeLocationRsp_L2Pde(VOS_VOID);

extern VOS_VOID TAF_XPDS_ProcReqFromPde_L2Pde(
    VOS_UINT32                          ulDataMask,
    TAF_XPDS_CALL_TYPE_ENUM_UINT8       enCallType
);

#if (VOS_OS_VER == VOS_WIN32)
#pragma pack()
#else
#pragma pack(0)
#endif


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif


