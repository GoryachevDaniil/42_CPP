#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include "AWeapon.hpp"

class PowerFist : virtual public AWeapon
{
	private:
		std::string	attack_output_;
	public:
		PowerFist();
		PowerFist(std::string const & name, int apcost, int damage);
		PowerFist(const PowerFist &copy);
		PowerFist& operator=(const PowerFist &object);
		~PowerFist();
		virtual void attack() const;
};

std::ostream& operator<<(std::ostream& out, const AWeapon &input);

#endif
