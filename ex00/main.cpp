#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>
#include <queue>
#include <stack>

void	sequence_containers()
{
	std::vector<int>	v;
	v.reserve(6);

	v.push_back(1);
	v.push_back(4);
	v.push_back(23);
	v.push_back(-5);
	v.push_back(0);
	v.push_back(-42);

	try
	{
		::easyfind(v, 4);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << std::endl << WHITE;
	}
	
	try
	{
		::easyfind(v, -6);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << std::endl << WHITE;
	}

	std::deque<int>	d;

	d.push_back(1);
	d.push_back(4);
	d.push_back(23);
	d.push_back(-5);
	d.push_back(0);
	d.push_back(-42);

	try
	{
		::easyfind(d, 4);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << std::endl << WHITE;
	}
	
	try
	{
		::easyfind(d, -6);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << std::endl << WHITE;
	}

	std::list<int>	l;

	l.push_back(1);
	l.push_back(4);
	l.push_back(23);
	l.push_back(-5);
	l.push_back(0);
	l.push_back(-42);

	try
	{
		::easyfind(l, 4);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << std::endl << WHITE;
	}
	
	try
	{
		::easyfind(l, -6);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << std::endl << WHITE;
	}
}

void	adaptor_containers()
{
	std::stack<int>	s;
	s.push(1);
	s.push(4);
	s.push(23);
	s.push(-5);
	s.push(0);
	s.push(-42);

	try
	{
		::easyfind(s, 4);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << std::endl << WHITE;
	}
	
	try
	{
		::easyfind(s, -6);
	}
	catch(const std::exception& e)
	{
		std::cerr << RED << e.what() << std::endl << WHITE;
	}
}

int main()
{
	sequence_containers();
	adaptor_containers();
	return (0);
}