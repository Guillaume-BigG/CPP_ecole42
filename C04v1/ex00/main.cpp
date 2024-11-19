#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

    const WrongAnimal* wrong_meta = new WrongAnimal();
	const WrongAnimal* wrong_cat = new WrongCat();
    
    std::cout << std::endl;
	std::cout << "The " << meta->getType() << " makes a sound: ";
    meta->makeSound();
    std::cout << std::endl;

    std::cout << "The " << dog->getType() << " makes a sound: ";
    dog->makeSound();
    std::cout << std::endl;

    std::cout << "The " << cat->getType() << " makes a sound: ";
    cat->makeSound();
    std::cout << std::endl;

    std::cout << "The " << wrong_meta->getType() << " makes a sound: ";
    wrong_meta->makeSound();
    std::cout << std::endl;

    std::cout << "The " << wrong_cat->getType() << " makes a sound: ";
    wrong_cat->makeSound();
    std::cout << std::endl;

	delete meta;
	delete dog;
	delete cat;

    delete wrong_meta;
	delete wrong_cat;
	
	return 0;
}