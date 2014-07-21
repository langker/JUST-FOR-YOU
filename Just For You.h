// Just For You.h : main header file for the JUST FOR YOU application
//

#if !defined(AFX_JUSTFORYOU_H__23016B99_D3FB_4DA9_B699_E38CBF69A240__INCLUDED_)
#define AFX_JUSTFORYOU_H__23016B99_D3FB_4DA9_B699_E38CBF69A240__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CJustForYouApp:
// See Just For You.cpp for the implementation of this class
//

class CJustForYouApp : public CWinApp
{
public:
	CJustForYouApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CJustForYouApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CJustForYouApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_JUSTFORYOU_H__23016B99_D3FB_4DA9_B699_E38CBF69A240__INCLUDED_)
