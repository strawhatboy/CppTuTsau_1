#pragma once

#include "OBJ.h"
#include "B.h"

class A : public OBJ
{
private:
	int m_xxxx;
	B* m_b;
	void callback();

public:
	A(void);
	~A(void);
	void Print(void);
	void AnotherPrint(void);
};

