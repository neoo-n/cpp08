#include "MutantStack.hpp"

// -------------------------- CONSTRUCTORS .. ----------------------------------
template <typename T>
MutantStack<T>::MutantStack()
: std::stack<T>()
{}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &cpy)
: std::stack<T>(cpy)
{}

template <typename T>
MutantStack<T> MutantStack<T>::operator=(const MutantStack &obj)
{
	if (this != &obj)
		*this = std::stack<T>::operator=(obj);
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack()
{}

// --------------------------- ITERATOR ----------------------------------------
template <typename T>
// typename MutantStack<T>::iterator	MutantStack<T>::iterator::operator++()
// {
// 	MutantStack<T>::iterator temp = *this;
// 	temp.pop();


// }
typename MutantStack<T>::iterator	MutantStack<T>::iterator::operator*()
{
	return (*this);
}

// --------------------------- METHODS ------------------------------------------
template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin()
{
	return (this->top());
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end()
{
	MutantStack<T>	temp = *this;
	size_t			ms_size = this->size();
	while (ms_size - 1 > 0)
	{
		temp.pop();
		ms_size--;
	}
	return (temp.top());
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::rend()
{
	return (this->top());
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::rbegin()
{
	MutantStack<T>	temp = *this;
	size_t			ms_size = this->size();
	while (ms_size - 1 > 0)
	{
		temp.pop();
		ms_size--;
	}
	return (temp.top());
}

// --------------------------- OUTSIDE -------------------------------
template <typename T>
std::ostream	operator<<(std::ostream &os, typename MutantStack<T>::iterator it)
{
	os << it;
	return (os);
}
