
#include "Span.hpp"

// ------------------------------ CONSTRUCTORS AND DESTRUCTOR -------------------------------------

Span::Span()
: _N(0)
{
	if (DEBUG)
		std::cout << BLUE << "Default Span constructor called" << WHITE << std::endl;
}

Span::Span(const Span &cpy)
: _N(cpy._N)
{
	this->_ms_int = cpy._ms_int;
	if (DEBUG)
		std::cout << BLUE << "Copy Span constructor called" << WHITE << std::endl;
}

Span::Span(const unsigned int N)
: _N(N)
{
	if (DEBUG)
		std::cout << BLUE << "Copy Span constructor called" << WHITE << std::endl;
}

Span::~Span()
{
	if (DEBUG)
		std::cout << YELLOW << "Destructor Span called" << WHITE << std::endl;
}

Span &Span::operator=(const Span &obj)
{
	if (this != &obj)
	{
		this->_ms_int = obj._ms_int;
		this->_N = obj._N;
	}
	if (DEBUG)
		std::cout << PINK << "Assignment Span called" << WHITE << std::endl;
	return (*this);
}


// ------------------------------ METHODS -------------------------------------
void			Span::addNumber(int n)
{
	if (this->_ms_int.size() == this->_N)
		throw std::out_of_range(RED "Out of range : there is already enough integer." WHITE);
	this->_ms_int.insert(n);
}
template <typename T>
void			Span::addMultipleNumbers(T nbs)
{
	if (nbs.size() == 0)
		return ;
	for (typename T::iterator it = nbs.begin(); it != nbs.end(); it++)
	{
		this->addNumber(*it);
	}
}

unsigned int	Span::shortestSpan()
{
	if (this->_ms_int.size() <= 1)
		throw NoSpan();

	std::multiset<int>::iterator	it = this->_ms_int.begin();
	std::multiset<int>::iterator	it2 = this->_ms_int.begin();

	int								shortest = std::abs(*(++it2) - *it);
	while (it2 != this->_ms_int.end())
	{
		if (std::abs(*it2 - *it) < shortest)
			shortest = std::abs(*it2 - *it);
		it++;
		it2++;
	}
	return (shortest);
}

unsigned int	Span::longestSpan()
{
	if (this->_ms_int.size() <= 1)
		throw NoSpan();

	std::multiset<int>::iterator	low = this->_ms_int.begin();
	std::multiset<int>::iterator	high = this->_ms_int.end();
	return (std::abs(*(--high) - *low));
}

// ------------------------------ EXCEPTIONS -------------------------------------
const char*	Span::NoSpan::what() const throw()
{
	return (RED "There is no or only one integer. There is no span." WHITE);
}