#include "Squad.hpp"

Squad::Squad():
	unit_count_(0), units_(nullptr){};

Squad::Squad(const Squad &copy):
	unit_count_(copy.unit_count_), units_(copy.units_){};

Squad& Squad::operator=(const Squad &object){
    if (this == &object)
        return *this;
	unit_count_ = object.unit_count_;
	units_ = object.units_;
    return (*this);
};

Squad::~Squad(){
	if (units_)
	{
		for (int i = 0; i < unit_count_; i++)
			delete units_[i];
		delete units_;
	}
};

int Squad::getCount() const {return(unit_count_);};

ISpaceMarine* Squad::getUnit(int ptr) const{
	if (unit_count_ == 0 || ptr < 0 || ptr >= unit_count_)
		return (nullptr);
	return(this->units_[ptr]);
};

int Squad::push(ISpaceMarine* unit){
	if (!unit)
		return (unit_count_);
	if (units_)
	{
		ISpaceMarine** units = new ISpaceMarine*[this->unit_count_ + 1];
		for (int i = 0; i < unit_count_; i++)
			units[i] = this->units_[i];
		delete this->units_;
		units_ = units;
		units_[unit_count_] = unit;
		unit_count_++;
	}
	else
	{
		this->units_ = new ISpaceMarine*[1];
		units_[0] = unit;
		unit_count_ = 1;
	}
	return (this->unit_count_);
};
