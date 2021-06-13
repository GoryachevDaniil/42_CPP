#include "Fixed.hpp"

Fixed::Fixed()// Конструктор
	: value_(0)
{
	std::cout << COLOR_GREEN "Default constructor called" COLOR_RESET << std::endl;
};

Fixed::Fixed(const Fixed &fixed) // Конструктор копированя
	: value_(fixed.value_)
{
	std::cout << COLOR_GREEN "Copy constructor called" COLOR_RESET << std::endl;
	Fixed::getRawBits();
};

Fixed& Fixed::operator= (const Fixed &fixed)// Перегрузка оператора присваивания
{
	std::cout << COLOR_MAGENTA "Assignation operator called" COLOR_RESET << std::endl;
    if (this == &fixed)
        return *this;
	Fixed::getRawBits();
    value_ = fixed.value_;
    return (*this);
}

//-------------------------------------------------------------------------------------------//

Fixed::Fixed(const int &integer_type)
{
	value_ = integer_type << const_value_;
	std::cout << COLOR_BLUE "Int constructor called" COLOR_RESET << std::endl;
};

Fixed::Fixed(const float &float_type)
{
	value_ = roundf(float_type * (1 << const_value_));
	std::cout << COLOR_CYAN "Float constructor called" COLOR_RESET << std::endl;
};

//-------------------------------------------------------------------------------------------//

Fixed::~Fixed()// Деструктор
{
	std::cout << COLOR_RED "Destructor called" COLOR_RESET << std::endl;
};

//-------------------------------------------------------------------------------------------//

int		Fixed::getRawBits(void) const
{
	return (this->value_);
};

void	Fixed::setRawBits( int const raw )
{
	value_ = raw;
	std::cout << COLOR_CYAN "setRawBits member function called" COLOR_RESET << std::endl;
};

//-------------------------------------------------------------------------------------------//

float	Fixed::toFloat(void) const
{

	return ((float)value_ / (float)(1 << const_value_));
};

int		Fixed::toInt(void) const
{

	return ((int)value_ >> const_value_);
};

//-------------------------------------------------------------------------------------------//

std::ostream& operator<<(std::ostream& out, const Fixed &fixed)
{
 	out << fixed.toFloat();
	return (out);
};
