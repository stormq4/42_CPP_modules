#include "RPN.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "Error" << std::endl;
        return 1;
    }
    RPN rpn;
    std::string input = argv[1];
    rpn.run(input);
    return 0;
}
