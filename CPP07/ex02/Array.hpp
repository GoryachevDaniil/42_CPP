#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <sstream>
# include <string>
# include <unistd.h>
# include <cstdlib>
# include <ctime>
# include <memory>
# include <fstream>
# include <cmath>
# include <exception>
# include <stdint.h>
# define	COLOR_RED     "\x1b[31m"
# define	COLOR_GREEN   "\x1b[32m"
# define	COLOR_YELLOW  "\x1b[33m"
# define	COLOR_BLUE    "\x1b[34m"
# define	COLOR_MAGENTA "\x1b[35m"
# define	COLOR_CYAN    "\x1b[36m"
# define	COLOR_RESET   "\x1b[0m"
# define	B_GRAY		"\033[1;30m"
# define	B_RED		"\033[1;31m"
# define	B_GREEN		"\033[1;32m"
# define	B_YELLOW	"\033[1;33m"
# define	B_BLUE		"\033[1;34m"
# define	B_PURPLE	"\033[1;35m"
# define	B_CYAN		"\033[1;36m"
# define	B_WHITE		"\033[1;37m"

template<typename T>
class Array
{
	private:
    	T				*array_;
    	unsigned int	size_;
	public:
    	Array(): size_(0), array_(nullptr){};
    	Array(unsigned int size): size_(size){array_ = new T[size_]();};
    	Array(Array const &copy)
		{
		if (copy.size_ > 0)
			{
				array_ = new T[copy.size_]();
				for (unsigned int i = 0; i < copy.size_; i++)
					array_[i] = copy.array_[i];
			}
			size_ = copy.size_;
		}
		Array &operator=(Array const &object)
		{
			if (this == object)
				return this;
			if  (array_ != NULL)
				delete[] array_;
			array_ = new T[object.size_]();
			for (unsigned int i = 0; i < object.size_; i++)
				array_[i] = object.array_[i];
			size_ = object.size_;
			return (*this);
		};
		virtual ~Array()
		{
			if (size_ > 0)
				delete[] array_;
		};
    	int getSize(void) const{return size_;};
	class ArrayExcep: public std::exception
    {
        virtual const char* what() const throw()
        {
            return "Invaid index!";
            exit(1);
        };
	};
    T &operator[](unsigned int idx)
    {
        if (idx < 0 || idx >= size_)
		    throw ArrayExcep();
	    return (array_[idx]);
    };
};

#endif
