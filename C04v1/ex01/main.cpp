#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	int array = 10;
	Animal *farm[array];

	for (int i = 0; i < array; i++)
	{
		if (i % 2)
			farm[i] = new Cat();
		else
			farm[i] = new Dog();
		std::cout << std::endl;
	}
	for (int i = 0; i < array; i++)
		delete farm[i];
	std::cout << std::endl;

	const Animal *j = new Dog();
	std::cout << std::endl;
	const Animal *i = new Cat();
	std::cout << std::endl;
	Cat cat1 = Cat();
	std::cout << std::endl;
	Cat cat2 = cat1;
	std::cout << std::endl;

	Cat stack_cat;
	std::cout << std::endl;

	Cat operator_cat = stack_cat;
	std::cout << std::endl;

	Cat copy_cat(stack_cat);
	std::cout << std::endl;

	Dog stack_dog;
	std::cout << std::endl;

	Dog oeprator_dog = stack_dog;
	std::cout << std::endl;

	Dog copy_dog(stack_dog);
	std::cout << std::endl;

	delete j;
	delete i;
	return (0);
}