/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ereali <ereali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 03:13:03 by ereali            #+#    #+#             */
/*   Updated: 2022/04/11 05:39:57 by ereali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
#include "Animal.hpp"
#include <iostream>
#include <string>

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const & src);
		Cat & operator=(Cat const & rhs);
		void makeSound() const;
		~Cat();
};
#endif
