#include"PlayContext.h"
#include "Expression.h"
#include "Scale.h"
#include "Note.h"
#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	CPlayContext* context = new CPlayContext();
	cout << "ÉÏº£Ì²£º " << endl;
	context->SetPlayText("O 2 E 0.5 G 0.5 A 3 E 0.5 G 0.5 D 3 E 0.5 \
		G 0.5 A 0.5 O 3 C 1 O 2 A 0.5 G 1 C 0.5 E 0.5 D 3");
	CExpression* expression = nullptr;
	while (context->GetPlayText().length() > 0)
	{
		string str = (context->GetPlayText()).substr(0,1);
		char* ch = (char*)str.c_str();
		switch (*ch)
		{
		case 'O':
			expression = new CScale();
			break;
		case 'C':
		case 'E':
		case 'F':
		case 'G':
		case 'A':
		case 'B':
		case 'P':
			expression = new CNote();
			break;
		}
		expression->Interpret(context);
	}
	return 0;
}