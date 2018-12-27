#pragma once

class CSingleton
{
private:
	CSingleton();
	~CSingleton();
	static CSingleton* instance;
public:
	static CSingleton* Get_Instance(void)
	{

		if (instance == nullptr)
		{
			instance = new CSingleton();
		}

		return instance;
	}
};

