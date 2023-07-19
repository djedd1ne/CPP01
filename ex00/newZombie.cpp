#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
    Zombie *zombie_object = new Zombie(name);
    return (zombie_object);
}