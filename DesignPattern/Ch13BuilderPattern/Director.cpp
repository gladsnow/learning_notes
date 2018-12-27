#include "Director.h"
#include "Builder.h"

CDirector::CDirector()
{
}


CDirector::~CDirector()
{
}
void CDirector::Construct(CBuilder* builder)
{
	builder->BuildPartA();
	builder->BuildPartB();
}
