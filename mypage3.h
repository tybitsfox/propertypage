#ifndef IDD_PROPPAGE_SMALL2
#include"resource.h"
#endif
#define MYPAGE_OWN3

class mypage3:public CPropertyPage
{
public:
	mypage3():CPropertyPage(IDD_PROPPAGE_SMALL2){}
	BOOL OnInitDialog();
DECLARE_MESSAGE_MAP()
};