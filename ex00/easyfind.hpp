#ifndef	EASYFIND_HPP
# define EASYFIN_HPP

# include <iostream>
# include <exception>

# define BLUE "\033[34m"
# define WHITE "\033[0m"
# define RED "\033[0;31m"
# define PINK "\033[1;35m"
# define YELLOW "\033[0;33m"

template <typename T>
void	easyfind(T cont, int n)
{
	bool	found_it = false;
	size_t	cont_size = cont.size();
	for (size_t i = 0; i < cont_size; i++)
	{
		if (cont.back() == n)
			found_it = true;
		cont.pop_back();
	}
	if (!found_it)
		throw std::invalid_argument("This integer doesn't exist.");
	std::cout << "The integer exist in this container" << std::endl;
}

#endif