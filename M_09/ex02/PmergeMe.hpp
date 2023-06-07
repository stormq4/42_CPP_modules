#include <string>
#include <iostream>
#include <vector>
#include <list>
#include <fstream>
#include <cmath>

class   PmergeMe{
    public:
        PmergeMe();
        ~PmergeMe();
        PmergeMe(const PmergeMe &ref);
        PmergeMe &operator=(const PmergeMe &ref);

        void    run(char *fileName);
		void	parse(char *fileName);
		void	sort(size_t begin, size_t end);
		void	bubbleSort(size_t begin, size_t end);
		void	merge(size_t begin, size_t mid, size_t end);

    private:
        std::vector<int>    _v, _tmp;
        std::list<int>      _print;
};

//template <typename T> bool comparePM(T a, T b) {
//    return a < b;
//}
