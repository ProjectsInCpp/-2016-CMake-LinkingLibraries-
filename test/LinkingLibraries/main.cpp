#include <src/Lib1.hpp>
#include <src2/Lib2.hpp>
#include <iostream>

using namespace std;

int main()
{
	std::cout << "MainBinary" << std::endl;
	std::cout << "Print From Lib 1" << std::endl;
	printFromLib1();
	
	std::cout << std::endl << "Print From Lib 2" << std::endl;
	printFromLib2();

    return 0;
}

