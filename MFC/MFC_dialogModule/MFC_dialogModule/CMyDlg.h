#pragma once


// CMyDlg 대화 상자

class CMyDlg : public CDialog
{
	DECLARE_DYNAMIC(CMyDlg)

public:
	CMyDlg(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CMyDlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	CString m_editstr;
};
