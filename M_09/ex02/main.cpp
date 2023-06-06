#include "PmergeMe.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "Error: Bad arguments" << std::endl;
        return 1;
    }
    PmergeMe    p;
    p.run(argv[1]);
    return 0;
}
