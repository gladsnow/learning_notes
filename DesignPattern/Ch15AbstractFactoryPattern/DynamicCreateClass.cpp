#include "DynamicCreateClass.h"


CDynamicCreateClass::CDynamicCreateClass()
{
}


CDynamicCreateClass::~CDynamicCreateClass()
{
}

CDynamicCreateClass::CDynamicCreateClass(string name, createClass method)
{
	CReflectionFactory::sharedClassFactory().registClass(name, method);
}
