#pragma once
#include "Finery.h"
class CTShirts :
	public CFinery
{
public:
	CTShirts();
	~CTShirts();
	void Show(void);
};

class CBigTrouser :
	public CFinery
{
public:
	CBigTrouser();
	~CBigTrouser();
	void Show(void);
};

class CSneakers:
	public CFinery
{
public:
	CSneakers();
	~CSneakers();
	void Show(void);
};

class CLeatherShoes :
	public CFinery
{
public:
	CLeatherShoes();
	~CLeatherShoes();
	void Show(void);
};

class CTie :
	public CFinery
{
public:
	CTie();
	~CTie();
	void Show(void);
};

class CSuit :
	public CFinery
{
public:
	CSuit();
	~CSuit();
	void Show(void);
};