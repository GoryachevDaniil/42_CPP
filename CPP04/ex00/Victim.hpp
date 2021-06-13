#ifndef VICTIM_HPP
# define VICTIM_HPP
# define COLOR_RED     "\x1b[31m"
# define COLOR_GREEN   "\x1b[32m"
# define COLOR_YELLOW  "\x1b[33m"
# define COLOR_BLUE    "\x1b[34m"
# define COLOR_MAGENTA "\x1b[35m"
# define COLOR_CYAN    "\x1b[36m"
# define COLOR_RESET   "\x1b[0m"
# include <iostream>

class Victim
{
protected:
	std::string	name_;
public:
	Victim();
	Victim(std::string name);
	Victim(const Victim &victim);
	Victim& operator=(const Victim &victim);
	~Victim();
	std::string getName();
	void		setName(std::string name);
	virtual void		getPolymorphed() const;
	virtual std::string	toIntroduce(void) const;
};

std::ostream& operator<<(std::ostream& out, const Victim &victim);

#endif
