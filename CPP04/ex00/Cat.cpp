/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 03:08:29 by ereali            #+#    #+#             */
/*   Updated: 2022/04/11 05:40:19 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"


Cat::Cat()
{
	_type = "Cat";
	std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(Cat const &src)
{
	*this = src;
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat & Cat::operator=(Cat const & rhs)
{
	std::cout << "Copy assignement operator called" << std::endl;
	_type = rhs._type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Miaou Miaou 🐱" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Default destructor called" << std::endl;
}
