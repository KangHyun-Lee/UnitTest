
// UnitTest.h : PROJECT_NAME ���� ���α׷��� ���� �� ��� �����Դϴ�.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"		// �� ��ȣ�Դϴ�.


// CUnitTestApp:
// �� Ŭ������ ������ ���ؼ��� UnitTest.cpp�� �����Ͻʽÿ�.
//

class CUnitTestApp : public CWinApp
{
public:
	CUnitTestApp();

// �������Դϴ�.
public:
	virtual BOOL InitInstance();

// �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};

extern CUnitTestApp theApp;