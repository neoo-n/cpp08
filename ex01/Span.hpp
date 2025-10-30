
#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <set>
# include <exception>
# include <cmath>

# define BLUE "\033[34m"
# define WHITE "\033[0m"
# define RED "\033[0;31m"
# define PINK "\033[1;35m"
# define YELLOW "\033[0;33m"
# define DEBUG false

class Span
{
	private:
		std::multiset<int>	_ms_int;
		unsigned int		_N;
		class	NoSpan : public std::exception
		{
			public:
				const char *	what() const throw();
		};

	public:
		Span();
		Span(const Span &cpy);
		Span(const unsigned int N);
		~Span();
		Span &operator=(const Span &obj);

		void			addNumber(int n);
		template <typename T>
		void			addMultipleNumbers(T nbs)
		{
			if (nbs.size() == 0)
				return ;
			for (typename T::iterator it = nbs.begin(); it != nbs.end(); it++)
			{
				this->addNumber(*it);
			}
		}
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
};

#endif

