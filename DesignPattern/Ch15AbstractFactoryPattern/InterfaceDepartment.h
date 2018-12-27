#pragma once
class CInterfaceDepartment
{
public:
	CInterfaceDepartment();
	~CInterfaceDepartment();
	virtual void Insert(CInterfaceDepartment* department) = 0;
	virtual CInterfaceDepartment* GetDepartment(int id) = 0;
};

