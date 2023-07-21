#include "Zombie.hpp"

Zombie::Zombie() {
    this->name = "Zombie";
}
Zombie::Zombie(std::string name) {
    this->name = name;
}
Zombie::~Zombie() {
    std::cout << name << " is destroyed" << std::endl;
}
void Zombie::name_zombie(std::string name) {
     this->name = name;
}

void Zombie::announce(void){
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}