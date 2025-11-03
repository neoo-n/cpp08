#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <ostream>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(const MutantStack &cpy);
		MutantStack operator=(const MutantStack &obj);
		~MutantStack();

		class iterator : public std::iterator<std::input_iterator_tag, T, T, T*, T&>
		{
			// private:
				// T	*ptr;
			public:
				iterator operator++();
				iterator operator++(int);
				iterator operator--();
				iterator operator--(int);
				iterator operator*();
		};
		iterator	begin();
		iterator	end();
		iterator	rbegin();
		iterator	rend();
};

template <typename T>
std::ostream	operator<<(std::ostream &os, typename MutantStack<T>::iterator it);


# include "MutantStack.tpp"

#endif