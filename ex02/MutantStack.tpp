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

// --------------------------- METHODS ------------------------------------------
template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin()
{
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end()
{
	return (this->c.end());
}

template <typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rbegin()
{
	return (this->c.rbegin());
}

template <typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rend()
{
	return (this->c.rend());
}
