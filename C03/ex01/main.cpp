#include "ScavTrap.hpp"

int		main(void)
{
	ScavTrap	Yann("Yann");
	ScavTrap	Jules("Jules");

	std::cout << "this is " << Yann.getName() << " . He has currently " << Yann.getHitPoints() << " HP and " << Yann.getEnergyPoints() << " energy. His attack does " << Yann.getAttDam() << " Att Dam" << std::endl;
	std::cout << "this is " << Jules.getName() << " . He has currently " << Jules.getHitPoints() << " HP and " << Jules.getEnergyPoints() << " energy. His attack does " << Jules.getAttDam() << " Att Dam" << std::endl;
	
	Yann.attack("Jules");
	Jules.takeDamage(20);
	std::cout << "this is " << Yann.getName() << " . He has currently " << Yann.getHitPoints() << " HP and " << Yann.getEnergyPoints() << " energy. His attack does " << Yann.getAttDam() << " Att Dam" << std::endl;
	std::cout << "this is " << Jules.getName() << " . He has currently " << Jules.getHitPoints() << " HP and " << Jules.getEnergyPoints() << " energy. His attack does " << Jules.getAttDam() << " Att Dam" << std::endl;
	
	Yann.attack("Jules");
	Jules.takeDamage(20);
	std::cout << "this is " << Yann.getName() << " . He has currently " << Yann.getHitPoints() << " HP and " << Yann.getEnergyPoints() << " energy. His attack does " << Yann.getAttDam() << " Att Dam" << std::endl;
	std::cout << "this is " << Jules.getName() << " . He has currently " << Jules.getHitPoints() << " HP and " << Jules.getEnergyPoints() << " energy. His attack does " << Jules.getAttDam() << " Att Dam" << std::endl;

	Jules.beRepaired(50);
	std::cout << "this is " << Yann.getName() << " . He has currently " << Yann.getHitPoints() << " HP and " << Yann.getEnergyPoints() << " energy. His attack does " << Yann.getAttDam() << " Att Dam" << std::endl;
	std::cout << "this is " << Jules.getName() << " . He has currently " << Jules.getHitPoints() << " HP and " << Jules.getEnergyPoints() << " energy. His attack does " << Jules.getAttDam() << " Att Dam" << std::endl;

	Yann.attack("Jules");
	Jules.takeDamage(20);
	std::cout << "this is " << Yann.getName() << " . He has currently " << Yann.getHitPoints() << " HP and " << Yann.getEnergyPoints() << " energy. His attack does " << Yann.getAttDam() << " Att Dam" << std::endl;
	std::cout << "this is " << Jules.getName() << " . He has currently " << Jules.getHitPoints() << " HP and " << Jules.getEnergyPoints() << " energy. His attack does " << Jules.getAttDam() << " Att Dam" << std::endl;

	Jules.beRepaired(20);
	Jules.guardGate();
	Yann.attack("Jules");
	Jules.takeDamage(10);
	std::cout << "this is " << Yann.getName() << " . He has currently " << Yann.getHitPoints() << " HP and " << Yann.getEnergyPoints() << " energy. His attack does " << Yann.getAttDam() << " Att Dam" << std::endl;
	std::cout << "this is " << Jules.getName() << " . He has currently " << Jules.getHitPoints() << " HP and " << Jules.getEnergyPoints() << " energy. His attack does " << Jules.getAttDam() << " Att Dam" << std::endl;

	int x = Yann.getEnergyPoints();
	std::cout << x << std::endl;
	for(int i = 0; i < x; i++)
		Yann.attack("Random");
	Yann.attack("Random");
	std::cout << "this is " << Yann.getName() << " . He has currently " << Yann.getHitPoints() << " HP and " << Yann.getEnergyPoints() << " energy. His attack does " << Yann.getAttDam() << " Att Dam" << std::endl;


	return 0;
}