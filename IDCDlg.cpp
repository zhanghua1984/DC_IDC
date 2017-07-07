// IDCDlg.cpp : implementation file
//

#include "stdafx.h"
#include "IDC.h"
#include "IDCDlg.h"

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
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CIDCDlg dialog

CIDCDlg::CIDCDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CIDCDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CIDCDlg)
	m_strin0 = _T("");
	m_strin1 = _T("");
	m_strin2 = _T("");
	m_strin3 = _T("");
	m_strin4 = _T("");
	m_strout = _T("");
	m_strout2 = _T("");
	m_strout3 = _T("");
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CIDCDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CIDCDlg)
	DDX_Control(pDX, IDC_EDITOUT3, m_csout3);
	DDX_Control(pDX, IDC_EDITOUT2, m_csout2);
	DDX_Control(pDX, IDC_EDITOUT, m_csout);
	DDX_Control(pDX, IDC_EDITIN4, m_csin4);
	DDX_Control(pDX, IDC_EDITIN3, m_csin3);
	DDX_Control(pDX, IDC_EDITIN2, m_csin2);
	DDX_Control(pDX, IDC_EDITIN1, m_csin1);
	DDX_Control(pDX, IDC_EDITIN0, m_csin0);
	DDX_Text(pDX, IDC_EDITIN0, m_strin0);
	DDX_Text(pDX, IDC_EDITIN1, m_strin1);
	DDX_Text(pDX, IDC_EDITIN2, m_strin2);
	DDX_Text(pDX, IDC_EDITIN3, m_strin3);
	DDX_Text(pDX, IDC_EDITIN4, m_strin4);
	DDX_Text(pDX, IDC_EDITOUT, m_strout);
	DDX_Text(pDX, IDC_EDITOUT2, m_strout2);
	DDX_Text(pDX, IDC_EDITOUT3, m_strout3);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CIDCDlg, CDialog)
	//{{AFX_MSG_MAP(CIDCDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_CALCULATE, OnCalculate)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CIDCDlg message handlers

BOOL CIDCDlg::OnInitDialog()
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

void CIDCDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CIDCDlg::OnPaint() 
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
HCURSOR CIDCDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CIDCDlg::OnCalculate() 
{
	// TODO: Add your control notification handler code here
	//00 03 26 16 56   MARK28 
	CString m_hex="0x";
	BYTE m_byte0,m_byte1,m_byte2,m_byte3,m_byte4;
	int	m_int0,m_int1,m_int2,m_int3,m_int4;

	m_csin0.GetWindowText(m_strin0);
	m_csin1.GetWindowText(m_strin1);
	m_csin2.GetWindowText(m_strin2);
	m_csin3.GetWindowText(m_strin3);
	m_csin4.GetWindowText(m_strin4);

	m_strin0.Insert(0,m_hex);
	m_strin1.Insert(0,m_hex);
	m_strin2.Insert(0,m_hex);
	m_strin3.Insert(0,m_hex);
	m_strin4.Insert(0,m_hex);


	m_int0=strtoul(m_strin0,NULL,16);
	m_int1=strtoul(m_strin1,NULL,16);
	m_int2=strtoul(m_strin2,NULL,16);
	m_int3=strtoul(m_strin3,NULL,16);
	m_int4=strtoul(m_strin4,NULL,16);

	//formatbits = data[1] & 0x3F
	
	int m_formatbis=m_int1 & 0x3f;

	if ((m_formatbis>=0)&&(m_formatbis<=60))
	{
		CString m_format="Mark28";

		m_csout.SetWindowText(m_format);


		//¼ÆËãIDÐÅÏ¢
		int m_id;
		m_id = ((m_int1 & 0x3f) << 22) | (m_int2 << 14) | (m_int3 << 6) | ((m_int4 & 0xfc) >> 2);

		CString m_strid;
		CString m_strhexid;
		m_strid.Format("%d",m_id);
		m_strhexid.Format("%08X",m_id);
		m_strhexid.Insert(0,m_hex);
		m_csout2.SetWindowText(m_strid);
		m_csout3.SetWindowText(m_strhexid);

	}

	else if (m_formatbis==63)
	{
		CString m_format="Open32";
		
		m_csout.SetWindowText(m_format);

		int m_id;
		m_id = (m_int0 << 24) | ((m_int1 & 0xC0) << 16) | (m_int2 << 14) | (m_int3 << 6) | ((m_int4 & 0xfc) >> 2);
		
		CString m_strid;
		CString m_strhexid;
		m_strid.Format("%d",m_id);
		m_strhexid.Format("%X",m_id);
		m_strhexid.Insert(0,m_hex);
		m_csout2.SetWindowText(m_strid);
		m_csout3.SetWindowText(m_strhexid);

	}

	else if (m_formatbis==63)
	{
		CString m_format="Open32";
		
		m_csout.SetWindowText(m_format);
	}

	else if (m_formatbis==62)
	{
		CString m_format="Open48";
		
		m_csout.SetWindowText(m_format);
	}
	
	else if (m_formatbis==61)
	{
		CString m_format="OpenLen";
		
		m_csout.SetWindowText(m_format);
	}
	
	

}
