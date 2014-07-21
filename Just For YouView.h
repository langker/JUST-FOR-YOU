// Just For YouView.h : interface of the CJustForYouView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_JUSTFORYOUVIEW_H__C9EA7296_E8E2_4BFF_98BB_630190B91F70__INCLUDED_)
#define AFX_JUSTFORYOUVIEW_H__C9EA7296_E8E2_4BFF_98BB_630190B91F70__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CJustForYouView : public CView
{
protected: // create from serialization only
	CJustForYouView();
	DECLARE_DYNCREATE(CJustForYouView)

// Attributes
public:
	CJustForYouDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CJustForYouView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CJustForYouView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CJustForYouView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Just For YouView.cpp
inline CJustForYouDoc* CJustForYouView::GetDocument()
   { return (CJustForYouDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_JUSTFORYOUVIEW_H__C9EA7296_E8E2_4BFF_98BB_630190B91F70__INCLUDED_)
