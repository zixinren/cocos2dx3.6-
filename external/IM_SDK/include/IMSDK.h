#ifndef _IMSDK_H__
#define _IMSDK_H__

#include "yvpacket_sdk.h"

#ifdef _MSC_VER
#ifdef  _YVIM_EXPORTS
#define YVIM_API    extern "C" __declspec(dllexport)  
#else
#define YVIM_API    /*__declspec(dllimport)*/
#endif

#else
#define YVIM_API    //extern "C"
#define _stdcall    
#endif


#define  YV_RET_SUCC      0      //�ɹ�
#define  YV_RET_FAIL      -1      //ʧ��


enum CmdChannel {
	IM_LOGIN   = 1,
	IM_FRIEND  = 2,
	IM_GROUPS  = 3,
	IM_CHAT    = 4,
	IM_CLOUND  = 5,
	IM_CHANNEL = 6,
	IM_TROOPS  = 7,
	IM_LBS     = 8,
	IM_TOOLS   = 9,
	IM_LIVE    = 10, 
};

#ifdef __cplusplus
extern "C" {
#endif

typedef void (_stdcall *YVCallBack)(enum CmdChannel type, unsigned int cmdid, YV_PARSER parser, unsigned long context);

//��ʼ��
/*
* callback: �ص�����
* context�� �ص�������
* appid�� cp appid
* dbpath������Ŀ¼·��
* test�� �Ƿ�Ϊ���Ի�����trueΪ���Ի���
* ���� 0��ʾ�ɹ���-1��ʾʧ�� 
*/
YVIM_API int  YVIM_Init(YVCallBack callback, unsigned long context, unsigned int appid, const char* path, bool test);

//�ͷ�
YVIM_API void YVIM_Release();

//��������
/*
* type: ����ģ��ID�� CmdChannelö��
* cmdid�� Э���
* parser���������ݰ����
* ���� 0��ʾ�ɹ���-1��ʾʧ��
*/
YVIM_API int  YVIM_SendCmd(enum CmdChannel type, unsigned int cmdid, YV_PARSER parser);

////���ûص���ʽ
///*
//*Ĭ�����̻߳ص�
//*main: true ���̻߳ص��� false ���̻߳ص�
//*/
YVIM_API void YVIM_SetCallBackMode(bool mode);
#ifdef __cplusplus
}
#endif

#endif