#pragma once
class CChocolateBoiler
{
private:
	CChocolateBoiler();
	~CChocolateBoiler();
public:
	void fill();
	void drain();
	void boil();
	bool isEmpty();
	bool isBoiled();
	static CChocolateBoiler* getInstance();
private:
	bool empty_;
	bool boiled_;
	static CChocolateBoiler* instance_;

};

