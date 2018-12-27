#include "PlayContext.h"

CPlayContext::CPlayContext()
{
}

CPlayContext::~CPlayContext()
{
}

string CPlayContext::GetPlayText(void)
{
	return text;
}
void CPlayContext::SetPlayText(string value)
{
	text = value;
}
