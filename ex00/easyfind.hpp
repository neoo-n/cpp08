#ifndef	EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <exception>

# define BLUE "\033[34m"
# define WHITE "\033[0m"
# define RED "\033[0;31m"
# define PINK "\033[1;35m"
# define YELLOW "\033[0;33m"

template <typename T>
void	easyfind(const T cont, int n)
{
	bool	found_it = false;
	for (typename T::const_iterator it = cont.begin(); it != cont.end(); it++)
	{
		if (*it == n)
		{
			found_it = true;
			break ;
		}
	}
	if (!found_it)
		throw std::invalid_argument("This integer doesn't exist.");
	std::cout << "The integer exist in this container" << std::endl;
}

#endif