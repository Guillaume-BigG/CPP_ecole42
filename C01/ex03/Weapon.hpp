#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon 
{
	public:
	std::string const & getType(void) const;
	void setType(std::string new_type);

	Weapon(std::string type);
	~Weapon();

	private:
	std::string _type;

};

#endif