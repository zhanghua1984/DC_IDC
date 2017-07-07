// IDCDlg.h : header file
//

#if !defined(AFX_IDCDLG_H__7593A7A1_61B2_45E5_A824_25CB688301B5__INCLUDED_)
#define AFX_IDCDLG_H__7593A7A1_61B2_45E5_A824_25CB688301B5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CIDCDlg dialog

class CIDCDlg : public CDialog
{
// Construction
public:
	CIDCDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CIDCDlg)
	enum { IDD = IDD_IDC_DIALOG };
	CEdit	m_csout3;
	CEdit	m_csout2;
	CEdit	m_csout;
	CEdit	m_csin4;
	CEdit	m_csin3;
	CEdit	m_csin2;
	CEdit	m_csin1;
	CEdit	m_csin0;
	CString	m_strin0;
	CString	m_strin1;
	CString	m_strin2;
	CString	m_strin3;
	CString	m_strin4;
	CString	m_strout;
	CString	m_strout2;
	CString	m_strout3;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CIDCDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CIDCDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnCalculate();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_IDCDLG_H__7593A7A1_61B2_45E5_A824_25CB688301B5__INCLUDED_)
