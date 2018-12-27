#include "ConcreteManager.h"
#include"Request.h"

int main(void)
{
	CCommonManager* jinli = new CCommonManager("����");
	CMajordomo* zongjian = new CMajordomo("�ڽ�");
	CGeneralManager* zhongjingli = new CGeneralManager("�Ӿ���");
	jinli->SetSuperior(zongjian);
	zongjian->SetSuperior(zhongjingli);

	CRequest* request = new CRequest();
	request->SetRequestType("���");
	request->SetRequestContent("С�����");
	request->SetNumber(1);
	jinli->RequestApplications(request);

	CRequest* request2 = new CRequest();
	request2->SetRequestType("���");
	request2->SetRequestContent("С�����");
	request2->SetNumber(4);
	jinli->RequestApplications(request2);

	CRequest* request3 = new CRequest();
	request3->SetRequestType("��н");
	request3->SetRequestContent("С�������н");
	request3->SetNumber(500);
	jinli->RequestApplications(request3);

	CRequest* request4 = new CRequest();
	request4->SetRequestType("��н");
	request4->SetRequestContent("С�������н");
	request4->SetNumber(1000);
	jinli->RequestApplications(request4);

	return 0;
}