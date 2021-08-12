#include "span.hpp"

int main(void)
{
	std::cout << "----------------------"<< std::endl;
	std::cout << "--------TEST 1--------"<< std::endl;
	std::cout << "----------------------"<< std::endl;
	try
	{
		Span sp = Span(5);
		sp.addNumber(1);
		sp.addNumber(2);
		sp.addNumber(3);
		sp.addNumber(4);
		sp.addNumber(5);
		std::cout << "Array size: " << sp.getSize() << std::endl;
		std::cout << "Array shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Array longest span: " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "----------------------"<< std::endl;
	std::cout << "--------TEST 2--------"<< std::endl;
	std::cout << "----------------------"<< std::endl;
	try
	{
		Span sp = Span(3);
		sp.addNumber(1);
		sp.addNumber(2);
		sp.addNumber(3);
		sp.addNumber(4);
		sp.addNumber(5);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "----------------------"<< std::endl;
	std::cout << "--------TEST 3--------"<< std::endl;
	std::cout << "----------------------"<< std::endl;
	try
	{
		Span sp = Span(5);
		sp.addNumber(1);
		sp.addNumber(3);
		sp.addNumber(6);
		sp.addNumber(10);
		sp.addNumber(15);
		std::cout << "Array size: " << sp.getSize() << std::endl;
		std::cout << "Array shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Array longest span: " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "----------------------"<< std::endl;
	return (0);
}
