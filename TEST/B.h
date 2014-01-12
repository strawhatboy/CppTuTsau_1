#pragma once
#include "stdafx.h"
class B :
	public OBJ
{
private:
	XXFUNC func;
	OBJ* handler;

public:
	void AddListener(OBJ* handler, XXFUNC func);
	void TriggerEvent();
	B(void);
	~B(void);
};

