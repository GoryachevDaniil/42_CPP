#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
public:
    AssaultTerminator();
    AssaultTerminator(const AssaultTerminator &copy);
	AssaultTerminator& operator=(const AssaultTerminator &object);
    virtual ~AssaultTerminator();
    ISpaceMarine *clone(void) const {return (0);};
    virtual void battleCry() const;
    virtual void rangedAttack() const;
    virtual void meleeAttack() const;
};

#endif
