#include "ConcreteManager.h"
#include"Request.h"

int main(void)
{
	CCommonManager* jinli = new CCommonManager("金利");
	CMajordomo* zongjian = new CMajordomo("宗剑");
	CGeneralManager* zhongjingli = new CGeneralManager("钟经理");
	jinli->SetSuperior(zongjian);
	zongjian->SetSuperior(zhongjingli);

	CRequest* request = new CRequest();
	request->SetRequestType("请假");
	request->SetRequestContent("小菜请假");
	request->SetNumber(1);
	jinli->RequestApplications(request);

	CRequest* request2 = new CRequest();
	request2->SetRequestType("请假");
	request2->SetRequestContent("小菜请假");
	request2->SetNumber(4);
	jinli->RequestApplications(request2);

	CRequest* request3 = new CRequest();
	request3->SetRequestType("加薪");
	request3->SetRequestContent("小菜请求加薪");
	request3->SetNumber(500);
	jinli->RequestApplications(request3);

	CRequest* request4 = new CRequest();
	request4->SetRequestType("加薪");
	request4->SetRequestContent("小菜请求加薪");
	request4->SetNumber(1000);
	jinli->RequestApplications(request4);

	return 0;
}