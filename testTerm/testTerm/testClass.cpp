// testClass.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "testTerm.h"
#include "testClass.h"
#include "afxdialogex.h"


// testClass ��ȭ �����Դϴ�.

IMPLEMENT_DYNAMIC(testClass, CDialogEx)

testClass::testClass(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

testClass::~testClass()
{
}

void testClass::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(testClass, CDialogEx)
END_MESSAGE_MAP()


// testClass �޽��� ó�����Դϴ�.
