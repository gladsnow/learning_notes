#include"BaseClass.h"
#include"ReflectionFactory.h"
#include"DataAccess.h"
#include"User.h"
#include"Department.h"

int main(void)
{
	CUser* user = new CUser();
	CDepartment* de = new CDepartment();
	CDataAccess *pVar = new CDataAccess();
	CBaseClass* tmp_department = pVar->CreateDepartment("CAccessDepartment");
	CBaseClass* tmp_user = pVar->CreateUser("CAccessUser");
	if ((tmp_department == nullptr) ||(tmp_user == nullptr))
	{
		return 0;
	}
	tmp_user->Insert(user);
	tmp_user->GetUser(1);
	tmp_department->Insert(de);
	tmp_department->GetDepartment(1);

	return 0;
}

