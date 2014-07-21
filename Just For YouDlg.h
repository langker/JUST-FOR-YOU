// Just For YouDlg.h : header file
//

#if !defined(AFX_JUSTFORYOUDLG_H__C8A86244_1563_4A6A_BF58_3B51284EC6D8__INCLUDED_)
#define AFX_JUSTFORYOUDLG_H__C8A86244_1563_4A6A_BF58_3B51284EC6D8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CJustForYouDlg dialog

class CJustForYouDlg : public CDialog
{
// Construction
public:
	void CountMima();
	CJustForYouDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CJustForYouDlg)
	enum { IDD = IDD_JUSTFORYOU_DIALOG };
	CEdit	m_edit4;
	CEdit	m_edit3;
	CEdit	m_edit2;
	CEdit	m_edit1;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CJustForYouDlg)
	public:
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL
	CString Formain,Forciyao,ForWeishu,ForMishi;
    char cFormain[20],cForciyao[20],cForMishi[20];
// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CJustForYouDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton1();
	afx_msg void OnButton2();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_JUSTFORYOUDLG_H__C8A86244_1563_4A6A_BF58_3B51284EC6D8__INCLUDED_)
