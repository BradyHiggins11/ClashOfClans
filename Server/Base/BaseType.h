#ifndef __BASETYPE_H__
#define __BASETYPE_H__

#include <stdio.h>
#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <time.h>
#include <math.h>
#include <stdarg.h>
#include <signal.h>

using namespace std;

///////////////////////////////////////////////////////////////////////
//��׼�������Ͷ���
///////////////////////////////////////////////////////////////////////
#define VOID			void			//��׼��
typedef unsigned char	UCHAR;			//��׼�޷���CHAR
typedef char			CHAR;			//��׼CHAR
typedef unsigned int	uint;			//��׼�޷���INT
typedef int				INT;			//��׼INT
typedef unsigned short	USHORT;			//��׼�޷���short
typedef short			SHORT;			//��׼short
typedef unsigned long	ULONG;			//��׼�޷���LONG(���Ƽ�ʹ��)
typedef long			LONG;			//��׼LONG(���Ƽ�ʹ��)
typedef float			FLOAT;			//��׼float

typedef UCHAR			uchar;
typedef USHORT			ushort;
typedef uint			UINT;
typedef ULONG			ulong;
typedef ULONG			IP_t;
typedef USHORT			PacketID_t;
typedef INT				BOOL;
typedef UCHAR			BYTE;

//��Ч�ľ��
#define INVALID_HANDLE	-1
//��Ч��IDֵ
#define INVALID_ID		-1
//��
#ifndef TRUE
#define TRUE 1
#endif
//��
#ifndef FALSE
#define FALSE 0
#endif
//�ļ�·�����ַ���󳤶�
#ifndef _MAX_PATH
#define _MAX_PATH 260
#endif

//����ָ��ֵɾ���ڴ�
#ifndef SAFE_DELETE
#define SAFE_DELETE(x)	if( (x)!=NULL ) { delete (x); (x)=NULL; }
#endif
//����ָ��ֵɾ�����������ڴ�
#ifndef SAFE_DELETE_ARRAY
#define SAFE_DELETE_ARRAY(x)	if( (x)!=NULL ) { delete[] (x); (x)=NULL; }
#endif
//����ָ�����free�ӿ�
#ifndef SAFE_FREE
#define SAFE_FREE(x)	if( (x)!=NULL ) { free(x); (x)=NULL; }
#endif
//����ָ�����Release�ӿ�
#ifndef SAFE_RELEASE
#define SAFE_RELEASE(x)	if( (x)!=NULL ) { (x)->Release(); (x)=NULL; }
#endif

#define __ENTER_FUNCTION 
#define __LEAVE_FUNCTION

#define _MY_TRY try
#define _MY_CATCH catch(...)

#endif