#include "Zombie.hpp"

int main(void)
{
    {
        std::cout << "*********** Stack Zombies ***********" << std::endl;
        Zombie zombie00;
        Zombie zombie01("Zombie01");
        //anounce Zombies
        zombie00.announce();
        zombie01.announce();
        randomChump("Mekki");
    }
    std::cout << "*********** Heap Zombies ***********" << std::endl;
    Zombie *heap_zombie = newZombie("Mekki_heap");
    Zombie *heap_zombie2 = newZombie("2ndMekki_heap");
    (*heap_zombie).announce();
    heap_zombie2->announce();
    delete(heap_zombie);
    delete(heap_zombie2);

    return (0);
}