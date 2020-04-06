#pragma once
#include "afxwin.h"
class CMyStatic :
	public CStatic
{
public:
	CMyStatic();
	~CMyStatic();
	DECLARE_MESSAGE_MAP()
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	virtual void PreSubclassWindow();
	// OpenGL����
	void GLDraw();
	// OpenGl��ʼ��
	bool InitGL();
	HGLRC hglrc;
	HDC hdc;
	// ��ȡSTL
	void GLREADSTL();
	// ��ʾSTL
	void GLSHOWSTL();
	int num;
	float* verts;
	float* vnorms;
	//�������ֵ��Сֵ
	float m_fmaxmin[6];
};

