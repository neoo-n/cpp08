#include "Span.hpp"
#include <vector>
#include <cstdlib>
#include <ctime>

int main()
{
	std::cout << "** Empty span : add **" << std::endl;
	try
	{
		Span	s;
		s.addNumber(3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "** Empty span : shortest **" << std::endl;
	try
	{
		Span	s;
		s.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "** One int in span : shortest **" << std::endl;
	try
	{
		Span	s(1);
		s.addNumber(3);
		s.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
}

	std::cout << std::endl << "** One int in span : longest **" << std::endl;
	try
	{
		Span	s(1);
		s.addNumber(3);
		s.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "** Span complete **" << std::endl;
	try
	{
		Span	s(10);
		s.addNumber(3);
		s.addNumber(5);
		s.addNumber(-1);
		s.addNumber(9);
		s.addNumber(45);
		s.addNumber(1024);
		s.addNumber(-184);
		std::cout << "Shortest Span : " << s.shortestSpan() << std::endl;
		std::cout << "Longest Span : " << s.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl << "** Span complete : multiple numbers **" << std::endl;
	try
	{
		std::vector<int> v;

		v.reserve(20000);
		std::srand(std::time(0));
		for (int i = 0; i < 20000; i++)
			v.push_back(std::rand());
		Span	s(20000);
		s.addMultipleNumbers(v);
		std::cout << "Shortest Span : " << s.shortestSpan() << std::endl;
		std::cout << "Longest Span : " << s.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
