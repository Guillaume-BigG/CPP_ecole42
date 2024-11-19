#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int		main(void)
{

	FragTrap	Yann("Yann");
	FragTrap	Jules("Jules");

	std::cout << "this is " << Yann.getName() << " . He has currently " << Yann.getHitPoints() << " HP and " << Yann.getEnergyPoints() << " energy. His attack does " << Yann.getAttDam() << " Att Dam" << std::endl;
	std::cout << "this is " << Jules.getName() << " . He has currently " << Jules.getHitPoints() << " HP and " << Jules.getEnergyPoints() << " energy. His attack does " << Jules.getAttDam() << " Att Dam" << std::endl;
	
	Yann.attack("Jules");
	Jules.takeDamage(40);
	std::cout << "this is " << Yann.getName() << " . He has currently " << Yann.getHitPoints() << " HP and " << Yann.getEnergyPoints() << " energy. His attack does " << Yann.getAttDam() << " Att Dam" << std::endl;
	std::cout << "this is " << Jules.getName() << " . He has currently " << Jules.getHitPoints() << " HP and " << Jules.getEnergyPoints() << " energy. His attack does " << Jules.getAttDam() << " Att Dam" << std::endl;
	
	Yann.attack("Jules");
	Jules.takeDamage(40);
	std::cout << "this is " << Yann.getName() << " . He has currently " << Yann.getHitPoints() << " HP and " << Yann.getEnergyPoints() << " energy. His attack does " << Yann.getAttDam() << " Att Dam" << std::endl;
	std::cout << "this is " << Jules.getName() << " . He has currently " << Jules.getHitPoints() << " HP and " << Jules.getEnergyPoints() << " energy. His attack does " << Jules.getAttDam() << " Att Dam" << std::endl;

	Jules.beRepaired(60);
	std::cout << "this is " << Yann.getName() << " . He has currently " << Yann.getHitPoints() << " HP and " << Yann.getEnergyPoints() << " energy. His attack does " << Yann.getAttDam() << " Att Dam" << std::endl;
	std::cout << "this is " << Jules.getName() << " . He has currently " << Jules.getHitPoints() << " HP and " << Jules.getEnergyPoints() << " energy. His attack does " << Jules.getAttDam() << " Att Dam" << std::endl;

	Yann.attack("Jules");
	Jules.takeDamage(150);
	std::cout << "this is " << Yann.getName() << " . He has currently " << Yann.getHitPoints() << " HP and " << Yann.getEnergyPoints() << " energy. His attack does " << Yann.getAttDam() << " Att Dam" << std::endl;
	std::cout << "this is " << Jules.getName() << " . He has currently " << Jules.getHitPoints() << " HP and " << Jules.getEnergyPoints() << " energy. His attack does " << Jules.getAttDam() << " Att Dam" << std::endl;

	Yann.attack("Jules");
	Jules.takeDamage(30);
	std::cout << "this is " << Yann.getName() << " . He has currently " << Yann.getHitPoints() << " HP and " << Yann.getEnergyPoints() << " energy. His attack does " << Yann.getAttDam() << " Att Dam" << std::endl;
	std::cout << "this is " << Jules.getName() << " . He has currently " << Jules.getHitPoints() << " HP and " << Jules.getEnergyPoints() << " energy. His attack does " << Jules.getAttDam() << " Att Dam" << std::endl;

	Jules.highFivesGuys();
	Yann.highFivesGuys();

	Yann.setEnergyPoints(0);
	Jules.highFivesGuys();
	Yann.highFivesGuys();

	std::cout << "this is " << Yann.getName() << " . He has currently " << Yann.getHitPoints() << " HP and " << Yann.getEnergyPoints() << " energy. His attack does " << Yann.getAttDam() << " Att Dam" << std::endl;
	std::cout << "this is " << Jules.getName() << " . He has currently " << Jules.getHitPoints() << " HP and " << Jules.getEnergyPoints() << " energy. His attack does " << Jules.getAttDam() << " Att Dam" << std::endl;




	return 0;
}