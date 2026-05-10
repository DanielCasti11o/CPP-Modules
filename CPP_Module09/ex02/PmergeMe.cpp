#include "PmergeMe.hpp"

bool validateArgs(int argc, char** argv, std::vector<int>& rawInput)
{
	if (argc < 2)
	{
		std::cerr << "Error" << std::endl;
		return (false);
	}
	for (int i = 1; i < argc; i++)
	{
		char* arg = argv[i];
		if (*arg == '\0')
		{
			std::cerr << "Error" << std::endl;
			return (false);
		}
		for (char* c = arg; *c != '\0'; c++)
		{
			if (!std::isdigit(static_cast<unsigned char>(*c)))
			{
				std::cerr << "Error" << std::endl;
				return (false);
			}
		}
		char*	endptr;
		long val = std::strtol(arg, &endptr, 10);
		if (endptr == arg || *endptr != '\0' || val <= 0 || val > INT_MAX)
		{
			std::cerr << "Error" << std::endl;
			return (false);
		}
		rawInput.push_back(static_cast<int>(val));
	}
	return (true);
}

void fordJohnsonSortDeque(std::deque<int>& arr)
{
	size_t n = arr.size();
	if (n <= 1)
		return;

	std::deque<int> small, large;
	bool has_unpaired = false;
	int unpaired;

	for (size_t i = 0; i < n; i += 2)
	{
		if (i + 1 >= n)
		{
			unpaired = arr[i];
			has_unpaired = true;
			continue;
		}
		int a = arr[i], b = arr[i+1];
		if (a > b)
			std::swap(a, b);
		small.push_back(a);
		large.push_back(b);
	}
	fordJohnsonSortDeque(small);
	for (int val : large)
	{
		auto it = std::lower_bound(small.begin(), small.end(), val);
		small.insert(it, val);
	}
	if (has_unpaired)
	{
		auto it = std::lower_bound(small.begin(), small.end(), unpaired);
		small.insert(it, unpaired);
	}
	arr = small;
}

void fordJohnsonSortList(std::list<int>& arr)
{
	size_t n = arr.size();
	if (n <= 1)
		return;

	std::list<int> small, large;
	bool has_unpaired = false;
	int unpaired;

	auto it = arr.begin();
	while (it != arr.end())
	{
		int a = *it++;
		if (it != arr.end())
		{
			int b = *it++;
			if (a > b) std::swap(a, b);
			small.push_back(a);
			large.push_back(b);
		}
		else
		{
			unpaired = a;
			has_unpaired = true;
		}
	}
	fordJohnsonSortList(small);
	for (int val : large)
	{
		auto it = std::lower_bound(small.begin(), small.end(), val);
		small.insert(it, val);
	}
	if (has_unpaired)
	{
		auto it = std::lower_bound(small.begin(), small.end(), unpaired);
		small.insert(it, unpaired);
	}
	arr = small;
}

std::chrono::high_resolution_clock::time_point getCurrentTime()
{
	return std::chrono::high_resolution_clock::now();
}

long long getDurationMicroseconds(const std::chrono::high_resolution_clock::time_point& start,
	const std::chrono::high_resolution_clock::time_point& end)
{
	return (std::chrono::duration_cast<std::chrono::microseconds>(end - start).count());
}
