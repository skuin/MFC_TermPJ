#pragma once


// testClass ��ȭ �����Դϴ�.

class testClass : public CDialogEx
{
	DECLARE_DYNAMIC(testClass)

public:
	testClass(CWnd* pParent = NULL);   // ǥ�� �������Դϴ�.
	virtual ~testClass();

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

	DECLARE_MESSAGE_MAP()
};
