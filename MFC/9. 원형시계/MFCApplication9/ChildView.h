
// ChildView.h: CChildView 클래스의 인터페이스
//


#pragma once


// CChildView 창

class CChildView : public CWnd
{
// 생성입니다.
public:
	CChildView();

// 특성입니다.
public:
	int m_time;
	int m_min;
	int m_hour;
	int m_sec;
	int m_flag;

// 작업입니다.
public:

// 재정의입니다.
	protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

// 구현입니다.
public:
	virtual ~CChildView();

	// 생성된 메시지 맵 함수
protected:
	afx_msg void OnPaint();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnButtonS();
	afx_msg void OnButtonM();
	afx_msg void OnButtonH();
	afx_msg void OnButtonDigits();
	afx_msg void OnButtonAnalog();
};

