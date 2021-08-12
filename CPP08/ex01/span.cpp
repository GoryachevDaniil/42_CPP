#include "span.hpp"

Span::Span():N_(0){};

Span::Span(unsigned int N):N_(N){};

Span::Span(const Span &copy){*this = copy;};

Span::~Span(){};

Span			&Span::operator=(const Span &object)
{
	if (this == &object)
		return (*this);
	if (!(array_.empty()))
		array_.clear();
	N_ = object.N_;
	for (unsigned int i = 0; i < object.getSize(); i++)
		array_.push_back(object.array_[i]);
	std::sort(array_.begin(), array_.end());
	return (*this);
};

int				&Span::operator[](unsigned int index){
	if (index < 0 || index >= N_)
		throw std::runtime_error("Invalid index");
	return (array_[index]);
};

void			Span::addNumber(int num){
	if (array_.size() == N_)
		throw std::out_of_range("Overflow.");
	array_.push_back(num);
	std::sort(array_.begin(), array_.end());
};

void			Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end){
	if ((end - begin + array_.size()) > N_)
		throw std::out_of_range("Overflow.");
	array_.insert(array_.begin() + array_.size(), begin, end);
	std::sort(array_.begin(), array_.end());
};

int				Span::shortestSpan(){
	if (array_.size() < 2)
		throw std::runtime_error("Haven't 2 or more element.");
	return (*(++array_.begin()) - *(array_.begin()));
};

int				Span::longestSpan(){
	if (array_.size() < 2)
		throw std::runtime_error("Haven't 2 or more element.");
	return (*(--array_.end()) - *(array_.begin()));
};

unsigned int	Span::getSize() const{return (array_.size());};
