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

		double	runVec();
		double	runDeq();

		void	test();
        void    print(double vecTime, double deqTime);

    private:
        std::vector<int>    		_v, _tmp, _initVal;
        std::deque<int>     		_d, _tmpDeq;

};


//while
//while

template <typename T>
class SortFJ {
	public:
		SortFJ() {}
		~SortFJ() {}

		void	insertionSort(size_t begin, size_t end, T &container) {
			int j;
			for (int i = (int)begin + 1; i < (int)end; i++) {
				int key = container[i];
				j = i - 1;
				while (j >= 0 && container[i] > key) {
					container[j + 1] = container[j];
					j--;
				}
				container[j + 1] = key;
			}
		}

		void    sort(size_t begin, size_t end, T &container, T &tmp) {
			if (end - begin < 10) {
				insertionSort(begin, end, container);
			}
			// //if (end - begin < k)
			//	call insertionsort
			if (end - begin < 2) return;
			size_t mid = (begin + end) / 2;
			sort(begin, mid, container, tmp);
			sort(mid, end, container, tmp);
			merge(begin, mid, end, container, tmp);
			for (size_t i = begin; i < end; i++) container[i] = tmp[i];
		}

		void	merge(size_t begin, size_t mid, size_t end, T &container, T &tmp) {
			size_t i = begin;
			size_t j = mid;

			//right side = 4 left = 3
			//
			for (size_t k = begin; k < end; k++) {
				if (i < mid && (j >= end || container[i] <= container[j])) {
					tmp[k] = container[i];
					i++;
				} else if (j < end) {
					tmp[k] = container[j];
					j++;
				}
			}
		}
};

