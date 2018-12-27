#pragma once
class COperation
{
public:
	COperation();
	~COperation();
	void SetNumberA(double value);
	double GetNumberA();
	void SetNumberB(double value);
	double GetNumberB();
	virtual double GetResult();
private:
	double _numberA = 0;
	double _numberB = 0;
};

