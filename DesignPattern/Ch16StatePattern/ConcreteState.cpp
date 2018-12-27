#include "ConcreteState.h"
#include<iostream>
using namespace std;

CForenoonState::CForenoonState()
{
}
CForenoonState::~CForenoonState()
{

}
void CForenoonState::WriteProgram(CWork* w)
{
	if (w->GetHour() < 12) {
		cout << "��ǰʱ�䣺" << w->GetHour() << "�㣬���繤��������ٱ�" << endl;
	}
	else
	{
		w->SetState(new CNoonState());
		w->WriteProgram();
	}
}

CEveningState::CEveningState()
{

}
CEveningState::~CEveningState()
{

}
void CEveningState::WriteProgram(CWork* w)
{
	if (w->GetTaskFinished())
	{
		w->SetState(new CRestState());
		w->WriteProgram();
	}
	else
	{
		if (w->GetHour() < 21) {
			cout << "��ǰʱ�䣺" << w->GetHour() << "�� �Ӱ�Ŷ��ƣ��֮��" << endl;
		}
		else
		{
			w->SetState(new CSleepingState());
			w->WriteProgram();
		}
	}
	
}

CAfterNoonState::CAfterNoonState()
{

}
CAfterNoonState::~CAfterNoonState()
{

}
void CAfterNoonState::WriteProgram(CWork* w)
{
	if (w->GetHour() < 17) {
		cout << "��ǰʱ�䣺" << w->GetHour() << "�� ����״̬����������Ŭ��" << endl;
	}
	else
	{
		w->SetState(new CEveningState());
		w->WriteProgram();
	}
}

CNoonState::CNoonState()
{
}
CNoonState::~CNoonState()
{

}
void CNoonState::WriteProgram(CWork* w)
{
	if (w->GetHour() < 13) {
		cout << "��ǰʱ�䣺" << w->GetHour() << "�� ���ˣ��緹������������" << endl;
	}
	else
	{
		w->SetState(new CAfterNoonState());
		w->WriteProgram();
	}
}

CSleepingState::CSleepingState()
{
}
CSleepingState::~CSleepingState()
{

}
void CSleepingState::WriteProgram(CWork* w)
{
	cout << "��ǰʱ�䣺" << w->GetHour() << "�㲻���ˣ�˯����" << endl;
}


CRestState::CRestState()
{
}
CRestState::~CRestState()
{
}
void CRestState::WriteProgram(CWork* w)
{
	cout << "��ǰʱ�䣺" << w->GetHour() << "���°�ؼ���" << endl;
}