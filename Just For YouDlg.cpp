// Just For YouDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Just For You.h"
#include "Just For YouDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CJustForYouDlg dialog

CJustForYouDlg::CJustForYouDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CJustForYouDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CJustForYouDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	Forciyao="";
	Formain="";
	ForWeishu="";
}

void CJustForYouDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CJustForYouDlg)
	DDX_Control(pDX, IDC_EDIT4, m_edit4);
	DDX_Control(pDX, IDC_EDIT3, m_edit3);
	DDX_Control(pDX, IDC_EDIT2, m_edit2);
	DDX_Control(pDX, IDC_EDIT1, m_edit1);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CJustForYouDlg, CDialog)
	//{{AFX_MSG_MAP(CJustForYouDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, OnButton1)
	ON_BN_CLICKED(IDC_BUTTON2, OnButton2)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CJustForYouDlg message handlers

BOOL CJustForYouDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CJustForYouDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CJustForYouDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CJustForYouDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CJustForYouDlg::OnButton1() 
{
	// TODO: Add your control notification handler code here
	m_edit1.GetWindowText(Formain);
	m_edit2.GetWindowText(Forciyao);
	if(Formain==""||Forciyao=="")
	{
		MessageBox("老大，你总得填写好参数再计算吧");
		return;
	}
	if(Formain.GetLength()>16||Forciyao.GetLength()>16)
	{
		MessageBox("请注意参数设置！");
		return;
	}
	CountMima();
}


void CJustForYouDlg::CountMima()
{
    memset(cFormain,0, sizeof(bool) * 20); 
    strncpy(cFormain, Formain, Formain.GetLength());
    memset(cForciyao,0, sizeof(bool) * 20); 
    strncpy(cForciyao, Forciyao, Forciyao.GetLength());
	memset(cForMishi,0,sizeof(bool)*20);
	int m=Formain.GetLength();
	int n=Forciyao.GetLength();
	int a[16],b[16];
	memset(a,0,sizeof(int)*16);
	memset(b,0,sizeof(int)*16);
	for(int i=0;i<m;i++)
	{
		a[i]=cFormain[i];
	}
    for(int j=0;j<n;j++)
	{
		b[j]=cForciyao[j];
	}
	if(m==n)
	{
		for(int e=0;e<m;e++)
		{
			a[e]=(b[e]&a[e]+b[e]|a[e]+b[e]^a[e])*(abs(b[e]-a[e])*abs(b[e]*a[e]));
			itoa(a[e],&cForMishi[e],16);
		}
		ForMishi.Format("%s",cForMishi);
		m_edit4.SetWindowText(ForMishi);
		int f=ForMishi.GetLength();
		ForMishi.Format("%d",f);
		m_edit3.SetWindowText(ForMishi);
	}
	else if(m<n)
	{
        for(int e=0;e<m;e++)
		{
			a[e]=b[e]&a[e]+b[e]|a[e]+b[e]^a[e];
			itoa(a[e],&cForMishi[e],16);
		}
		ForMishi.Format("%s",cForMishi);
		m_edit4.SetWindowText(ForMishi);
        int z=ForMishi.GetLength();
		ForMishi.Format("%d",z);
		m_edit3.SetWindowText(ForMishi);
	}
	else
	{
        for(int e=0;e<n;e++)
		{
			a[e]=b[e]&a[e]+b[e]|a[e]+b[e]^a[e];
			itoa(a[e],&cForMishi[e],16);
		}
		ForMishi.Format("%s",cForMishi);
		m_edit4.SetWindowText(ForMishi);
        int g=ForMishi.GetLength();
		ForMishi.Format("%d",g);
		m_edit3.SetWindowText(ForMishi);
	}
}


void CJustForYouDlg::OnButton2() 
{
	CAboutDlg a;
	a.DoModal();
	
}

void CAboutDlg::OnOK() 
{
    MessageBox("没事!");	
	CDialog::OnOK();
}

BOOL CJustForYouDlg::PreTranslateMessage(MSG* pMsg) 
{
	if(pMsg->message   ==   WM_KEYDOWN   &&   pMsg->wParam   ==   0x1b)   
   return   TRUE;   
if(pMsg->message   ==   WM_KEYDOWN   &&   pMsg->wParam   ==   0x0d   )   
   return   TRUE;   
return   CDialog::PreTranslateMessage(pMsg); 

}
