#include "ClapTrap.hpp"

int		main(void)
{
	ClapTrap	Yann("Yann");
	ClapTrap	Jules("Jules");

	std::cout << "this is " << Yann.getName() << " . He has currently " << Yann.getHitPoints() << " HP and " << Yann.getEnergyPoints() << " energy. His attack does " << Yann.getAttDam() << " Att Dam" << std::endl;
	std::cout << "this is " << Jules.getName() << " . He has currently " << Jules.getHitPoints() << " HP and " << Jules.getEnergyPoints() << " energy. His attack does " << Jules.getAttDam() << " Att Dam" << std::endl;
	
	Yann.attack("Jules");
	Jules.takeDamage(5);
	std::cout << "this is " << Yann.getName() << " . He has currently " << Yann.getHitPoints() << " HP and " << Yann.getEnergyPoints() << " energy. His attack does " << Yann.getAttDam() << " Att Dam" << std::endl;
	std::cout << "this is " << Jules.getName() << " . He has currently " << Jules.getHitPoints() << " HP and " << Jules.getEnergyPoints() << " energy. His attack does " << Jules.getAttDam() << " Att Dam" << std::endl;
	
	Yann.attack("Jules");
	Jules.takeDamage(3);
	std::cout << "this is " << Yann.getName() << " . He has currently " << Yann.getHitPoints() << " HP and " << Yann.getEnergyPoints() << " energy. His attack does " << Yann.getAttDam() << " Att Dam" << std::endl;
	std::cout << "this is " << Jules.getName() << " . He has currently " << Jules.getHitPoints() << " HP and " << Jules.getEnergyPoints() << " energy. His attack does " << Jules.getAttDam() << " Att Dam" << std::endl;

	Jules.beRepaired(10);
	std::cout << "this is " << Yann.getName() << " . He has currently " << Yann.getHitPoints() << " HP and " << Yann.getEnergyPoints() << " energy. His attack does " << Yann.getAttDam() << " Att Dam" << std::endl;
	std::cout << "this is " << Jules.getName() << " . He has currently " << Jules.getHitPoints() << " HP and " << Jules.getEnergyPoints() << " energy. His attack does " << Jules.getAttDam() << " Att Dam" << std::endl;

	Yann.attack("Jules");
	Jules.takeDamage(20);
	std::cout << "this is " << Yann.getName() << " . He has currently " << Yann.getHitPoints() << " HP and " << Yann.getEnergyPoints() << " energy. His attack does " << Yann.getAttDam() << " Att Dam" << std::endl;
	std::cout << "this is " << Jules.getName() << " . He has currently " << Jules.getHitPoints() << " HP and " << Jules.getEnergyPoints() << " energy. His attack does " << Jules.getAttDam() << " Att Dam" << std::endl;

	Jules.beRepaired(10);
	Yann.attack("Jules");
	Jules.takeDamage(3);
	std::cout << "this is " << Yann.getName() << " . He has currently " << Yann.getHitPoints() << " HP and " << Yann.getEnergyPoints() << " energy. His attack does " << Yann.getAttDam() << " Att Dam" << std::endl;
	std::cout << "this is " << Jules.getName() << " . He has currently " << Jules.getHitPoints() << " HP and " << Jules.getEnergyPoints() << " energy. His attack does " << Jules.getAttDam() << " Att Dam" << std::endl;

	Yann.attack("Random");
	Yann.attack("Random");
	Yann.attack("Random");
	Yann.attack("Random");
	Yann.attack("Random");
	Yann.attack("Random");
	Yann.attack("Random");
	std::cout << "this is " << Yann.getName() << " . He has currently " << Yann.getHitPoints() << " HP and " << Yann.getEnergyPoints() << " energy. His attack does " << Yann.getAttDam() << " Att Dam" << std::endl;


	return 0;
}