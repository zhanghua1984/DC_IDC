// IDC.h : main header file for the IDC application
//

#if !defined(AFX_IDC_H__A6ADBA35_5199_4549_A806_F3CFC68073F5__INCLUDED_)
#define AFX_IDC_H__A6ADBA35_5199_4549_A806_F3CFC68073F5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CIDCApp:
// See IDC.cpp for the implementation of this class
//

class CIDCApp : public CWinApp
{
public:
	CIDCApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CIDCApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CIDCApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_IDC_H__A6ADBA35_5199_4549_A806_F3CFC68073F5__INCLUDED_)
