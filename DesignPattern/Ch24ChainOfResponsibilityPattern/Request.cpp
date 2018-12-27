#include "Request.h"



CRequest::CRequest()
{
}


CRequest::~CRequest()
{
}

void CRequest::SetRequestType(string value)
{
	requestType = value;
}
string CRequest::GetRequestType(void)
{
	return requestType;
}
void CRequest::SetRequestContent(string value)
{
	requestContent = value;
}
string CRequest::GetRequestContent(void)
{
	return requestContent;
}
void CRequest::SetNumber(int value)
{
	number = value;
}
int CRequest::GetNumber(void)
{
	return number;
}
