
// testTerm.h : testTerm ���� ���α׷��� ���� �� ��� ����
//
#pragma once

#ifndef __AFXWIN_H__
	#error "PCH�� ���� �� ������ �����ϱ� ���� 'stdafx.h'�� �����մϴ�."
#endif

#include "resource.h"       // �� ��ȣ�Դϴ�.


// CtestTermApp:
// �� Ŭ������ ������ ���ؼ��� testTerm.cpp�� �����Ͻʽÿ�.
//

class CtestTermApp : public CWinApp
{
public:
	CtestTermApp();


// �������Դϴ�.
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// �����Դϴ�.
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CtestTermApp theApp;
