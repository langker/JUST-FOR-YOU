// Just For YouDoc.h : interface of the CJustForYouDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_JUSTFORYOUDOC_H__EF8153CC_621A_44BE_8526_B6DCE21F1E13__INCLUDED_)
#define AFX_JUSTFORYOUDOC_H__EF8153CC_621A_44BE_8526_B6DCE21F1E13__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CJustForYouDoc : public CDocument
{
protected: // create from serialization only
	CJustForYouDoc();
	DECLARE_DYNCREATE(CJustForYouDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CJustForYouDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CJustForYouDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CJustForYouDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_JUSTFORYOUDOC_H__EF8153CC_621A_44BE_8526_B6DCE21F1E13__INCLUDED_)
