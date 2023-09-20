/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:37:41 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/26 18:39:30 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():s_i(0)
{
	std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(const Fixed& a)
{
	std::cout<<"Copy constructor called"<<std::endl;
    *this = a;
}

Fixed::Fixed(const int	nb) : s_i(nb << this->s_bits)
{
	std::cout << "int constructor called " << std::endl;
}

Fixed::Fixed(const float	nb) : s_i((int)roundf(nb * (1 << this->s_bits)))
{
	std::cout << "float constructor called " << std::endl;
}

Fixed::~Fixed()
{
	std::cout<<"Destructor called"<<std::endl;
}

/********************************************************************/

int	Fixed::getRawBits() const
{
	std::cout<<"getRawBits member function called"<<std::endl;
	return (this->s_i);
}

void    Fixed::setRawBits(int const raw)
{
	std::cout<<"setRawBits member function called"<<std::endl;
    this->s_i = raw;
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->s_i / (1 << this->s_bits));
}

int	Fixed::toInt( void ) const
{
	return (this->s_i >> this->s_bits);
}

/********************************************************************/

std::ostream&	operator<<(std::ostream &flux, const Fixed &obj)
{
	flux << obj.toFloat();
	return (flux);
}

Fixed&  Fixed::operator=(const Fixed& b)
{
	std::cout<<"Copy assignment operator called"<<std::endl;
    this->s_i = b.getRawBits();
    return (*this);
}
