#define _CRT_SECURE_NO_WARNINGS
#include "Waiter.h"
#include<iostream>
#include<time.h>
#include <stdio.h>
using namespace std;

CWaiter::CWaiter()
{
}


CWaiter::~CWaiter()
{
}
void CWaiter::SetOrder(CCmd* command)
{
		orders.push_back(command);
		const time_t t = time(NULL);
		struct tm* current_time = localtime(&t);
		cout << "���Ӷ���: "<< command->GetCmd()<<", ʱ�䣺"<<current_time->tm_hour << ":" << current_time->tm_min << ":" << current_time->tm_sec << endl;
}
void CWaiter::CancelOrder(CCmd* command)
{
	
	orders.remove(command);
	const time_t t = time(NULL);
	struct tm* current_time = localtime(&t);
	cout << "ȡ������: "<< command->GetCmd()<< ", ʱ�䣺"<<current_time->tm_hour << ":" << current_time->tm_min << ":" << current_time->tm_sec << endl;
	
}
void CWaiter::Notify(void)
{
	for each (CCmd* cmd in orders)
	{
		cmd->ExcuteCommand();
	}
}
