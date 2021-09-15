#pragma once
#include <string>

class ICharacter;

class AMateria {
protected:
	std::string type_;
public:
	AMateria();
	AMateria(const std::string& type);
	const std::string& getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target); 
	virtual ~AMateria();
};

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};