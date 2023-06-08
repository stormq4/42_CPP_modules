#include "RPN.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "Error" << std::endl;
        return 1;
    }
	try {
		RPN rpn;
		std::string input = argv[1];
    	rpn.run(input);
	} catch (std::exception &e) {
		(void)e;
		std::cerr << "Error" << std::endl;
	}
    return 0;
}
