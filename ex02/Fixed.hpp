/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:37:57 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/26 18:37:58 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class	Fixed
{
	public :
	
/********Constructeurs/destructeur********/

	Fixed();
	Fixed(const Fixed& a);
	Fixed(const int nb);
	Fixed(const float nb);
	~Fixed();

/********Methodes********/
	
	Fixed&	operator=(const Fixed& b);
	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat( void ) const;
	int toInt( void ) const;

/********Comparaisons********/

	bool	operator>(const Fixed& b) const;
	bool	operator<(const Fixed& b) const;
	bool	operator>=(const Fixed& b) const;
	bool	operator<=(const Fixed& b) const;
	bool	operator==(const Fixed& b) const;
	bool	operator!=(const Fixed& b) const;

/********Arithmetiques********/

	Fixed	operator+(const Fixed& b) const;
	Fixed	operator-(const Fixed& b) const;
	Fixed	operator*(const Fixed& b) const;
	Fixed	operator/(const Fixed& b) const;

/********Incrementation/decrementation********/
	
	Fixed			operator++( void );
	Fixed			operator++( int b);
	Fixed			operator--( void );
	Fixed			operator--( int b);
	
/********Min/Max********/

	Fixed&			min(Fixed& f1, Fixed& f2);
	Fixed&			max(Fixed& f1,  Fixed& f2);
	static const Fixed&		min(const Fixed& f1, const Fixed& f2);
	static const Fixed&		max(const Fixed& f1, const Fixed& f2);
		
	private :
	
	int	s_i;
	int static const	s_bits = 8;	
};

std::ostream&	operator<<(std::ostream &flux, const Fixed &obj);

#endif
