
// testTermView.h : CtestTermView Ŭ������ �������̽�
//

#pragma once
#include "testClass.h"

class CtestTermView : public CView
{
protected: // serialization������ ��������ϴ�.
	CtestTermView();
	DECLARE_DYNCREATE(CtestTermView)

// Ư���Դϴ�.
public:
	CtestTermDoc* GetDocument() const;

// �۾��Դϴ�.
public:

// �������Դϴ�.
public:
	virtual void OnDraw(CDC* pDC);  // �� �並 �׸��� ���� �����ǵǾ����ϴ�.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// �����Դϴ�.
public:
	virtual ~CtestTermView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()
public:
	testClass start_dialog;
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // testTermView.cpp�� ����� ����
inline CtestTermDoc* CtestTermView::GetDocument() const
   { return reinterpret_cast<CtestTermDoc*>(m_pDocument); }
#endif

