#include "PmergeMe.hpp"

int main(int argc, char** argv)
{
	std::vector<int> rawInput;

	if (!validateArgs(argc, argv, rawInput))
		return (1);

	printSequence("Before: ", rawInput);

	long long timeDeq;
	std::deque<int> deq;
	{
		auto start = getCurrentTime();
		deq = std::deque<int>(rawInput.begin(), rawInput.end());
		fordJohnsonSortDeque(deq);
		auto end = getCurrentTime();
		timeDeq = getDurationMicroseconds(start, end);
	}

	long long timeLst;
	std::list<int> lst;
	{
		auto start = getCurrentTime();
		lst = std::list<int>(rawInput.begin(), rawInput.end());
		fordJohnsonSortList(lst);
		auto end = getCurrentTime();
		timeLst = getDurationMicroseconds(start, end);
	}
	printSequence("After: ", deq);
	std::cout << "Time to process a range of " << rawInput.size()
		<< " elements with std::deque : " << timeDeq << " us" << std::endl;
	std::cout << "Time to process a range of " << rawInput.size()
		<< " elements with std::list : " << timeLst << " us" << std::endl;
	return (0);
}
