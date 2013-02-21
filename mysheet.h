#ifndef MYPAGE_OWN1
#include"mypage1.h"
#endif
#ifndef MYPAGE_OWN2
#include"mypage2.h"
#endif
#ifndef MYPAGE_OWN3
#include"mypage3.h"
#endif
#define	MYSHEET_OWN

class mysheet:public CPropertySheet
{
public:
	mypage1 mpg1;
	mypage2 mpg2;
	mypage3 mpg3;
	mysheet(LPCTSTR name="ooo",CWnd *pwnd=NULL);
DECLARE_MESSAGE_MAP()
};