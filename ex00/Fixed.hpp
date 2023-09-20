/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcherpre <hcherpre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:09:14 by hcherpre          #+#    #+#             */
/*   Updated: 2022/10/19 18:23:07 by hcherpre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class	Fixed
{
	public :

	Fixed();
	Fixed(const Fixed& a);
	~Fixed();
	
	Fixed& operator=(const Fixed& b);
	int getRawBits() const;
	void setRawBits(int const raw);

	private :
	
	int	_i;
	int static const	_bits = 8;	
};

#endif