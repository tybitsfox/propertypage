#ifndef IDD_PROPPAGE_SMALL1 
#include"resource.h"
#endif
#define MYPAGE_OWN2

class mypage2:public CPropertyPage
{
public:
	mypage2():CPropertyPage(IDD_PROPPAGE_SMALL1){}
	BOOL OnInitDialog();
DECLARE_MESSAGE_MAP()
};