
// testTermView.cpp : CtestTermView Ŭ������ ����
//

#include "stdafx.h"
// SHARED_HANDLERS�� �̸� ����, ����� �׸� �� �˻� ���� ó���⸦ �����ϴ� ATL ������Ʈ���� ������ �� ������
// �ش� ������Ʈ�� ���� �ڵ带 �����ϵ��� �� �ݴϴ�.
#ifndef SHARED_HANDLERS
#include "testTerm.h"
#endif

#include "testTermDoc.h"
#include "testTermView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CtestTermView

IMPLEMENT_DYNCREATE(CtestTermView, CView)

BEGIN_MESSAGE_MAP(CtestTermView, CView)
	// ǥ�� �μ� ����Դϴ�.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CtestTermView ����/�Ҹ�

CtestTermView::CtestTermView()
{
	// TODO: ���⿡ ���� �ڵ带 �߰��մϴ�.

}

CtestTermView::~CtestTermView()
{
}

BOOL CtestTermView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs�� �����Ͽ� ���⿡��
	//  Window Ŭ���� �Ǵ� ��Ÿ���� �����մϴ�.
	start_dialog.DoModal();

	return CView::PreCreateWindow(cs);
}

// CtestTermView �׸���

void CtestTermView::OnDraw(CDC* /*pDC*/)
{
	CtestTermDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: ���⿡ ���� �����Ϳ� ���� �׸��� �ڵ带 �߰��մϴ�.
}


// CtestTermView �μ�

BOOL CtestTermView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// �⺻���� �غ�
	return DoPreparePrinting(pInfo);
}

void CtestTermView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ��ϱ� ���� �߰� �ʱ�ȭ �۾��� �߰��մϴ�.
}

void CtestTermView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: �μ� �� ���� �۾��� �߰��մϴ�.
}


// CtestTermView ����

#ifdef _DEBUG
void CtestTermView::AssertValid() const
{
	CView::AssertValid();
}

void CtestTermView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CtestTermDoc* CtestTermView::GetDocument() const // ����׵��� ���� ������ �ζ������� �����˴ϴ�.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CtestTermDoc)));
	return (CtestTermDoc*)m_pDocument;
}
#endif //_DEBUG


// CtestTermView �޽��� ó����


void CtestTermView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: ���⿡ �޽��� ó���� �ڵ带 �߰� ��/�Ǵ� �⺻���� ȣ���մϴ�.
	::SendMessage(this->m_hWnd, WM_CLOSE, NULL, NULL);
	CView::OnLButtonDown(nFlags, point);
}
