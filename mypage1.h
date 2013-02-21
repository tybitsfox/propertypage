#ifndef IDD_PROPPAGE_SMALL
#include"resource.h"
#endif
#define MYPAGE_OWN1

class mypage1:public CPropertyPage
{
public:
	mypage1():CPropertyPage(IDD_PROPPAGE_SMALL)
	{}
	BOOL OnInitDialog();
DECLARE_MESSAGE_MAP()
};