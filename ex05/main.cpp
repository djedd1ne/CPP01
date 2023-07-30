#include "Harl.hpp"

int main(void){
    Harl harl;

    harl.complain("DEBUG");
    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("INFO");
    harl.complain("blabla");
    return(0);
}