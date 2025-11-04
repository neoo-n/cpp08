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

		typedef typename MutantStack<T>::container_type::iterator iterator;
		typedef typename MutantStack<T>::container_type::reverse_iterator reverse_iterator;

		iterator	begin();
		iterator	end();
		reverse_iterator	rbegin();
		reverse_iterator	rend();
};

# include "MutantStack.tpp"

#endif