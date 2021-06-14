#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include "AWeapon.hpp"

class PlasmaRifle : virtual public AWeapon
{
	private:
		std::string	attack_output_;
	public:
		PlasmaRifle();
		PlasmaRifle(std::string const & name, int apcost, int damage);
		PlasmaRifle(const PlasmaRifle &copy);
		PlasmaRifle& operator=(const PlasmaRifle &object);
		~PlasmaRifle();
		virtual void attack() const;
};

std::ostream& operator<<(std::ostream& out, const PlasmaRifle &input);

#endif
