#include "Character.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Gaz.hpp"
#include "Elec.hpp"
#include "Water.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
std::cout << std::endl;

	src->learnMateria(new Ice());
	std::cout << std::endl;
	std::cout << std::endl;

	src->learnMateria(new Cure());
	std::cout << std::endl;
	std::cout << std::endl;

	src->learnMateria(new Gaz());
	std::cout << std::endl;
	std::cout << std::endl;

	src->learnMateria(new Elec());
	std::cout << std::endl;
	std::cout << std::endl;

	src->learnMateria(new Water());
	std::cout << std::endl;
	std::cout << std::endl;


	ICharacter* me = new Character("me");
	std::cout << std::endl;
	AMateria* tmp;
	
	tmp = src->createMateria("ice");
	me->equip(tmp);
std::cout << std::endl;
	tmp = src->createMateria("cure");
	me->equip(tmp);
std::cout << std::endl;
	ICharacter* bob = new Character("bob");
	std::cout << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob);
std::cout << std::endl;
std::cout << std::endl;

	tmp = src->createMateria("Gaz");
	me->equip(tmp);
std::cout << std::endl;
	tmp = src->createMateria("Elec");
	me->equip(tmp);
std::cout << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	std::cout << std::endl;
	std::cout << std::endl;
	
	me->unequip(0);
std::cout << std::endl;
	tmp = src->createMateria("cure");
	me->equip(tmp);
std::cout << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
std::cout << std::endl;
	me->unequip(5);
std::cout << std::endl;
	me->unequip(3);
std::cout << std::endl;
	tmp = src->createMateria("fire");
	me->equip(tmp);
std::cout << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
std::cout << std::endl;
std::cout << std::endl;

	delete bob;
	delete me;
	delete src;
	
	return 0;
}