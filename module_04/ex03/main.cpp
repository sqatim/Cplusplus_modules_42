#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "AMateria.hpp"

int main()
{
    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter *me = new Character("me");
    AMateria *tmp;
    tmp = src->createMateria("ice");
    // std::cout << "name : samiiiiiiiiiir" << std::endl; 
    // std::cout << src->createMateria("ice")->getType() << std::endl;
    // std::cout << "samir zwiin" << std::endl;
    me->equip(tmp);
    std::cout << "type ==> " << src->getAMateria()->getType() << std::endl;
    tmp = src->createMateria("cure");
    // me->equip(tmp);
    // ICharacter *bob = new Character("bob");
    // me->use(0, *bob);
    // me->use(1, *bob);
    // delete bob;
    // delete me;
    // delete src;
    return 0;
}