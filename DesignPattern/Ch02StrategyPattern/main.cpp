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
    cout << "请输入收费类型：1:正常收费；2:满300返100；3:打8折" << endl;
    cin >> type;
    cout << "请输入价格：" << endl;
    cin >> price;
    cout << "请输入数量：" << endl;
    cin >> num;
    CCashContext *ccontext = new CCashContext(type);
	total = ccontext->GetResult(price * num);
    cout << "单价：" << price << " 数量：" << num << " 收费类型：" << type << " 合计：" << total;
    return 0;
}