/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juhyeonl <juhyeonl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 10:29:36 by juhyeonl          #+#    #+#             */
/*   Updated: 2025/12/30 12:26:08 by juhyeonl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
	int					_fixedValue;
	static const int	_fractalBits = 8;

public:
	Fixed();
	Fixed(const Fixed& other);				// copy constructor(복사 생성자)
	Fixed& operator=(const Fixed& other);	// copy Assignment Operator(복사 대입 연산자)
	~Fixed();
	int		getRawBits() const;
	void	setRawBits(int const raw);
	
	Fixed(const int i);
	Fixed(const float f);
	float	toFloat(void) const;
	int		toInt(void) const;
};
std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif