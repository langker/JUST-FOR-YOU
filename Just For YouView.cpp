// Just For YouView.cpp : implementation of the CJustForYouView class
//

#include "stdafx.h"
#include "Just For You.h"

#include "Just For YouDoc.h"
#include "Just For YouView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CJustForYouView

IMPLEMENT_DYNCREATE(CJustForYouView, CView)

BEGIN_MESSAGE_MAP(CJustForYouView, CView)
	//{{AFX_MSG_MAP(CJustForYouView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CJustForYouView construction/destruction

CJustForYouView::CJustForYouView()
{
	// TODO: add construction code here

}

CJustForYouView::~CJustForYouView()
{
}

BOOL CJustForYouView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CJustForYouView drawing

void CJustForYouView::OnDraw(CDC* pDC)
{
	CJustForYouDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CJustForYouView printing

BOOL CJustForYouView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CJustForYouView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CJustForYouView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CJustForYouView diagnostics

#ifdef _DEBUG
void CJustForYouView::AssertValid() const
{
	CView::AssertValid();
}

void CJustForYouView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CJustForYouDoc* CJustForYouView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CJustForYouDoc)));
	return (CJustForYouDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CJustForYouView message handlers
