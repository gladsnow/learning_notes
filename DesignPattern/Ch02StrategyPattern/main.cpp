#include<iostream>
#include<string>
#include "CashContext.h"
using namespace std;

int main(void)
{
    double total = 0.0;
    int type = 0;
    double price = 0.0;
    unsigned int num = 0;
    cout << "�������շ����ͣ�1:�����շѣ�2:��300��100��3:��8��" << endl;
    cin >> type;
    cout << "������۸�" << endl;
    cin >> price;
    cout << "������������" << endl;
    cin >> num;
    CCashContext *ccontext = new CCashContext(type);
	total = ccontext->GetResult(price * num);
    cout << "���ۣ�" << price << " ������" << num << " �շ����ͣ�" << type << " �ϼƣ�" << total;
    return 0;
}