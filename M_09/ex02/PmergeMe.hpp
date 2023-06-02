#include <string>
#include <iostream>
#include <vector>
#include <list>

class   PmergeMe{
    public:
        PmergeMe();
        ~PmergeMe();
        PmergeMe(const PmergeMe &ref);
        PmergeMe &operator=(const PmergeMe &ref);

        void    run();
    private:
        std::vector<int>    _v;
        std::list<int>      _l;
};