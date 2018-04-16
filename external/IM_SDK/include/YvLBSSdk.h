#ifndef _YVLBSSDK
#define _YVLBSSDK



/*******************************  LBSģ��  ********************************
*
*			              ģ������: IM_LBS
*
***************************************************************************/

//���µ���λ������
#define IM_LBS_UPDATE_LOCATION_REQ			   0x18000
namespace x18000{
}

#define IM_LBS_UPDATE_LOCATION_RESP			   0x18001
namespace x18001{
	enum
	{
		/*uint32*/		result			= 1,   //���
		/*string*/      msg				= 2,   //��������
	};
}

//��ȡλ����Ϣ����
#define IM_LBS_GET_LOCATION_REQ				   0x18002
namespace x18002{
}

#define IM_LBS_GET_LOCATION_RESP			   0x18003
namespace x18003{
	enum{
		/*uint32*/		result			= 1,    //���
		/*string*/      msg				= 2,    //��������
		/*string*/		city			= 3,	//����
		/*string*/		province		= 4,	//ʡ��
		/*string*/		district		= 5,	//��
		/*string*/		detail			= 6,	//��ϸ��ַ����
		/*string*/		longitude		= 7,	//����
		/*string*/		latitude		= 8,	//γ��
	};
}

//�������������û�(��������λ��)
#define IM_LBS_SEARCH_AROUND_REQ			   0x18004
namespace x18004{
	enum
	{
		/*uint32*/		range			= 1,	//��ѡ��������Χ��Ĭ��ֵ100000����λ����
		/*string*/		city			= 2,	//��ѡ�����ڳ���
		/*uint8*/		sex				= 3,	//��ѡ���Ա�:0 ���� 1�� 2Ů
		/*uint32*/      time			= 4,	//��ѡ���ڴ�ʱ���ڻ�Ծ�������ЧֵΪ2880��60*24*2�����죩��λ������
		/*uint32*/      pageIndex		= 5,	//�����ǰҳ��
		/*uint32*/      pageSize		= 6,	//�����ҳ���ȣ�(pageSize < 32)
		/*string*/      ext             = 7,    //�ݲ����ã���չ�ֶ�
		/*string*/		province		= 8,	//�ݲ����ã�ʡ��/������/�ر�������
		/*string*/		district		= 9,	//�ݲ����ã���/��/�ؼ���
		/*string*/		detail			= 10,	//�ݲ����ã���ϸ��ַ/ģ��ƥ��
	};
}

//�����û�
namespace xAroundUser{
	enum{
		/*uint32*/      id				= 1,	//�û�ID
		/*string*/		nickname		= 2,	//�ǳ�
		/*uint8*/		sex				= 3,	//�Ա�:0 δָ�� 1�� 2Ů,����
		/*string*/		city			= 4,	//���ڳ���
		/*string*/		headicon		= 5,    //ͷ���ַ
		/*uint32*/		distance		= 6,	//���룬��λ����
		/*string*/		lately			= 7,	//�����Ծʱ��
		/*string*/		longitude		= 8,	//����
		/*string*/		latitude		= 9,	//γ��
		/*string*/		ext				= 10,	//��չ�ֶ�
	};
}

#define IM_LBS_SEARCH_AROUND_RESP		       0x18005
namespace x18005{
	enum
	{
		/*uint32*/			result	    = 1,	//���
		/*string*/			msg			= 2,	//��������
		/*xAroundUser[]*/	user		= 3,	//�û��б�
	};
}

//���ص���λ������
#define IM_LBS_SHARE_LOCATION_REQ			   0x18006
namespace x18006{
	enum{
		/*uint8*/			hide		= 1,	//���0 ���� 1 ���أ�Ĭ��Ϊ0
	};
}

#define IM_LBS_SHARE_LOCATION_RESP			   0x18007
namespace x18007{
	enum
	{
		/*uint32*/		result			= 1,   //���
		/*string*/      msg				= 2,   //��������
	};
}


//��ȡ֧�ֵģ�����������������Ϣ�ȣ����ػ������б�����
#define IM_LBS_GET_SUPPORT_LANG_REQ			   0x18008
namespace x18008{
}

//��������
namespace xLanguage{
	enum{
    /*string*/	 lang_code			= 1,			//���Ա��, �磺zn-CN
    /*string*/	 lang_name			= 2,			//��������, �磺��������
	};
}

#define IM_LBS_GET_SUPPORT_LANG_RESP			   0x18009
namespace x18009{
	enum
	{
		/*uint32*/		result			= 1,   //���
		/*string*/      msg				= 2,   //��������
		/*xLanguage[]*/    language		= 3,   //�����б�
	};
}

//����LBS���ػ�����
#define IM_LBS_SET_LOCAL_LANG_REQ			   0x18010
namespace x18010{
	enum
	{
		/*string*/    lang_code			= 1,		//������Ա�� Ĭ��Ϊzh-CN
		/*string*/    country_code		= 2,		//������ұ��� Ĭ��ΪCN
	};
}

#define IM_LBS_SET_LOCAL_LANG_RESP			   0x18011
namespace x18011{
	enum
	{
		/*uint32*/		result			= 1,   //���
		/*string*/      msg				= 2,   //��������
		/*string*/		lang_code		= 3,   //���Ա��
	};
}

//���ö�λ��ʽ
#define IM_LBS_SET_LOCATING_TYPE_REQ			   0x18012
namespace x18012{
	enum
	{
		/*uint8*/		locate_gps		 = 1,	//��ѡ����λ��ʽ GPS: 0 �� 1 �أ� Ĭ��Ϊ0
		/*uint8*/		locate_wifi		 = 2,	//��ѡ����λ��ʽ WIFI:0 �� 1 �أ� Ĭ��Ϊ0
		/*uint8*/		locate_cell		 = 3,	//��ѡ����λ��ʽ ��վ:0 �� 1 �أ� Ĭ��Ϊ0
		/*uint8*/		locate_network	 = 4,	//��ѡ����λ��ʽ ����:0 �� 1 �أ� Ĭ��Ϊ0
		/*uint8*/		locate_bluetooth = 5,	//�ݲ����ã���λ��ʽ ����
	};
}

#define IM_LBS_SET_LOCATING_TYPE_RESP			   0x18013
namespace x18013{
	enum
	{
		/*uint32*/		result			= 1,   //���
		/*string*/      msg				= 2,   //��������
	};
}


#endif  //_YVLBSSDK