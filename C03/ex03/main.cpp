#include "DiamondTrap.hpp"

int		main(void)
{

	DiamondTrap	Yann("Yann");
	DiamondTrap	Jules("Jules");

	std::cout << "this is " << Yann.DiamondTrap::getName() << " . He has currently " << Yann.DiamondTrap::getHitPoints() << " HP and " << Yann.DiamondTrap::getEnergyPoints() << " energy. His attack does " << Yann.DiamondTrap::getAttDam() << " Att Dam" << std::endl;
	std::cout << "this is " << Jules.DiamondTrap::getName() << " . He has currently " << Jules.DiamondTrap::getHitPoints() << " HP and " << Jules.DiamondTrap::getEnergyPoints() << " energy. His attack does " << Jules.DiamondTrap::getAttDam() << " Att Dam" << std::endl;
	
	Yann.attack("Jules");
	Jules.takeDamage(40);
	std::cout << "this is " << Yann.DiamondTrap::getName() << " . He has currently " << Yann.DiamondTrap::getHitPoints() << " HP and " << Yann.DiamondTrap::getEnergyPoints() << " energy. His attack does " << Yann.DiamondTrap::getAttDam() << " Att Dam" << std::endl;
	std::cout << "this is " << Jules.DiamondTrap::getName() << " . He has currently " << Jules.DiamondTrap::getHitPoints() << " HP and " << Jules.DiamondTrap::getEnergyPoints() << " energy. His attack does " << Jules.DiamondTrap::getAttDam() << " Att Dam" << std::endl;
	
	Yann.attack("Jules");
	Jules.takeDamage(40);
	std::cout << "this is " << Yann.DiamondTrap::getName() << " . He has currently " << Yann.DiamondTrap::getHitPoints() << " HP and " << Yann.DiamondTrap::getEnergyPoints() << " energy. His attack does " << Yann.DiamondTrap::getAttDam() << " Att Dam" << std::endl;
	std::cout << "this is " << Jules.DiamondTrap::getName() << " . He has currently " << Jules.DiamondTrap::getHitPoints() << " HP and " << Jules.DiamondTrap::getEnergyPoints() << " energy. His attack does " << Jules.DiamondTrap::getAttDam() << " Att Dam" << std::endl;

	Jules.beRepaired(60);
	std::cout << "this is " << Yann.DiamondTrap::getName() << " . He has currently " << Yann.DiamondTrap::getHitPoints() << " HP and " << Yann.DiamondTrap::getEnergyPoints() << " energy. His attack does " << Yann.DiamondTrap::getAttDam() << " Att Dam" << std::endl;
	std::cout << "this is " << Jules.DiamondTrap::getName() << " . He has currently " << Jules.DiamondTrap::getHitPoints() << " HP and " << Jules.DiamondTrap::getEnergyPoints() << " energy. His attack does " << Jules.DiamondTrap::getAttDam() << " Att Dam" << std::endl;

	Yann.attack("Jules");
	Jules.takeDamage(150);
	std::cout << "this is " << Yann.DiamondTrap::getName() << " . He has currently " << Yann.DiamondTrap::getHitPoints() << " HP and " << Yann.DiamondTrap::getEnergyPoints() << " energy. His attack does " << Yann.DiamondTrap::getAttDam() << " Att Dam" << std::endl;
	std::cout << "this is " << Jules.DiamondTrap::getName() << " . He has currently " << Jules.DiamondTrap::getHitPoints() << " HP and " << Jules.DiamondTrap::getEnergyPoints() << " energy. His attack does " << Jules.DiamondTrap::getAttDam() << " Att Dam" << std::endl;

	Yann.attack("Jules");
	Jules.takeDamage(30);
	std::cout << "this is " << Yann.DiamondTrap::getName() << " . He has currently " << Yann.DiamondTrap::getHitPoints() << " HP and " << Yann.DiamondTrap::getEnergyPoints() << " energy. His attack does " << Yann.DiamondTrap::getAttDam() << " Att Dam" << std::endl;
	std::cout << "this is " << Jules.DiamondTrap::getName() << " . He has currently " << Jules.DiamondTrap::getHitPoints() << " HP and " << Jules.DiamondTrap::getEnergyPoints() << " energy. His attack does " << Jules.DiamondTrap::getAttDam() << " Att Dam" << std::endl;

	Jules.WhoAmI();
	Yann.WhoAmI();

	return 0;
}