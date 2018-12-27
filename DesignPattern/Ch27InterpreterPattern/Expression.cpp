#include "Expression.h"
#include<string>
using namespace std;

CExpression::CExpression()
{
}


CExpression::~CExpression()
{
}

void CExpression::Interpret(CPlayContext* context)
{
	if (context->GetPlayText().length() == 0)
	{
		return;
	}
	else
	{
		string playKey = context->GetPlayText().substr(0, 1);
		context->SetPlayText(context->GetPlayText().substr(2));
		double playValue = 
	}
}