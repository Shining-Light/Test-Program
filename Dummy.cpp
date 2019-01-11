#include "Dummy.h"

bool booleanfunc(int& y)
{
	y = 3;
	printf(" epic boolean function %d", y);
	int x = 2;
	return x > 5;
}
void voidfunc()
{
	int x = 5;
	String str = "Epic void func lol";
	printf("%s %d", str, x);
}

int main()
{
	A Aclass;
	B Bclass;
	
	while (!(GetKeyState(VK_F10) & 0x8000))
	{
		
		
		
		std::cout << "BClass: " << std::endl;
		std::cout << std::hex << std::uppercase << *(DWORD*)AClass << std::nouppercase << std::dec << std::endl;
		std::cout << "AClass: " << std::endl;
		std::cout << std::hex << std::uppercase << *(DWORD*)AClass << std::nouppercase << std::dec << std::endl;
		system("CLS");
		Sleep(0);
	}
	return EXIT_SUCCESS;
}
