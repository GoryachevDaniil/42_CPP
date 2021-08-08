# include <iostream>
# include <sstream>
# include <string>
# include <unistd.h>
# include <cstdlib>
# include <ctime>
# include <memory>
# include <fstream>
# include <cmath>
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
# include <exception>
# include <stdint.h>

class Base {public: virtual ~Base(){}; };
class A : public Base {};
class B : public Base {};
class C : public Base {};

Base * generate(void)
{
	int i;
	i = rand() % 3;

    if (i == 0)
    {
        std::cout << "Class A" << std::endl;
        return new A;
    }
    else if (i == 1)
    {
        std::cout << "Class B" << std::endl;
        return new B;
    }
    else if (i == 2)
    {
        std::cout << "Class C" << std::endl;
        return new C;
    }
    return 0;
};

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "Class A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "Class B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "Class C" << std::endl;
};

void identify(Base& p)
{
    try
    {
        Base &a = dynamic_cast<A&>(p);
        std::cout << "Class A&" << std::endl;
        a.~Base();
    }
    catch(std::bad_cast &e){(void)e;};
    try
    {
        Base &b = dynamic_cast<B&>(p);
        std::cout << "Class B&" << std::endl;
        b.~Base();
    }
    catch(std::bad_cast &e){(void)e;};
    try
    {
        Base &c = dynamic_cast<C&>(p);
        std::cout << "Class C&" << std::endl;
        c.~Base();
    }
    catch(std::bad_cast &e){(void)e;};
};


int main(void)
{
    Base *base;
    srand(time(NULL));
    base = generate();
    identify(base);
    identify(*base);
}
