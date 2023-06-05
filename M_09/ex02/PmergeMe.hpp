#include <string>
#include <iostream>
#include <vector>
#include <list>
#include <fstream>

class   PmergeMe{
    public:
        PmergeMe();
        ~PmergeMe();
        PmergeMe(const PmergeMe &ref);
        PmergeMe &operator=(const PmergeMe &ref);

        void    run(char *fileName);
		void	parse(char *fileName);
		void	sort(size_t begin, size_t end);
		void	merge(size_t begin, size_t mid, size_t end);


    private:
        std::vector<int>    _v;
        std::list<int>      _l;
};