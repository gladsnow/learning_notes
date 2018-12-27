#include "Scale.h"
#include<string>
#include<iostream>
using namespace std;

CScale::CScale()
{
}


CScale::~CScale()
{
}
void CScale::Excute(char key, double value)
{
	string scale = "";
	switch ((int)value)
	{
	case 1:
		scale = "µÕ“Ù";
		break;
	case 2:
		scale = "÷–“Ù";
		break;
	case 3:
		scale = "∏ﬂ“Ù";
		break;
	}
	cout << scale << endl;
}