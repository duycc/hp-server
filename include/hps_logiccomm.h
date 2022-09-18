//===--------------------------- include/hps_logiccomm.h - [HP-Server] ----------------------------------*- C++ -*-===//
// brief :
//
//
// author: YongDu
// date  : 2021-09-23
//===--------------------------------------------------------------------------------------------------------------===//

#if !defined(__HPS_LOGIC_COMM_H__)
#define __HPS_LOGIC_COMM_H__

// 收发命令宏定义

#define _CMD_START 0
#define _CMD_PING _CMD_START + 0
#define _CMD_REGISTER _CMD_START + 5
#define _CMD_LOGIN _CMD_START + 6

#pragma pack(1)

typedef struct _STRUCT_REGISTER {
    int iType;
    char username[56];
    char password[40];
} STRUCT_REGISTER, *LPSTRUCT_REGISTER;

typedef struct _STRUCT_LOGIN {
    char username[56];
    char password[40];
} STRUCT_LOGIN, *LPSTRUCT_LOGIN;

#pragma pack()

#endif // __HPS_LOGIC_COMM_H__
