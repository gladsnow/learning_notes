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
		scale = "����";
		break;
	case 2:
		scale = "����";
		break;
	case 3:
		scale = "����";
		break;
	}
	cout << scale << endl;
}