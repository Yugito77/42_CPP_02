/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:09:05 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/19 18:27:19 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():_i(0)
{
	std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(const Fixed& a)
{
	std::cout<<"Copy constructor called"<<std::endl;
    *this = a;
}

int	Fixed::getRawBits() const
{
	std::cout<<"getRawBits member function called"<<std::endl;
	return (this->_i);
}

void    Fixed::setRawBits(int const raw)
{
	std::cout<<"setRawBits member function called"<<std::endl;
    this->_i = raw;
}

Fixed&  Fixed::operator=(const Fixed& b)
{
	std::cout<<"Copy assignment operator called"<<std::endl;
    this->_i = b.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
	std::cout<<"Destructor called"<<std::endl;
}