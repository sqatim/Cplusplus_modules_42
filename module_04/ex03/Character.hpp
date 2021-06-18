#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
    std::string m_name;
    AMateria *m_materia[4];
    int m_size;
    Character();
public:
    Character(std::string const& name);
    Character(Character const& character);
    Character& operator=(Character const& character);
    virtual std::string const & getName() const;
    virtual void equip(AMateria* m);
    virtual void unequip(int idx);
    virtual void use(int idx, ICharacter& target);
    ~Character();
};

#endif