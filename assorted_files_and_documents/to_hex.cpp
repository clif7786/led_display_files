/* This program lets you convert binary blogs (such as EDIDs)
 * to a .hex format that can be loaded from Verilog code */
#include <iostream>
#include <ios>
#include <cassert>
#include <fstream>
#include <iomanip>
#include <cctype>

const int WIDTH = 16;

int main(int argc, char **argv) {
	assert(argc == 2);
	std::ifstream ifs(argv[1], std::ios::binary);
	char c = 0;
	int i = 0;
	while(ifs.get(c)) {
		std::cout << std::setfill('0') << std::setw(2) << std::hex
		          << std::uppercase << int(static_cast<unsigned char>(c));
		if(!(++i % WIDTH))
			std::cout << "\n";
		else 
			std::cout << " ";
	}
	std::cout << "\n";
}