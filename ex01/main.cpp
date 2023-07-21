#include "Zombie.hpp"

int main(void)
{
    std::string name = "Zombie";
    Zombie *horde = zombieHorde(5, name);
    for (int i = 0; i < 5; i++)
       horde[i].announce();
    delete[] horde;
    //system("leaks Zombie");
}