#ifndef _YVIM_CMDDEF_H__
#define _YVIM_CMDDEF_H__




//����ϢSOURCE
#define  CLOUDMSG_SYSTEM          "SYSTEM"
#define  CLOUDMSG_PUSH            "PUSH"
#define  CLOUDMSG_FRIEND          "P2P"
#define  CLOUDMSG_GROUP           "GROUP"

//����Ϣȷ��
#define /*uint32*/	  CLOUDMSG_ID				110				//����ϢID
#define /*string*/	  CLOUDMSG_SOURCE			111				//�Ʊ�ʾ�� {��ԴID SYSTEMϵͳ��Ϣ  PUSH ������Ϣ}



/*******************************��¼ģ��********************************
*
*			              ģ������: IM_LOGIN
*
***********************************************************************/

//���޵�¼����
#define IM_LOGIN_REQ                    0x11000
namespace x11000{
	enum{
		/*uint32*/	 userid				= 1, //�û�ID
		/*string*/	 pwd				= 2, //�û�����
		/*string*/	 pgameServiceID		= 3, //��Ϸ����ID
		/*string[]*/ wildCard			= 4, //ͨ���
		/*uint8*/    readstatus         = 5, //֪ͨ��ȡȷ�ϣ� 1Ϊ��Ҫȷ��
	};
}

//���޵�¼����
#define IM_LOGIN_RESP	                 0x11001
namespace x11001 {
	enum {
		/*uint32*/ result		= 1, //���ؽ�� ��Ϊ0��Ϊʧ��
		/*string*/ msg			= 2, //��������
		/*string*/ nickname		= 4, //�û��ǳ�
		/*uint32*/ userId		= 5, //�û�ID
		/*string*/ iconurl		= 6, //�û�ͼ���ַ
	};
}


//cp�˺ŵ�¼����
#define IM_THIRD_LOGIN_REQ				  0x11002
namespace x11002{
	enum{
		/*string*/	 tt					= 1, //cp��¼ƾ֤
		/*string*/	 pgameServiceID		= 2, //��Ϸ����ID
		/*string[]*/ wildCard			= 3, //ͨ���
		/*uint8*/    readstatus         = 4, //֪ͨ��ȡȷ�ϣ� 1Ϊ��Ҫȷ��
	};
}

//cp�˺ŵ�¼����
#define IM_THIRD_LOGIN_RESP				   0x11003
namespace x11003 {
	enum {
		/*uint32*/ result			= 1, //���ؽ�� ��Ϊ0��Ϊʧ��
		/*string*/ msg				= 2, //��������
		/*uint32*/ userid			= 3, //����ID
		/*string*/ nickName			= 4, //�û��ǳ�
		/*string*/ iconUrl			= 5, //�û�ͼ���ַ
		/*string*/ thirdUserId		= 6, //�������û�ID
		/*string*/ thirdUserName	= 7, //�������û���
	};

}

//ע��
#define IM_LOGOUT_REQ	                    0x11004
namespace x11004
{
}


//�����豸��Ϣ
#define IM_DEVICE_SETINFO                   0x11012
namespace x11012 {
	enum {
		/*string*/ imsi        = 1,
		/*string*/ imei        = 2,
		/*string*/ mac         = 3,
		/*string*/ appVersion  = 4,
		/*string*/ networkType = 5,
	};
}

//�����ɹ�֪ͨ
#define IM_RECONNECTION_NOTIFY               0x11013
namespace x11013 {
	enum {
		/*uint32*/ userid        = 1,
	};
}

//��ȡ�������˺���Ϣ
#define IM_GET_THIRDBINDINFO_REQ             0x11014
namespace x11014 {
	enum {
		/*uint32*/ appid        = 1,   
		/*string*/ uid          = 2, 
	};
}

#define IM_GET_THIRDBINDINFO_RESP            0x11015
namespace x11015 {
	enum {
		/*uint32*/ result		= 1, 
		/*string*/ msg			= 2, 
		/*uint32*/ yunvaid      = 3,   
		/*string*/ nickname     = 4,
		/*string*/ iconUrl      = 5,
		/*string*/ level        = 6,
		/*string*/ vip          = 7,
		/*string*/ ext          = 8,
	};
}

enum yv_net
{
	yv_net_disconnect = 0,
	yv_net_connect = 1,
};

//����״̬֪ͨ
#define IM_NET_STATE_NOTIFY                  0x11016
namespace x11016 {
	enum {
		/*uint8*/ state        = 1,     //yv_net
	};
}

/*******************************����ģ��********************************
*
*			              ģ������: IM_FRIEND
*
***********************************************************************/


namespace  xUserInfo {
	enum{
		/*string*/ nickname  = 1, //�û��ǳ�
		/*uint32*/ userid    = 2, //�û�ID
		/*string*/ iconurl   = 3, //�û�ͼ���ַ
		/*uint8*/  online    = 4, //�Ƿ�����
		/*string*/ userlevel = 5, //�û��ȼ�
		/*string*/ viplevel  = 6, //vip�ȼ�
		/*string*/ ext       = 7, //��չ�ֶ�
		/*uint8*/  shieldmsg = 8, //�Ƿ�����������Ϣ
		/*uint8*/  sex       = 9, //�Ա�
		/*string*/ group     = 10, //����������
		/*string*/ remark    = 11, //��ע
	};
}

namespace xSearchInfo{
	enum{
		/*uint32*/ yunvaId  = 1,
		/*string*/ userId   = 2, //�û�ID
		/*string*/ nickName = 3, //�û��ǳ�
		/*string*/ iconUrl  = 4, //�û�ͼ���ַ
		/*string*/ level    = 5, //�û��ȼ�
		/*string*/ vip      = 6, //�û�VIP�ȼ�
		/*string*/ Ext      = 7, //��չ�ֶ�
	};
}




//������Ӻ���
#define IM_FRIEND_ADD_REQ        0x12000
namespace x12000 {
	enum  {
		/*uint32*/    userid = 1, //�û�ID
		/*string*/    greet  = 2, //�ʺ���
	};
}

//������Ӻ�����Ϣ���ͻ�Ӧ
#define IM_FRIEND_ADD_RESPOND    0x12025
namespace x12025 {
	enum  {
		/*uint32*/		result   = 1, 
		/*string*/		msg		 = 2,
		/*uint32*/      userid   = 3,
	};
}

//��������֪ͨ
#define IM_FRIEND_ADD_NOTIFY    0x12002
namespace x12002 {
	enum {
		/*uint32*/ userid = 1,  //�û�ID
		/*string*/ name   = 3,  //�û�����
		/*string*/ greet  = 2,  //�ʺ���
		/*string*/ sign   = 4,	//ǩ��
		/*string*/ url    = 5,  //ͷ���ַ
	};
}

//��ͬ��/�ܾ�����Ӻ���
#define IM_FRIEND_ADD_ACCEPT   0x12003 
namespace x12003 {
	enum {
		/*uint32*/  userid = 1, //�û�ID
		/*uint8*/	affirm = 2,	//�Ƿ�ͬ�� e_addfriend_affirm
		/*string*/	greet  = 3,	//�ʺ���
	};
}

//��ͬ��/�ܾ�����Ӻ��ѻ�Ӧ
#define IM_FRIEND_ACCEPT_RESP   0x12004
namespace x12004 {
	enum {
		/*uint32*/ result = 4,    
		/*string*/ msg	  = 5,     
		/*uint32*/ userid = 1, //�û�ID
		/*uint8*/  affirm = 2, //�Ƿ�ͬ�� e_addfriend_affirm
		/*string*/ greet  = 3, //�ʺ���
	};
}

enum e_addfriend_affirm{
	af_refuse    = 0, //�ܾ�
	af_agree     = 1, //ͬ��Ӻ���(����)
	af_agree_add = 2, //ͬ��Ӻ��Ѳ��ӶԷ�Ϊ����(˫��)
};

//��ͬ��/�ܾ�����Ӻ���֪ͨ
#define IM_FRIEND_ADD_RESP      0x12001
namespace x12001 {
	enum {
		/*uint32*/ affirm = 1, //���ؽ�� e_addfriend_affirm
		/*uint32*/ userid = 2, //�û�ID
		/*string*/ name   = 3, //�û�����
		/*string*/ url    = 4, //ͷ���ַ
		/*string*/ greet  = 5, //�ʺ���
	};
}

enum e_delfriend{
	df_exit_in_list     = 0, //ֻ���ҵĺ����б���ɾ��
	df_remove_from_list = 1, //˫��ɾ��
};

//ɾ����������
#define IM_FRIEND_DEL_REQ   0x12005
namespace x12005 {
	enum {
		/*uint32*/	del_friend	= 1,  //ɾ������id
		/*uint8*/   act         = 2,  //���� e_delfriend
	}; 
}

//ɾ�����ѷ���
#define IM_FRIEND_DEL_RESP  0x12006  
namespace x12006 {
	enum {
		/*uint32*/		result			= 1,    
		/*string*/		msg				= 2,     
		/*uint32*/	    del_friend		= 3,  //ɾ������id
		/*uint8*/       act				= 4,  //���� e_delfriend
	};
}


//ɾ������֪ͨ
#define IM_FRIEND_DEL_NOTIFY   0x12007
namespace x12007 {
	enum {
		/*uint32*/ del_friend	 = 1, //ɾ������id
		/*uint8*/  del_fromlist  = 2, //���Լ��ĺ����б���ɾ�� e_delfriend��ö���ֶ�
	};
}

//������������
#define IM_FRIEND_SEARCH_REQ   0x12018  
namespace x12018 {
	enum {
		/*string*/ keyworld = 1, //�����ؼ���
		/*uint32*/ start    = 2, //������ʼλ��
		/*uint32*/ count    = 3, //���ؽ������
	};
}

//�������ѻ�Ӧ
#define IM_FRIEND_SEARCH_RESP  0x12019  
namespace x12019 {
	enum {
		/*uint32*/		result   = 1, //�����Ϣ
		/*string*/		msg		 = 2, //������Ϣ
		/*xSearchInfo[]*/ userinfo = 3, //�û���Ϣ
	};
}

//�Ƽ�����
#define IM_FRIEND_RECOMMAND_REQ     0x12008  
namespace x12008 {
	enum {
		/*uint32*/ start = 1, //����б����ʼλ��
		/*uint32*/ count = 2, //���ؽ����Ŀ
	};
}

//�Ƽ����ѻ�Ӧ
#define IM_FRIEND_RECOMMAND_RESP   0x12009
namespace x12009 {
	enum {
		/*uint32*/		result   = 1, //�����Ϣ
		/*string*/		msg		 = 2, //������Ϣ
		/*xSearchInfo[]*/ userinfo = 3, //�û���Ϣ
	};
}

//�������Ѻ�����
enum e_oper_friend_act
{
	oper_add_blacklist = 3, //���������
	oper_del_blacklist = 4, //ɾ��������
};

//���Ѳ�������(������) 
#define IM_FRIEND_OPER_REQ		   0x12010
namespace x12010 {
	enum {
		/*uint32*/	userId = 1,	//������ID()
		/*uint32*/	operId = 2,	//������ID��Ҫ�����������id��
		/*uint8*/	act	   = 3,	//����   oper_friend_act
	};
}

//���Ѳ�����Ӧ(������)
#define IM_FRIEND_OPER_RESP	    	 0x12011
namespace x12011 {
	enum {
		/*uint32*/	result		= 5,
		/*string*/	msg			= 6, 
		/*uint32*/	userId 		= 1, //�û�ID
		/*uint32*/	operId		= 2, //����ID
		/*uint8*/	act			= 3, //����
		/*uint8*/	oper_state	= 4, //�Է�״̬
	};
}

//�����б��ѯ����
#define IM_FRIEND_LIST_REQ		     0x12028
namespace x12028{
	enum {
		/*string*/ group        = 1, //���������ƣ������ʾ����������
	};
}

//�����б��ѯ��Ӧ
#define IM_FRIEND_LIST_RESP		     0x12029
namespace x12029{
	enum {
		/*uint32*/		result	 = 2,
		/*string*/		msg		 = 3,
		/*xUserInfo[]*/ userinfo = 1, //�û���Ϣ
	};
}

//�����б�����
#define IM_FRIEND_LIST_NOTIFY		  0x12012  
namespace x12012{
	enum {
		/*xUserInfo[]*/ userinfo = 1, //�û���Ϣ
	};
}

//�������б��ѯ����
#define IM_FRIEND_BLACKLIST_REQ		     0x12030
namespace x12030{
	enum {
		
	};
}

//�������б��ѯ��Ӧ
#define IM_FRIEND_BLACKLIST_RESP		 0x12031
namespace x12031{
	enum {
		/*uint32*/		result	 = 2,
		/*string*/		msg		 = 3,
		/*xUserInfo[]*/ userinfo = 1, //�û���Ϣ
	};
}

//�������б�����
#define IM_FRIEND_BLACKLIST_NOTIFY       0x12013
namespace x12013 {
	enum {
		/*xUserInfo[]*/ userinfo = 1, //�û���Ϣ
	};
}


namespace xNearChatInfo
{
	enum
	{
		/*string*/ nickname  = 1, //�û��ǳ�
		/*uint32*/ userid    = 2, //�û�ID
		/*string*/ iconurl   = 3, //�û�ͷ���ַ
		/*uint8*/  online    = 4, //�Ƿ�����
		/*string*/ userlevel = 5, //�û��ȼ�
		/*string*/ viplevel  = 6, //�û�VIP�ȼ�
		/*string*/ ext       = 7, //��չ�ֶ�
		/*uint8*/  shieldmsg = 8, //�Ƿ�����������Ϣ
		/*uint8*/  sex       = 9, //�Ա�
		/*string*/ group     = 10, //����������
		/*string*/ remark    = 11, //��ע
		/*uint32*/ times     = 12, //�������ʱ��,��λ���룩
	};
}


namespace xRecentConactList {
	enum e_recent_user {
		/*uint32*/        endId    = 1, //��������
		/*uint32*/        unread   = 2, //δ����Ϣ��
		/*xP2PChatMsg*/   msg      = 3, //���һ����Ϣ
		/*xNearChatInfo*/ user     = 4,
	};
}

//�����ϵ���б��ѯ����
#define IM_FRIEND_NEARLIST_REQ		0x12032
namespace x12032{
	enum {
		
	};
}

//�����ϵ���б��ѯ��Ӧ
#define IM_FRIEND_NEARLIST_RESP		0x12033
namespace x12033{
	enum {
		/*uint32*/		result	 = 2,
		/*string*/		msg		 = 3,
		/*xRecentConactList[]*/ recent = 1, //�û���Ϣ
	};
}

/*�����ϵ������*/
#define IM_FRIEND_NEARLIST_NOTIFY    0x12014
namespace x12014 {
	enum {
		/*xRecentConactList[]*/  recent = 1, //�����ϵ�� xRecentConactList
	};
}

//����״̬
enum e_friend_status{
	fs_offline = 0, //����
	fs_online  = 1, //����						
};

/*����״̬����*/
#define IM_FRIEND_STATUS_NOTIFY    0x12015
namespace x12015 {
	enum {
		/*uint32*/ userid = 1, //�û�ID
		/*uint8*/  status = 2, //����״̬ e_status
	};
}

//���ú�����Ϣ
#define IM_FRIEND_INFOSET_REQ	0x12016
namespace x12016 {
	enum {
		/*uint32*/	friendId = 1, //����ID
		/*string*/	group	 = 2, //����������
		/*string*/	note	 = 3, //���ѱ�ע
	};
}

#define IM_FRIEND_INFOSET_RESP	0x12017
namespace x12017 {
	enum {
		/*uint32*/	result		= 4, //				
		/*string*/	msg			= 5, //������Ϣ
		/*uint32*/	friendId	= 1, //����ID				
		/*string*/	group		= 2, //����������
		/*string*/	note		= 3, //���ѱ�ע
	};
}

//��ȡ������Ϣ
#define IM_USER_GETINFO_REQ       0x12020
namespace x12020 {
	enum {
		/*uint32*/ userid = 1, //�û�ID
	};
}

#define IM_USER_GETINFO_RESP      0x12021
namespace x12021 {
	enum {
		/*uint32*/  result    = 8,
		/*string*/  msg		  = 9,     //������Ϣ
		/*uint32*/  userid    = 1,
		/*uint8*/   sex       = 2,     //�Ա�
		/*string*/  nickname  = 3,     //�ǳ�
		/*string*/  headicon  = 4,     //ͼ���ַ
		/*string*/  userlevel = 5,     //�û��ȼ�
		/*string*/  viplevel  = 6,     //�û�VIP�ȼ�
		/*string*/  ext       = 7,     //��չ�ֶ�
	};
}

//�޸ĸ�����Ϣ
#define IM_USER_SETINFO_REQ      0x12022
namespace x12022 {
	enum{
		/*string*/  userid    = 1,      //cp�û�id
		/*string*/  nickname  = 2,      //�û��ǳ�
		/*string*/  iconurl   = 3,      //�û�ͼ���ַ
		/*string*/  userlevel = 4,      //�û��ȼ�
		/*string*/  viplevel  = 5,      //vip�ȼ�
		/*string*/  ext       = 6,      //��չ�ֶ�
	};
}

//�޸ĸ�����Ϣ��Ӧ
#define IM_USER_SETINFO_RESP      0x12023
namespace x12023 {
	enum{
		/*uint32*/		result   = 1, 
		/*string*/		msg		 = 2,
	};
}

//���Ѹ�����Ϣ�޸�֪ͨ
#define IM_USER_SETINFO_NOTIFY      0x12024
namespace x12024 {
	enum{
		/*uint32*/  userid    = 1, //yunva id
		/*string*/  nickname  = 2, //�û��ǳ�
		/*string*/  iconurl   = 3, //�û�ͼ���ַ
		/*string*/  userlevel = 4, //�û��ȼ�
		/*string*/  viplevel  = 5, //vip�ȼ�
		/*string*/  ext       = 6, //��չ�ֶ�
	};
}

//ɾ�������ϵ��
#define IM_REMOVE_CONTACTES_REQ      0x12026
namespace x12026 {
	enum{
		/*uint32[]*/  userid    = 1,      //ɾ���û�id����
	};
}

//ɾ�������ϵ����Ӧ
#define IM_REMOVE_CONTACTES_RESP      0x12027
namespace x12027 {
	enum{
		/*uint32*/		  result    = 1, 
		/*string*/		  msg       = 2,
		/*uint32*/        userid    = 3,  
	};
}

/*******************************Ⱥģ��********************************
*
*			              ģ������: IM_GROUPS
*
**********************************************************************/

namespace xGroupUser {
	enum {
		/*uint32*/	userId			= 1, //�û�ID
		/*string*/  nickname        = 2, //�û��ǳ�
		/*string*/  iconurl         = 3, //ͷ��
		/*uint8*/   sex             = 4, //�Ա�
		/*string*/	alias			= 5, //��Ƭ
		/*uint8*/	role			= 6, //��ɫ
		/*uint8*/	level			= 7, //�ȼ�
		/*uint32*/	grade			= 8, //����
		/*uint32*/	lately_online	= 9, //���һ������ʱ��
		/*uint8*/	online			= 10, //�Ƿ�����
	};
}

//Ⱥ�û��б�
#define IM_GROUP_USERLIST_NOTIFY  0x13000
namespace x13000 {
	enum {
		/*uint32*/     groupid     = 1, //ȺID
		/*object[]*/   xGroupUser  = 2,	//�û��б�
	};
}

//�޸�����֪ͨ
#define IM_GROUP_USERMDY_NOTIFY	   0x13001
namespace x13001 {
	enum {
		/*uint32*/  groupid         = 1, //ȺID
		/*uint32*/	userId			= 2, //�û�ID				
		/*string*/	name			= 3, //Ⱥ����
		/*string*/	icon			= 4, //Ⱥͼ��
		/*string*/	announcement	= 5, //Ⱥ����
		/*uint8*/	verify			= 6, //��֤��ʽ
		/*string*/	alias			= 8, //��Ƭ�޸�
	};
}

enum e_groupverify {
	gv_allow	  =	1,	//����Ҫ��֤
	//gv_answer	  =	2,	//������֤
	gv_audit	  =	3,	//����Ա���
	gv_not_allow  =	4,	//Ⱥ���������
};

//����Ⱥ
#define IM_GROUP_CREATE_REQ     0x13002   
namespace x13002 {
	enum {
		/*uint32*/ verify     = 1, //Ⱥ��֤��ʽ e_groupverify
		/*string*/ name       = 2, //Ⱥ����
		/*string*/ iconUrl    = 3, //Ⱥͷ��
	};
}

/*����Ⱥ��Ӧ*/
#define IM_GROUP_CREATE_RESP      0x13003
namespace x13003 {
	enum {
		/*uint32*/ result  = 1, //�������
		/*string*/ msg     = 2, //������Ϣ
		/*uint32*/ groupid = 3, //ȺID
	};
}

/*����Ⱥ*/
#define IM_GROUP_SEARCH_REQ     0x13004   
namespace x13004 {
	enum {
		/*uint32*/ groupid = 1, //ȺID
	};
}

/*����Ⱥ��Ӧ*/
#define IM_GROUP_SEARCH_RESP      0x13005
namespace x13005 {
	enum {
		/*uint32*/ result       = 1, //�����Ϣ
		/*string*/ msg          = 2, //������Ϣ
		/*uint32*/ groupid      = 3, //ȺID
		/*uint32*/ verify       = 4, //Ⱥ��֤��ʽ
		/*string*/ name         = 5, //Ⱥ����
		/*string*/ iconurl      = 6, //ͼ��
		/*uint32*/ numbercount  = 7, //�ܹ�����
		/*uint32*/ currentnum   = 8, //��������
		/*uint32*/ ownerid      = 9, //ӵ����ID
		/*string*/ announcement = 10,//Ⱥ����

	};
}

//����Ⱥ
#define IM_GROUP_JOIN_REQ        0x13006 
namespace x13006  {
	enum {
		/*uint32*/ groupid = 1, //ȺID
		/*string*/ greet   = 2, //�ʺ���
	};
}

enum e_joingroup {
	jg_refuse = 0, //�ܾ�
	jg_agree  = 1, //ͬ��
};

/*�����Ⱥ���ؽ��֪ͨ*/
#define IM_GROUP_JOIN_RESP      0x13009
namespace x13009 {
	enum {
		/*uint32*/ result    = 1, //�������          
		/*string*/ msg       = 2, //������Ϣ
		/*uint32*/ groupid   = 3, //ȺID
		/*uint32*/ userid    = 4, //�û�ID
		/*uint8*/  agree     = 5, //�Ƿ�ͬ�����Ⱥ e_joingroup
		/*string*/ groupname = 6, //Ⱥ����
		/*string*/ greet     = 7, //�ʺ���
		/*string*/ iconurl   = 8, //�û�ͷ���ַ
	};
}

//����Ⱥ֪ͨ
#define IM_GROUP_JOIN_NOTIFY    0x13007   
namespace x13007 {
	enum {
		/*uint32*/ groupid   = 1, //ȺID
		/*uint32*/ userid    = 2, //�û�ID
		/*string*/ username  = 3, //�û���
		/*string*/ groupname = 4, //Ⱥ��
		/*string*/ greet     = 5, //�ʺ���
		/*string*/ iconurl   = 6, //ͼ���ַ
	};
}

//ͬ��ܾ���Ⱥ
#define IM_GROUP_JOIN_ACCEPT    0x13008
namespace x13008 {
	enum {
		/*uint32*/ groupid = 1, //ȺID
		/*uint32*/ userid  = 2, //�û��������ߣ�ID
		/*uint8*/  agree   = 3, //e_joingroup 
		/*string*/ greet   = 4, //�ܾ�ԭ��
	};
}

#define IM_GROUP_JOIN_ACCEPT_RESP    0x13040
namespace x13040 {
	enum {
		/*uint32*/ result	= 1,	
		/*string*/ msg		= 2,	
		/*uint32*/ groupid  = 3,	//ȺID
		/*uint32*/ userid   = 4,	//�û��������ߣ�ID
		/*string*/ reason	= 5,	//ԭ��
	};
}

//��Ⱥ
#define IM_GROUP_EXIT_REQ     0x13010
namespace x13010 {
	enum {
		/*uint32*/ groupid = 1, //ȺID
	};
}

//��Ⱥ��Ӧ
#define IM_GROUP_EXIT_RESP   0x13011
namespace x13011 {
	enum {
		/*uint32*/ result  = 1, //�����Ϣ 
		/*string*/ msg     = 2, //������Ϣ  
		/*uint32*/ groupid = 3, //Ⱥ����
		/*uint32*/ userid  = 4, //�û�ID
	};
}

//��Ⱥ֪ͨ
#define IM_GROUP_EXIT_NOTIFY   0x13012
namespace x13012 {
	enum {
		/*uint32*/ groupid = 1, //Ⱥ����
		/*uint32*/ userid  = 2, //�û�ID
	};
}

//Ⱥ������Ϣ����
enum e_group_msg{
	gm_nosupport = 0, //��֧��
	gm_support   = 1, //֧��
};

/*�޸�Ⱥ����*/
#define IM_GROUP_MODIFY_REQ  0x13013   
namespace x13013 {
	enum {
		/*uint32*/ groupid      = 1, //ȺID
		/*string*/ name         = 2, //Ⱥ����
		/*string*/ icon         = 3, //Ⱥͼ��
		/*string*/ announcement = 4, //Ⱥ����
		/*uint8*/  verify       = 5, //��֤��ʽ
		/*uint8*/  msg_set      = 6, //Ⱥ��Ϣ����
		/*string*/ alias        = 8,//��Ƭ�޸�
	};
}

//�޸�Ⱥ������Ӧ
#define IM_GROUP_MODIFY_RESP  0x13014  
namespace x13014 {
	enum {
		/*uint32*/ result       = 1, //�����Ϣ         
		/*string*/ msg          = 2, //������Ϣ   
		/*uint32*/ groupid      = 3, //ȺID 
		/*string*/ name         = 4, //Ⱥ����
		/*string*/ icon         = 5, //Ⱥͼ��
		/*string*/ announcement = 6, //Ⱥ����
		/*uint8*/  verify       = 7, //��֤��ʽ
		/*uint8*/  msg_set      = 8, //Ⱥ��Ϣ����
		/*string*/ alias        = 10,//��Ƭ�޸�
	};
}

//ת��Ⱥ������
#define IM_GROUP_SHIFTOWNER_REQ   0x13015
namespace x13015 {
	enum {
		/*uint32*/ groupid = 1, //ȺID
		/*uint32*/ userid  = 2, //�û�ID
	};
}

//ת��Ⱥ��֪ͨ
#define IM_GROUP_SHIFTOWNER_NOTIFY   0x13016
namespace x13016 {
	enum {

		/*uint32*/ groupid = 1, //ȺID
		/*uint32*/ userid  = 2, //�û�ID
		/*uint32*/ shiftid = 3, //ת�ƶ���
	};
}

//ת��Ⱥ����Ӧ
#define IM_GROUP_SHIFTOWNER_RESP   0x13017
namespace x13017 {
	enum {
		/*uint32*/ result  = 1, //�����Ϣ      
		/*string*/ msg     = 2, //������Ϣ
		/*uint32*/ groupid = 3, //ȺID
		/*uint32*/ userid  = 4, //�û�ID
		/*uint32*/ shiftid = 5,  //ת�ƶ���
	};
}

//�߳�Ⱥ��Ա
#define IM_GROUP_KICK_REQ    0x13018
namespace x13018 {
	enum {
		/*uint32*/ groupid = 1, //ȺID
		/*uint32*/ userid  = 2, //�û�ID
	};
}

//�߳�Ⱥ��Ա֪ͨ
#define IM_KGROUP_KICK_NOTIFY   0x13019
namespace x13019 {
	enum {
		/*uint32*/ groupid   = 1, //ȺID
		/*uint32*/ userid    = 2, //�û�ID
		/*uint32*/ kickid    = 3, //���߳�ԱID
		/*string*/ groupname = 4, //Ⱥ����
	};
}

#define IM_GROUP_KICK_RESP   0x13020
namespace x13020 {
	enum {
		/*uint32*/ result  = 1, //�����Ϣ     
		/*string*/ msg     = 2, //������Ϣ
		/*uint32*/ groupid = 3, //ȺID
	};
}

//���������Ⱥ
#define IM_GROUP_INVITE_REQ   0x13021
namespace x13021 {
	enum {
		/*uint32*/ groupid = 1, //ȺID
		/*uint32*/ userid  = 2, //�������û�ID
		/*string*/ greet   = 3, //�ʺ���
	};
}

//���������Ⱥ��Ӧ
#define IM_GROUP_INVITE_RESPON   0x13041
namespace x13041 {
	enum {
		/*uint32*/ result  = 1, //�����Ϣ     
		/*string*/ msg     = 2, //������Ϣ
		/*uint32*/ groupid = 3, //ȺID
		/*uint32*/ invitedid  = 4, //�������û�ID
	};
}

//��������Ⱥ֪ͨ
#define IM_GROUP_INVITE_NOTIFY   0x13022
namespace x13022 {
	enum {
		/*uint32*/ groupid    = 1, //ȺID
		/*uint32*/ inviteid   = 2, //�����û�ID
		/*string*/ invitename = 3, //�����û���
		/*string*/ greet      = 4, //�ʺ���
		/*string*/ groupname  = 5, //Ⱥ����
		/*string*/ groupicon  = 6, //Ⱥͼ���ַ
	};
}

//�������û����ؽ��
enum e_group_invite {
	gi_refuse = 0, //�ܾ�
	gi_agree  = 1, //ͬ��
};

//��������ͬ���ܾ�Ⱥ����
#define IM_GROUP_INVITE_ACCEPT   0x13023
namespace x13023 {
	enum {
		/*uint32*/ groupid	 = 4, //ȺID
		/*string*/ invitename = 5, //�����û���
		/*uint32*/ inviteid  = 1, //�����û�ID
		/*uint32*/ agree     = 2, //�Ƿ�ͬ����Ⱥ e_group_invite
		/*string*/ greet     = 3, //�ʺ���
	};
}

//��������ͬ���ܾ�Ⱥ������Ӧ
#define IM_GROUP_INVITE_ACCEPT_RESP   0x13042
namespace x13042 {
	enum {
		/*uint32*/ result    = 1, //�����Ϣ      
		/*string*/ msg       = 2, //������Ϣ
		/*uint32*/ groupid   = 3, //ȺID
		/*uint32*/ inviteid  = 4, //�����û�ID
	};
}

//��������ͬ���ܾ�Ⱥ����֪ͨ
#define IM_GROUP_INVITE_RESP   0x13024
namespace x13024 {
	enum {
		/*uint32*/ groupid   = 3, //ȺID
		/*uint32*/ inviteid  = 4, //�������û�ID
		/*string*/ groupname = 5, //Ⱥ����
		/*uint8*/  agree     = 6, //�Ƿ�ͬ����Ⱥ e_group_invite
		/*string*/ greet	 = 7, //�ʺ���
	};
}

//Ⱥ��Ա��ɫ
enum e_group_role{
	gr_owners	= 2, //Ⱥ������
	gr_admin	= 3, //Ⱥ������
	gr_number	= 4, //Ⱥ��Ա
	gr_visitor	= 10,//Ⱥ�ο�
};

//����Ⱥ��Ա��ɫ����
#define IM_GROUP_SETROLE_REQ   0x13025
namespace x13025 {
	enum {
		/*uint32*/ groupid = 1, //ȺID
		/*uint32*/ userid  = 2, //�û�ID
		/*uint8*/  role    = 3, //�û���ɫ  e_group_role
	};
}

//����Ⱥ��Ա��ɫ����
#define IM_GROUP_SETROLE_RESP    0x13026
namespace x13026 {
	enum {
		/*uint32*/ result  = 1, //�����Ϣ     
		/*string*/ msg     = 2, //������Ϣ
		/*uint32*/ groupid = 3, //ȺID
	};
}

//����Ⱥ��Ա��ɫ֪ͨ
#define IM_GROUP_SETROLE_NOTIFY    0x13027
namespace x13027 {
	enum {
		/*uint32*/ groupid  = 1, //ȺID
		/*uint32*/ operid   = 2, //������ID
		/*uint32*/ byuserid = 3, //��������ID
		/*uint32*/ role     = 4, //�޸ĺ��ɫ e_group_role
	};
}

//��ɢȺ����
#define IM_GROUP_DISSOLVE_REQ  0x13028
namespace x13028 {
	enum {
		/*uint32*/ grouid = 1, //ȺID
	};
}

//��ɢȺ��Ӧ
#define IM_GROUP_DISSOLVE_RESP  0x13029
namespace x13029 {
	enum {
		/*uint32*/ result = 1, //�����Ϣ       
		/*string*/ msg    = 2, //������Ϣ
		/*uint32*/ grouid = 3, //ȺID
	};
}

//����Ա�޸�������Ƭ
#define IM_GROUP_SETOTHER_REQ   0x13030
namespace x13030 {
	enum {
		/*uint32*/ groupid = 1, //ȺID
		/*uint32*/ userid  = 2, //�û�ID
		/*string*/ alias   = 3, //�û���Ƭ
	};
}

//�޸�������Ƭ֪ͨ
#define IM_GROUP_SETOTHER_NOTIFY   0x13031
namespace x13031 {
	enum {
		/*uint32*/ groupid = 1, //ȺID
		/*uint32*/ userid  = 2, //�û�ID
		/*string*/ alias   = 3, //�û���Ƭ
	};
}

//�޸�������Ƭ����
#define IM_GROUP_SETOTHER_RESP   0x13032
namespace x13032 {
	enum {
		/*uint32*/ result  = 1, //�����Ϣ     
		/*string*/ msg     = 2, //������Ϣ
		/*uint32*/ groupid = 3, //ȺID
	};
}

//Ⱥ����֪ͨ(Ⱥ�б�)
#define IM_GROUP_PROPERTY_NOTIFY   0x13033
namespace x13033 {
	enum {
		/*uint32*/  groupid         = 1, //ȺID
		/*string*/	name			= 2, //Ⱥ����
		/*string*/	icon			= 3, //Ⱥͼ��
		/*string*/	announcement	= 4, //Ⱥ����
		/*uint8*/	level			= 5, //Ⱥ�ȼ�
		/*uint8*/	verify			= 6, //��֤��ʽ
		/*uint32*/	number_limit	= 7, //��������
		/*uint32*/	owner			= 8, //Ⱥ������
		/*uint8*/	msg_set			= 9, //Ⱥ��Ϣ����
		/*uint32*/  user_count      = 11,//��ǰ�û���
		/*uint8*/   role            = 12,//����Ⱥ�еĽ�ɫ

	};
}

enum group_member_online {
	gm_status_online = 1,    //����
};

//Ⱥ��Ա����
#define IM_GROUP_MEMBER_ONLINE   0x13034
namespace x13034 {
	enum {
		/*uint32*/ groupid = 1, //ȺID
		/*uint32*/ userid  = 2, //�û�ID
		/*uint8*/  online  = 3, //�û��Ƿ����� group_member_online
	};
}

//�³�Ա����Ⱥ
#define IM_GROUP_USERJOIN_NOTIFY  0x13035
namespace x13035 {
	enum {
		/*uint32*/     groupid = 1, //ȺID
		/*xGroupUser*/ xUser   = 2, //�û���Ϣ
	};
}




/*******************************����ģ��********************************
*
*			              ģ������: IM_CHAT
*
* ע���Ǻ��ѿ���ͨ���Է�ID������Ϣ
*
***********************************************************************/

//��������-�ı�
#define IM_CHAT_FRIEND_TEXT_REQ  0x14000
namespace x14000 {
	enum {
		/*uint32*/ userid = 1, //����ID
		/*string*/ data   = 2, //��Ϣ����
		/*string*/ ext    = 3, //��չ�ֶ�(�ɲ���)
		/*string*/ flag   = 4, //��Ϣ���(�ɲ���)
	};
}

//��������-ͼ��
#define IM_CHAT_FRIEND_IMAGE_REQ  0x14001
namespace x14001 {
	enum {
		/*uint32*/ userid = 1, //����ID
		/*string*/ image  = 2, //ͼƬ·��
		/*string*/ ext    = 3, //��չ�ֶ�(�ɲ���)
		/*string*/ flag   = 4, //��Ϣ���(�ɲ���)
	};
}


//�������� - ����
#define IM_CHATI_FRIEND_AUDIO_REQ  0x14002
namespace x14002 {
	enum {
		/*uint32*/ userid = 1, //����ID
		/*string*/ file   = 2, //�����ļ�·��(�����������ļ�URL)
		/*uint32*/ time   = 3, //�ļ�����ʱ��(��)
		/*string*/ txt    = 4, //�����ı�(��ѡ)
		/*string*/ ext    = 5, //��չ�ֶ�(�ɲ���)
		/*string*/ flag   = 6, //��Ϣ���(�ɲ���)
	};
}

enum e_chat_msgtype {
	chat_msgtype_image = 0, //ͼ���ļ�
	chat_msgtype_audio = 1, //��Ƶ�ļ�
	chat_msgtype_text  = 2, //�ı���Ϣ
};

//��������֪ͨ
#define IM_CHAT_FRIEND_NOTIFY 0x14003
namespace x14003 {
	enum {
		/*uint32*/ userid    = 1,  //����ID
		/*string*/ name      = 2,  //��������
		/*string*/ signature = 3,  //����ǩ��
		/*string*/ headurl   = 4,  //ͷ���ַ
		/*uint32*/ sendtime  = 5,  //����ʱ��
		/*uint8*/  type      = 6,  //���� e_chat_msgtype
		/*string*/ data      = 7,  //��Ϊ�ı����ͣ�������Ϣ���ݣ���Ϊ��Ƶ�������ļ�url����Ϊͼ�����Ǵ�ͼ���ַ
		/*string*/ imageurl  = 8,  //��ΪͼƬ������Сͼ���ַ
		/*uint32*/ audiotime = 9,  //��Ϊ��Ƶ�ļ�, �����ļ�����ʱ��(��)
		/*string*/ attach    = 10, //��Ϊ��Ƶ�ļ������Ǹ����ı�(û�и����ı�ʱΪ��)
		/*string*/ ext1      = 11, //��չ�ֶ�

	};
}



#define IM_CHATT_FRIEND_RESP  0x14004
namespace x14004 {
	enum {
		/*uint32*/ result       = 1,  
		/*string*/ msg          = 2, 
		/*uint8*/  type         = 3,
		/*uint32*/ userid       = 4,   //����ID
		/*string*/ flag         = 5,
		/*uint32*/ indexid      = 6,   //��Ϣ����id
		/*string*/ text         = 7,   //��������
		/*string*/ audiourl     = 8,   //¼���ļ�url
		/*uint32*/ audiotime    = 9,   //¼��ʱ��
		/*string*/ imageurl1    = 10,  //ͼƬԭͼ
		/*string*/ imageurl2    = 11,  //����ͼ
		/*string*/ ext1         = 13,  //��չ�ֶ�
	};
}

//Ⱥ�� - �ı�
#define IM_CHAT_GROUP_TEXT_REQ    0x14006
namespace x14006 {
	enum {
		/*uint32*/ groupid = 1, //ȺID
		/*string*/ text    = 2, //�ı���Ϣ
		/*string*/ ext     = 3, //��չ�ֶ�
		/*string*/ flag	   = 4, //��Ϣ���(�ɲ���)
	};
}

//Ⱥ�� -  ͼƬ
#define IM_CHAT_GROUP_IMAGE_REQ    0x14007
namespace x14007 {
	enum {
		/*uint32*/ groupid  = 1, //ȺID
		/*string*/ image    = 2, //ͼ��·��
		/*string*/ ext      = 3, //��չ�ֶ�
		/*string*/ flag		= 4, //��Ϣ���(�ɲ���)
	};
}

//Ⱥ�� - ����
#define IM_CHATA_GROUP_AUDIO_REQ    0x14008
namespace x14008 {
	enum {
		/*uint32*/ groupid = 1, //ȺID
		/*string*/ file    = 2, //��Ƶ�ļ�·��
		/*uint32*/ time    = 3, //��Ƶ�ļ�����ʱ��(��)
		/*string*/ txt     = 4, //�����ı�(��ѡ)
		/*string*/ ext     = 5, //��չ�ֶ�
		/*string*/ flag	   = 6, //��Ϣ���(�ɲ���)
	};
}

//Ⱥ��������
#define IM_CHAT_GROUP_NOTIFY    0x14009
namespace x14009 {
	enum {
		/*uint32*/ groupid   = 1, //ȺID
		/*uint32*/ sendid    = 2, //������ID
		/*uint32*/ time      = 3, //����ʱ��
		/*string*/ groupicon = 4, //Ⱥͷ���ַ
		/*string*/ groupname = 5, //Ⱥ����
		/*uint8*/  type      = 6, //��Ϣ���� e_chat_msgtype
		/*string*/ data      = 7, //��Ϊ�ı����ͣ�������Ϣ���ݣ���Ϊ��Ƶ�������ļ���ַ����Ϊͼ�����Ǵ�ͼ���ַ
		/*string*/ imageurl  = 8, //��ΪͼƬ������Сͼ���ַ
		/*uint32*/ audiotime = 9, //��Ϊ��Ƶ�ļ�, ��Ϊ�ļ�����ʱ��(��)
		/*string*/ attach    = 10, //��Ϊ��Ƶ�ļ�����Ϊ�����ı�(û�и����ı�ʱΪ��)
		/*string*/ ext1      = 11, //��չ�ֶ�

	};
}

//Ⱥ����Ϣ������Ӧ
#define IM_CHAT_GROUPMSG_RESP  0x14010
namespace x14010 {
	enum {
		/*uint32*/ result       = 1,  
		/*string*/ msg          = 2, 
		/*uint32*/ groupid      = 3, //ȺID
		/*uint32*/ index        = 4, //��Ϣ���
	};
}




/*******************************��������Ϣģ��********************************
*
*			              ģ������: IM_CLOUND
*
****************************************************************************/

//�������߽ṹ
namespace xP2PChatMsg
{
	enum
	{
		/*uint32*/ userid    = 1,  //����ID
		/*string*/ name      = 2,  //��������
		/*string*/ signature = 3,  //����ǩ��
		/*string*/ headurl   = 4,  //ͷ���ַ
		/*uint32*/ sendtime  = 5,  //����ʱ��
		/*uint8*/  type      = 6,  //���� e_chat_msgtype
		/*string*/ data      = 7,  //��Ϊ�ı����ͣ�������Ϣ���ݣ���Ϊ��Ƶ�������ļ�url����Ϊͼ�����Ǵ�ͼ���ַ
		/*string*/ imageurl  = 8,  //��ΪͼƬ������Сͼ���ַ
		/*uint32*/ audiotime = 9,  //��Ϊ��Ƶ�ļ�, �����ļ�����ʱ��(��)
		/*string*/ attach    = 10, //��Ϊ��Ƶ�ļ������Ǹ����ı�(û�и����ı�ʱΪ��)
		/*string*/ ext1      = 11, //��չ�ֶ�
	};
}

//Ⱥ���߽ṹ
namespace xGroupChatMsg
{
	enum {
		/*uint32*/ groupid   = 1, //ȺID
		/*uint32*/ sendid    = 2, //������ID
		/*uint32*/ time      = 3, //����ʱ��
		/*string*/ groupicon = 4, //Ⱥͷ���ַ
		/*string*/ groupname = 5, //Ⱥ����
		/*uint8*/  type      = 6, //��Ϣ���� e_chat_msgtype
		/*string*/ data      = 7, //��Ϊ�ı����ͣ�������Ϣ���ݣ���Ϊ��Ƶ�������ļ���ַ����Ϊͼ�����Ǵ�ͼ���ַ
		/*string*/ imageurl  = 8, //��ΪͼƬ������Сͼ���ַ
		/*uint32*/ audiotime = 9, //��Ϊ��Ƶ�ļ�, ��Ϊ�ļ�����ʱ��(��)
		/*string*/ attach    = 10, //��Ϊ��Ƶ�ļ�����Ϊ�����ı�(û�и����ı�ʱΪ��)
		/*string*/ ext1      = 11, //��չ�ֶ�
	};
}

//����Ϣ֪ͨ
#define IM_CLOUDMSG_NOTIFY           0x15002
namespace x15002 {
	enum {
		/*string*/ source  = 1, //��Դ
		/*uint32*/ id      = 2, //���Ǻ�����Ϣ, ��Ϊ����ID
		/*uint32*/ beginid = 3, //��ʼ����
		/*uint32*/ endid   = 4, //��������
		/*uint32*/ time    = 5, //��������ʱ��
		/*xMsg*/   packet  = 6, //������������  xP2PChatMsg,  xGroupChatMsg
		/*uint32*/ unread  = 7,	//δ����Ϣ��
	};
}

//��������Ϣ
#define IM_CLOUDMSG_LIMIT_REQ         0x15003
namespace x15003 {
	enum {
		/*string*/ source = 1, //��Դ(������Ϣ, Ⱥ��Ϣ)
		/*uint32*/ id     = 2, //���Ǻ�����Ϣ, ��Ϊ����ID
		/*uint32*/ index  = 3, //��ʼλ��: 0��ʾ�����λ����ȡ����indexΪ0ʱlimitΪ��ֵ��limit����ֵ <= 20����Ч
		/*int32*/  limit  = 4, //��ȡ����: ������ʾ���ϻ�ȡ���������»�ȡ
	};
}

//��������Ϣ��Ӧ
#define IM_CLOUDMSG_LIMIT_RESP        0x15004
namespace x15004 {
	enum {
		/*uint32*/ result  = 1, //�����Ϣ     
		/*string*/ msg     = 2, //������Ϣ
		/*string*/ source  = 3, //��Դ(userId ������Ϣ)
		/*uint32*/ id      = 4, //���Ǻ�����Ϣ, ��Ϊ����ID
		/*uint32*/ index   = 5, //��ʼλ��
		/*uint32*/ limit   = 6, //��ȡ����
	};
}

//����Ϣ��Ӧ֪ͨ
#define IM_CLOUDMSG_LIMIT_NOTIFY       0x15005
namespace x15005 {
	enum {
		/*string*/		source	= 1, //��Դ
		/*uint32*/      id      = 2, //���Ǻ�����Ϣ, ��Ϊ����ID
		/*uint32*/		count	= 3, //��Ϣ��
		/*uint32*/		indexId	= 4, //�����صĵ�һ������Ϣ����
		/*uint32*/		ptime	= 5, //�����صĵ�һ������Ϣʱ��
		/*xMsg[]*/		packet	= 6, //��������list xP2PChatMsg,  xGroupChatMsg
	};
}

//PUSH��Ϣ
#define IM_MSG_PUSH                   0x15006
namespace x15006 {
	enum {
		/*uint32*/ appid = 1,
		/*string*/ data  = 2, //json
	};
}

//����Ϣȷ��
#define IM_CLOUDMSG_READ_STATUS       0x15007
namespace x15007 {
	enum {
		/*uint32*/      id      = 1,  //��Ӧ CLOUDMSG_ID::110
		/*string*/		source	= 2,  //��Ӧ CLOUDMSG_SOURCE::111
	};
}


#define IM_CLOUDMSG_READ_RESP         0x15009
namespace x15009 {
	enum {
		/*uint32*/      result  = 1, 
		/*string*/      msg     = 2, 
		/*uint32*/      id      = 3,  
		/*string*/		source	= 4, 
	};
}


//������Ϣ����(Ⱥ��Ϣ)
#define IM_CLOUDMSG_IGNORE_REQ        0x15008
namespace x15008 {
	enum
	{
		/*string*/		source    = 1,  //��Ӧ ����ϢSOURCE
		/*uint32*/      id        = 2,  //����ID������ȺID
		/*uint32*/      index     = 3,  //���Ե���λ�ã� 0����ʾȫ������
	};
}


#define IM_CLOUDMSG_IGNORE_RESP       0x15010
namespace x15010 {
	enum
	{
		/*uint32*/      result    = 1, 
		/*string*/      msg       = 2, 
		/*string*/		source    = 3,  
		/*uint32*/      id        = 4,  
		/*uint32*/      index     = 5,  
	};
}


/*******************************Ƶ��ģ��********************************
*
*			              ģ������: IM_CHANNEL
*
************************************************************************/

//��¼ ע:��¼�˺Ŵ�����ͨ�������ֱ�ӵ�¼�� ����Ҫ�ٵ��˵�¼
#define IM_CHANNEL_LOGIN_REQ            0x16007
namespace x16007{
	enum {
		/*string*/	 pgameServiceID		= 1, //��Ϸ����ID
		/*string[]*/ wildCard			= 2, //ͨ���
	};
}

#define IM_CHANNEL_LOGIN_RESP           0x16008
namespace x16008{
	enum {
		/*uint32*/    result               = 1, 
		/*string*/    msg                  = 2, 
		/*string[]*/  wildCard			   = 3, //ͨ���
		/*string*/	  announcement		   = 4, //����
	};
}

//�˳�Ƶ��
#define IM_CHANNEL_LOGOUT_REQ            0x16009
namespace x16009{

}

#define IM_CHANNEL_LOGOUT_RESP            0x16019
namespace x16019{
	enum {
		/*uint32*/		result			= 1, 
		/*string*/		msg				= 2, 
		/*uint32*/		room_id 		= 3,	//���������
		/*uint32*/		user_id			= 4,	//�û�ID
	};
}


//�޸�ͨ���
#define IM_CHANNEL_MODIFY_REQ            0x16011
namespace x16011{
	enum {
		/*uint8*/    operate            = 1,     //0���Ƴ���1�����
		/*uint8*/    channel            = 2,     //ͨ����0-9��
		/*string*/   wildCard			= 3,     //ͨ���
	};
}

#define IM_CHANNEL_MODIFY_RESP           0x16012
namespace x16012{
	enum {
		/*uint32*/   result               = 1, 
		/*string*/   msg                  = 2, 
		/*string[]*/ wildCard			  = 3, //ͨ���
	};
}



//��ȡƵ����Ϣ����
#define IM_CHANNEL_GETINFO_REQ			0x16000

//��ȡƵ����Ϣ����
#define IM_CHANNEL_GETINFO_RESP			0x16001
namespace x16001{
	enum{
		/*uint32*/ result	= 2,
		/*string*/ msg		= 3,
		/*string[]*/	xGame_channel = 1, //��Ϸͨ��
	};
}

//����Ƶ��������Ϣ����
#define IM_CHANNEL_TEXTMSG_REQ	    	0x16002    
namespace x16002{
	enum{
		/*string*/	textMsg	 = 1, //��������
		/*string*/	wildCard = 2, //ͨ���
		/*string*/	expand	 = 3, //͸���ֶ�
		/*string*/  flag     = 4, //��Ϣ���(�ɲ���)
	};
}


//����Ƶ��������Ϣ
#define IM_CHANNEL_VOICEMSG_REQ	         0x16003
namespace x16003{
	enum{
		/*string*/	voiceFilePath	   = 1, //¼���ļ�·����(�����������ļ�URL)
		/*uint32*/	voiceDurationTime  = 2, //¼��ʱ��  ��λ(��)
		/*string*/	wildCard		   = 3, //��Ϸͨ���ַ���
		/*string*/  txt                = 4, //�����ı�(��ѡ)
		/*string*/	expand			   = 5, //͸���ֶ�
		/*string*/  flag               = 6, //��Ϣ���(�ɲ���)
	};
}

//������Ϣ��Ӧ
#define IM_CHANNEL_SENDMSG_RESP          0x16010
namespace x16010{
	enum
	{
		/*uint32*/  result             = 1, 
		/*string*/  msg                = 2, 
		/*uint8*/   type               = 3,   //type= 1 ����  type= 2 �ı�
		/*string*/	wildCard		   = 4,   //��Ϸͨ���ַ���
		/*string*/  textMsg            = 5,   //������Ϣ
		/*string*/  url                = 6,   //����URL
		/*uint32*/	voiceDurationTime  = 7,   //¼��ʱ����λ(��)
		/*string*/	expand			   = 8,   //͸���ֶ�
		/*uint8*/   shield             = 9,   //�Ƿ��������֣� 1�����ڣ�0������
		/*uint8*/	channel			   = 10,  //��Ϸͨ��
		/*string*/  flag               = 11,  //��Ϣ���(�ɲ���)
	};
}


//Ƶ���յ���Ϣ֪ͨ
#define IM_CHANNEL_MESSAGE_NOTIFY	     0x16004
namespace x16004 {
	enum {
		/*uint32*/	user_id			= 1,  //�û�ID
		/*string*/	message_body	= 2,  //��Ϣ
		/*string*/	nickname		= 3,  //�ǳ�
		/*string*/	ext1			= 4,  //��չ1
		/*string*/	ext2			= 5,  //��չ2
		/*uint8*/	channel			= 6,  //��Ϸͨ��
		/*string*/	wildcard		= 7,  //��Ϸͨ���ַ���
		/*uint32*/	message_type	= 8,  //type= 1 ����  type= 2 �ı�
		/*uint32*/  voiceDuration	= 9,  //type= 1 ����ʱ ���ֶ�Ϊ����ʱ��
		/*string*/  attach          = 10, //������Ϣ�ĸ����ı�(��ѡ)
		/*uint8*/   shield          = 11, //�Ƿ��������֣� 1�����ڣ�0������
	};
}

//Ƶ����ȡ��ʷ��Ϣ����
#define IM_CHANNEL_HISTORY_MSG_REQ       0x16005
namespace x16005{
	enum {
		/*uint32*/	index    = 1,				//��Ϣ����	(��ǰ���������,����Ϊ0�������count����¼)
		/*int32*/	count    = 2,				//��������	����Ϊindex������� ����Ϊindex��ǰ���� (ʱ������)
		/*string*/	wildcard = 3,				//��Ϸͨ���ַ���
	};
}

//room��Ϣ�б�
namespace xHistoryMsgInfo
{
	enum {
		/*uint32*/	index			= 1,			//��Ϣ����
		/*string*/	ctime			= 2,			//��Ϣʱ�� ����:2015-02 10:50:13
		/*uint32*/	user_id			= 3,			//�û�ID
		/*string*/	message_body	= 4,			//��Ϣ
		/*string*/	nickname		= 5,			//�ǳ�
		/*string*/	ext1			= 6,			//��չ1
		/*string*/	ext2			= 7,			//��չ2(��ʱ����)
		/*uint8*/	channel			= 8,			//��Ϸͨ��
		/*string*/	wildcard		= 9,			//��Ϸͨ���ַ���
		/*uint32*/	message_type	= 10,			//type= 1 ����  type= 2 �ı�
		/*uint32*/  voiceDuration	= 11,			//type= 1 ����ʱ ���ֶ�Ϊ����ʱ��
		/*string*/  attach          = 12,			//������Ϣ�ĸ����ı�(��ѡ)
		/*uint8*/   shield          = 13,           //�Ƿ��������֣� 1�����ڣ�0������
	};
}

//Ƶ����ȡ��ʷ��Ϣ����
#define IM_CHANNEL_HISTORY_MSG_RESP       0x16006
namespace x16006{
	enum {
		/*uint32*/	result				 = 2,
		/*string*/  msg					 = 3,
		/*xHistoryMsgInfo[]*/ xHistoryMsg = 1,			//��ʷ��Ϣ����list
	};
}

//Ƶ��PUSH��Ϣ֪ͨ
#define IM_CHANNEL_PUSH_MSG_NOTIFY        0x16013
namespace x16013{
    enum {
        /*string*/ type = 1,            //��Ϣ����
        /*string*/ data = 2,			//��������
    };
}

//��ȡ��ǰƵ����ز���
#define IM_CHANNEL_GET_PARAM_REQ								0x16014/*ALL*/
namespace x16014 {
	enum {
	};
}

#define IM_CHANNEL_GET_PARAM_RESP								0x16015/*ALL*/
namespace x16015 {
	enum {
		/*uint32*/  result              = 1, 
		/*string*/  msg                 = 2,
		/*string*/	announcement		= 3,	//����
	};
}


/*******************************���ӹ���ģ��********************************
*
*			              ģ������: IM_TOOLS
*
***************************************************************************/

//��ʼ¼��(�60��)  
#define	IM_RECORD_STRART_REQ	             0x19000
namespace x19000{
	enum{
		/*string*/		strfilepath	   = 1,  //¼���ļ�����·��(.amr), Ϊ�����Զ�����  
		/*string*/      ext            = 2,  //��չ���     
	};
}



//ֹͣ¼������  �ص�����¼���ļ�·����
#define	IM_RECORD_STOP_REQ		             0x19001


//ֹͣ¼������  �ص�����¼���ļ�·����
#define	IM_RECORD_STOP_RESP		             0x19002
namespace x19002{
	enum{
		/*uint32*/      result           = 4,  
		/*string*/      msg              = 5, 
		/*uint32*/		time		     = 1, //¼��ʱ��
		/*string*/		strfilepath      = 2, //¼�������ļ�·����
		/*string*/      ext              = 3,  //��չ���
	};
}

//����¼������
#define	IM_RECORD_STARTPLAY_REQ		         0x19003
namespace x19003{
	enum{
		/*string*/		strUrl		= 1, //¼��url
		/*string*/		strfilepath	= 2, //¼���ļ�·��, Ϊ�����Զ�����  
		/*string*/      ext         = 3,  //��չ���

	};
}

//�����������
#define	IM_RECORD_FINISHPLAY_RESP	         0x19004
namespace x19004{
	enum{
		/*uint32*/     result      = 1, //���Ž����0���ɹ�
		/*string*/     describe	   = 2, //����
		/*string*/     ext         = 3, //��չ���
	};
}

//����URL���ؽ���
#define	IM_RECORD_PLAY_PERCENT_NOTIFY	     0x19016
namespace x19016{
	enum{
		/*uint8*/      percent     = 1, //����URL�����ؽ��Ȱٷֱ�
		/*string*/     ext         = 2, //��չ���

	};
}



//ֹͣ��������
#define	IM_RECORD_STOPPLAY_REQ		         0x19005
namespace x190005
{
}

enum yvspeech
{
	speech_file = 0,              //�ļ�ʶ��
	speech_file_and_url = 1,      //�ļ�ʶ�𷵻�url
	speech_url = 2,               //urlʶ��
	speech_live = 3,              //ʵʱ����ʶ��(δ���)
};

//��ʼ����ʶ��
#define IM_SPEECH_START_REQ		             0x19006
namespace x19006{
	enum{
		/*string*/	  strfilepath	= 1,  //�����ļ�
		/*string*/    ext           = 2,  //��չ���
		/*uint8*/     type          = 3,  //ʶ������ yvspeech
		/*string*/    url           = 4,  //ʶ��URL
	};
}


//����ʶ����ɷ���
#define IM_SPEECH_STOP_RESP				    0x19009
namespace x19009{
	enum{
		/*uint32*/		err_id     = 1,  //0Ϊ�ɹ�
		/*string*/		err_msg    = 2,  //���صĴ�������
		/*string*/		result	   = 3,  //���
		/*string*/      ext        = 4,  //��չ���
		/*string*/      url        = 5,  //�ļ��ϴ�����URL
	};
}


//��������ʶ������
#define IM_SPEECH_SETLANGUAGE_REQ	        0x19008
namespace x19008{
	enum{
		/*uint8*/	inlanguage     = 1,     //yvimspeech_language
		/*uint8*/   outlanguage    = 2,    //yvimspeech_outlanguage
	};
}

//����ʶ������
enum yvimspeech_language
{
	im_speech_zn = 1, //����
	im_speech_ct = 2, //����
	im_speech_en = 3, //Ӣ��
};

//����ʶ�𷵻���������
enum yvimspeech_outlanguage
{
	im_speechout_simplified       = 0,  //��������
	im_speechout_traditional      = 1,  //��������
};


//�ϴ��ļ�
#define IM_UPLOAD_FILE_REQ				  0x19010
namespace x19010{
	enum{
		/*string*/		filename   = 1,   //�ļ�·��
		/*string*/      fileid     = 2,   //�ļ�ID(�ļ����ر�ʾ)
	};
}

//�ϴ��ļ���Ӧ
#define IM_UPLOAD_FILE_RESP		          0x19011
namespace x19011{
	enum{
		/*uint32*/		result	    = 1,   //���
		/*string*/      msg         = 2,   //��������
		/*string*/      fileid      = 3,   //�ļ�ID
		/*string*/      fileurl     = 4,   //�����ļ���ַ
		/*uint32*/      percent     = 5,   //��ɰٷֱ�
	};
}


//�����ļ����� 
#define IM_DOWNLOAD_FILE_REQ              0x19012
namespace x19012 {
	enum {
		/*string*/      url         = 1,   //���ص�ַ
		/*string*/      filename    = 2,   //�ļ�·��, Ϊ�����Զ�����
		/*string*/      fileid      = 3,   //�ļ�ID
	};
}

//�����ļ���Ӧ
#define IM_DOWNLOAD_FILE_RESP             0x19013
namespace x19013 {
	enum {
		/*uint32*/		result	     = 1,   //���
		/*string*/      msg          = 2,   //��������
		/*string*/      filename     = 3,   //�ļ���   
		/*string*/      fileid       = 4,   //�ļ�ID
		/*uint32*/      percent      = 5,   //��ɰٷֱ�
	};
}

//����¼����Ϣ
#define	IM_RECORD_SETINFO_REQ	          0x19014
namespace x19014{
	enum{
		/*uint32*/		times	      = 1,   //¼�����ʱ��(��)�� Ĭ��60s
		/*uint8*/       volume        = 2,   //¼�������ص��� 1�������� 0���ر�
	};
}

//¼��������С֪ͨ
#define	IM_RECORD_VOLUME_NOTIFY	          0x19015
namespace x19015{
	enum{
		/*string*/      ext           = 1,  //��չ���
		/*uint8*/       volume        = 2,  //������С(0-100)
	};
}


//�ж�URL�ļ��Ƿ����
#define IM_TOOL_HAS_CACHE_FILE            0x19017
namespace x19017{
	enum
	{
		/*string*/      url             = 1, 
	};
}

//��ȡURL��Ӧ���ļ�·�� 
#define IM_GET_CACHE_FILE_REQ             0x19018  
namespace x19018{
	enum
	{
		/*string*/      url             = 1, 
	};
}

#define IM_GET_CACHE_FILE_RESP            0x19019 
namespace x19019{
	enum
	{
		/*uint32*/		result			= 1,   //���
		/*string*/      msg				= 2,   //��������
		/*string*/      url             = 3, 
		/*string*/      filepath        = 4,   //��ȡ�����ļ�
	};
}

//������л���
#define IM_CACHE_CLEAR                     0x19020
namespace x19020{

}

#endif



