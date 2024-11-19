#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"


class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(MateriaSource const & src);
		~MateriaSource();

		MateriaSource const &	operator=(MateriaSource const & rhs);

		AMateria				*getMateria(int idx) const;
		virtual void 			learnMateria(AMateria* const m);
		virtual AMateria* 		createMateria(std::string const & type);
	
	private:
		AMateria	*_materias[4];
};

#endif