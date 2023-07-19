#include "Zombie.hpp"

void randomChump(std::string name){
    Zombie zombie_object = Zombie(name);
    zombie_object.announce();
}