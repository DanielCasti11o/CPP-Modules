#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <deque>
#include <list>
#include <vector>
#include <chrono>
#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>
#include <climits>

bool validateArgs(int argc, char** argv, std::vector<int>& rawInput);
void fordJohnsonSortDeque(std::deque<int>& arr);
void fordJohnsonSortList(std::list<int>& arr);


template <typename Container>
void printSequence(const std::string& prefix, const Container& seq) {
	std::cout << prefix;
	for (auto it = seq.begin(); it != seq.end(); ++it)
	{
		if (it != seq.begin()) std::cout << " ";
		std::cout << *it;
	}
	std::cout << std::endl;
}

std::chrono::high_resolution_clock::time_point getCurrentTime();

long long getDurationMicroseconds(const std::chrono::high_resolution_clock::time_point& start,
	const std::chrono::high_resolution_clock::time_point& end);

#endif
