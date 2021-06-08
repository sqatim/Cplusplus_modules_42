#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>

class Enemy
{
protected:
    int m_hp;
    std::string m_type;
public:
    //  Constructors
    Enemy();
    Enemy(int hp, std::string const & type);
    Enemy(Enemy const& src);

    // Operators Overload
    Enemy& operator=(Enemy const& src);

    //Accessors
    int getHP() const;
    std::string /*[...]*/ getType() const;

    // Other Function
    virtual void takeDamage(int);
    virtual ~Enemy();
};

#endif