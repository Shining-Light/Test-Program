#include <windows.h>
#include <iostream>
#include <iomanip>

class Vector
{
	int x, y, z;
}

class A
{
	int integer;
	float floatvar
	double doublevar;
	DWORD dwordvar;
	Vector Vectorvar;
	BYTE bytevar;
	bool boolean = false;
}

class B
{
	int ReturnOne();
	bool SetOne(int & num);
	void SetFive(int & num);
	void ClosePrograms();
}
