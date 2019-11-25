// testClass.cpp : 구현 파일입니다.
//

#include "stdafx.h"
#include "testTerm.h"
#include "testClass.h"
#include "afxdialogex.h"


// testClass 대화 상자입니다.

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


// testClass 메시지 처리기입니다.
