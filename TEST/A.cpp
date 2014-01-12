#include "StdAfx.h"
#include "A.h"
#include "B.h"


A::A(void)
{
	this->m_xxxx = 0;
	this->m_b = new B();
	this->m_b->AddListener(this, XXFUNC_SELECTOR(A::callback));
}


A::~A(void)
{
}

void A::callback()
{
	this->Print();
	this->m_xxxx = 200000;
	this->Print();
}

void A::Print()
{
	printf("%d\r\n", this->m_xxxx);
}

void A::AnotherPrint()
{
	this->m_b->TriggerEvent();
}