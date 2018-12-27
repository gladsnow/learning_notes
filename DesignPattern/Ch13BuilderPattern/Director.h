#pragma once
#include "Builder.h"
class CDirector
{
public:
	CDirector();
	~CDirector();
	void Construct(CBuilder* builder);
};

