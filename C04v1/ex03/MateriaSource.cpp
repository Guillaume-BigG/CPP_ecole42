#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
    std::cout << "Default MateriaSource constructor called" << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
    {
		if (_materias[i])
			delete _materias[i];
	}
    std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &src) 
{
    std::cout << "Copy MateriaSource constructor called" << std::endl;
	*this = src;
}

MateriaSource const	&MateriaSource::operator=(MateriaSource const &rhs) 
{
    std::cout << "Materia assignation operator called" << std::endl;
	if (this != &rhs) 
    {
		for (int i = 0; i < 4; i++) 
			_materias[i] = rhs._materias[i];
	}
	return *this;
}

void		MateriaSource::learnMateria(AMateria *m) 
{
	for (int i = 0; i < 4; i++) {
		if (!this->_materias[i]) 
        {
            std::cout <<"New Materia in Inventory learned: " << m->getType() << std::endl;
			this->_materias[i] = m;
			return ;
		}
		else
		{
			std::cout << "Inventory full, can't learn any more materia " << std::endl;
			delete m;
			return;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type) 
{
	for (int i = 0; i < 4; i++) 
    {
		if (_materias[i] && _materias[i]->getType() == type) 
        {
			return (_materias[i]->clone()); //this is what created the valgirnd issue
		}
	}
    std::cout << "Unknown type of Materia"<< std::endl;
	return NULL;
}

AMateria		*MateriaSource::getMateria(int idx) const
{
	return _materias[idx];
}
