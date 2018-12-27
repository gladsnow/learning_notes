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
		cout << "当前时间：" << w->GetHour() << "点，上午工作，精神百倍" << endl;
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
			cout << "当前时间：" << w->GetHour() << "点 加班哦，疲累之极" << endl;
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
		cout << "当前时间：" << w->GetHour() << "点 下午状态还不错，继续努力" << endl;
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
		cout << "当前时间：" << w->GetHour() << "点 饿了，午饭；犯困，午休" << endl;
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
	cout << "当前时间：" << w->GetHour() << "点不行了，睡着了" << endl;
}


CRestState::CRestState()
{
}
CRestState::~CRestState()
{
}
void CRestState::WriteProgram(CWork* w)
{
	cout << "当前时间：" << w->GetHour() << "点下班回家了" << endl;
}