#include <Windows.h>
#include <string>
#include <iostream>
std::string output;

int main() {
	std::cout << "Type something!" << std::endl;
	std::cin >> output;
	std::cout << "This is your Input: " << output << std::endl << "It is " << output.length() << " Character long!" << std::endl;

	system("pause > nul");
	return 1;
}