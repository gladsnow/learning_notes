#pragma once
#include "Action.h"
class CSuccess :
	public CAction
{
public:
	CSuccess();
	~CSuccess();
	void GetManConclusion(CMan* concreteElementA);
	void GetWomanConclusion(CWoman* concreteElementA);
};

class CFailing :
	public CAction
{
public:
	CFailing();
	~CFailing();
	void GetManConclusion(CMan* concreteElementA);
	void GetWomanConclusion(CWoman* concreteElementA);
};

class CAmativeness :
	public CAction
{
public:
	CAmativeness();
	~CAmativeness();
	void GetManConclusion(CMan* concreteElementA);
	void GetWomanConclusion(CWoman* concreteElementA);
};
