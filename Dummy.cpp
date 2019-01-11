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
#define KillKey VK_F10; //kill progrm key
void printAdress(DWORD Address, std::string funcname)
{
	funcname += ": ";
	std::cout << funcname;
	std::cout << std::hex << std::uppercase << Address << std::nouppercase << std::dec << std::endl;
}

int main()
{
	A Aclass;
	B Bclass;
	
	std::string anwser;
	std::cout << "Do want the values of functions to be recurring(y/n)? ";
	std::cin >> anwser;
	
	bool recurring = (anwser == "y");
	
	int integer = 5;'
	float floatval = 12.34;
	double doubleval = 293.829985839;
	const char* charArray = "Array";
	std::string stringtext = "string";
	
	
	while (!(GetKeyState(KillKey) & 0x8000)) //this is aout kill function key so we can kill the program
	{
		if (recurring)
		{
			integer = 5;'
			floatval = 12.34;
			doubleval = 293.829985839;
			charArray = "Array";
			stringtext = "string";
		}
		//------------------------Display Addresses here for the program----------------------//
		std::cout << "ADDRESSES:\n";
		if (recurring) std::cout << "Values Recurring\n";
		printAdress(*(DWORD*)AClass, "AClass"); std::cout << " | Value: " << "undefined\n";
		printAdress(*(DWORD*)BClass, "AClass"); std::cout << " | Value: " << "undefined\n";
		printAdress(*(DWORD*)integer, "integer"); std::cout << " | Value: " << integer << "\n";
		printAdress(*(DWORD*)floatval, "floatval"); std::cout << " | Value: " << floatval << "\n";
		printAdress(*(DWORD*)doubleval, "doubleval"); std::cout << " | Value: " << doubleval << "\n";
		printAdress(*(DWORD*)charArray, "charArray"); std::cout << " | Value: " << charArray.c_str() << "\n";
		printAdress(*(DWORD*)stringtext, "String text); std::cout << " | Value: " << stringtext << "\n";
		system("CLS"); //clear console so that we can see the value changing
		Sleep(0); //sleep for some milliseconds, IDK maybe help the CPU?
	}
	return EXIT_SUCCESS;
}
