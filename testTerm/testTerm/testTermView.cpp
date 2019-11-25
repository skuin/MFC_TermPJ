
// testTermView.cpp : CtestTermView 클래스의 구현
//

#include "stdafx.h"
// SHARED_HANDLERS는 미리 보기, 축소판 그림 및 검색 필터 처리기를 구현하는 ATL 프로젝트에서 정의할 수 있으며
// 해당 프로젝트와 문서 코드를 공유하도록 해 줍니다.
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
	// 표준 인쇄 명령입니다.
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CtestTermView 생성/소멸

CtestTermView::CtestTermView()
{
	// TODO: 여기에 생성 코드를 추가합니다.

}

CtestTermView::~CtestTermView()
{
}

BOOL CtestTermView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: CREATESTRUCT cs를 수정하여 여기에서
	//  Window 클래스 또는 스타일을 수정합니다.
	start_dialog.DoModal();

	return CView::PreCreateWindow(cs);
}

// CtestTermView 그리기

void CtestTermView::OnDraw(CDC* /*pDC*/)
{
	CtestTermDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 여기에 원시 데이터에 대한 그리기 코드를 추가합니다.
}


// CtestTermView 인쇄

BOOL CtestTermView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 기본적인 준비
	return DoPreparePrinting(pInfo);
}

void CtestTermView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄하기 전에 추가 초기화 작업을 추가합니다.
}

void CtestTermView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 인쇄 후 정리 작업을 추가합니다.
}


// CtestTermView 진단

#ifdef _DEBUG
void CtestTermView::AssertValid() const
{
	CView::AssertValid();
}

void CtestTermView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CtestTermDoc* CtestTermView::GetDocument() const // 디버그되지 않은 버전은 인라인으로 지정됩니다.
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CtestTermDoc)));
	return (CtestTermDoc*)m_pDocument;
}
#endif //_DEBUG


// CtestTermView 메시지 처리기


void CtestTermView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: 여기에 메시지 처리기 코드를 추가 및/또는 기본값을 호출합니다.
	::SendMessage(this->m_hWnd, WM_CLOSE, NULL, NULL);
	CView::OnLButtonDown(nFlags, point);
}
