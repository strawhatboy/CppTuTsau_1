#include "StdAfx.h"
#include "B.h"

B::B(void)
{
	this->func = NULL;
}


B::~B(void)
{
}

void B::AddListener(OBJ* handler, XXFUNC func)
{
	this->func = func;
	this->handler = handler;
}


void B::TriggerEvent()
{
	if (this->func && this->handler)
	{
		(this->handler->*func)();
		//(this->*func)();
	}
}