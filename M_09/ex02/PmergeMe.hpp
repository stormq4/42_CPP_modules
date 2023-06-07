#include <string>
#include <iostream>
#include <vector>
#include <list>
#include <fstream>
#include <cmath>
#include <deque>
#include <ctime>

class   PmergeMe{
    public:
        PmergeMe();
        ~PmergeMe();
        PmergeMe(const PmergeMe &ref);
        PmergeMe &operator=(const PmergeMe &ref);

        void    run(int argc, char **argv);
		void	parse(int argc, char **argv);

        void	sortVec(size_t begin, size_t end);
		void	mergeVec(size_t begin, size_t mid, size_t end);

        void	sortDeq(size_t begin, size_t end);
        void   	mergeDeq(size_t begin, size_t mid, size_t end);

        void    print(double vecTime, double deqTime);

    private:
        std::vector<int>    _v, _tmp;
        std::deque<int>     _d, _tmpDeq;
};
