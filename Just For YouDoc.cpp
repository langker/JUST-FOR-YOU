// Just For YouDoc.cpp : implementation of the CJustForYouDoc class
//

#include "stdafx.h"
#include "Just For You.h"

#include "Just For YouDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CJustForYouDoc

IMPLEMENT_DYNCREATE(CJustForYouDoc, CDocument)

BEGIN_MESSAGE_MAP(CJustForYouDoc, CDocument)
	//{{AFX_MSG_MAP(CJustForYouDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CJustForYouDoc construction/destruction

CJustForYouDoc::CJustForYouDoc()
{
	// TODO: add one-time construction code here

}

CJustForYouDoc::~CJustForYouDoc()
{
}

BOOL CJustForYouDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CJustForYouDoc serialization

void CJustForYouDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CJustForYouDoc diagnostics

#ifdef _DEBUG
void CJustForYouDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CJustForYouDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CJustForYouDoc commands
