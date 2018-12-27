#include "Manager.h"



CManager::CManager()
{
}


CManager::~CManager()
{
}

CManager::CManager(string name)
{
	this->name = name;
}
void CManager::SetSuperior(CManager *superior)
{
	this->superior = superior;
}