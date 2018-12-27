#pragma once
#include"BaseClass.h"
#include"DynamicCreateClass.h"

#define DECLARE_CLASS(className) \
static CDynamicCreateClass*  m_##className##dc;

#define IMPLEMENT_CLASS(className) \
CDynamicCreateClass* className::m_##className##dc = \
new CDynamicCreateClass(#className, className::createInstance);

#define SYNTHESIZE(classType, varType, varName)    \
public:                                             \
inline static void set##varName(CBaseClass*cp, void*value){ \
    classType* tp = (classType*)cp ;                        \
    tp->varName = (varType)value ;                      \
}                                                       \
inline varType get##varName(void) const {                \
    return varName ;                                      \
}
