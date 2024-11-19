#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	// AAnimal Animal;

    int array = 10;
	AAnimal	*farm[array];

	for (int i = 0; i < array; i++)
	{
		if (i % 2)
			farm[i] = new Cat();
		else
			farm[i] = new Dog();
		farm[i]->makeSound();
		std::cout << std::endl;
	}
	for (int i = 0; i < array; i++)
		delete farm[i];
	std::cout << std::endl;

	const AAnimal* dog = new Dog();
	dog->makeSound();
	std::cout << std::endl;
	const AAnimal* cat = new Cat();
	cat->makeSound();
	std::cout << std::endl;
	Cat cat1 = Cat();
	cat1.makeSound();
	std::cout << std::endl;
	Cat cat2 = cat1;
	cat2.makeSound();
	std::cout << std::endl;

	delete dog;
	delete cat;
	return 0;
}