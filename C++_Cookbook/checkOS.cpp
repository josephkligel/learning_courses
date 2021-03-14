#include <iostream>

int main(){
	#if defined(__linux__)
		std::cout << "This is a Linux operating system\n";
	# elif defined(_WIN32 || _WIN64)
		std::cout << "This is a Windows platform\n";
	# elif defined(TARGET_OS_MAC)
		std::cout << "This is a Mac operating system\n";
	#endif
}
