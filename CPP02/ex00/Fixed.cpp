#include "Fixed.hpp"

Fixed::Fixed()// Конструктор
	: value_(0)
{
	std::cout << COLOR_GREEN "Default constructor called" COLOR_RESET << std::endl;
};

Fixed::~Fixed()// Деструктор
{
	std::cout << COLOR_RED "Destructor called" COLOR_RESET << std::endl;
};

Fixed::Fixed(const Fixed &fixed) // Конструктор копированя
	: value_(fixed.value_)
{
	std::cout << COLOR_GREEN "Copy constructor called" COLOR_RESET << std::endl;
	Fixed::getRawBits();
};

Fixed& Fixed::operator= (const Fixed &fixed)// Перегрузка оператора присваивания
{
	std::cout << COLOR_MAGENTA "Assignation operator called." COLOR_RESET << std::endl;
    if (this == &fixed)
        return *this;
	Fixed::getRawBits();
    value_ = fixed.value_;
    return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << COLOR_YELLOW "getRawBits member function called" COLOR_RESET << std::endl;
	return (this->value_);
};

void	Fixed::setRawBits( int const raw )
{
	value_ = raw;
	std::cout << COLOR_CYAN "setRawBits member function called" COLOR_RESET << std::endl;
};
