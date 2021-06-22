#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Bwak.hpp"
#include "Aboub.hpp"

int main()
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    // Bwak bwak("Bwak");
    // Aboub aboub("Aboub");
    std::cout << robert << jim << joe ; // << bwak << aboub;
    robert.polymorph(jim);
    robert.polymorph(joe);
    // robert.polymorph(bwak);
    // robert.polymorph(aboub);
    return 0;
}
