#include <iostream>
#include "ClapTrap.hpp"

int main(){

  ClapTrap a("test");
  ClapTrap b(a);
  a.attack("First guy");
  ClapTrap c("dummy");
  c = a;
  c.attack("Second guy");
  std::cout << std::endl;
  c.takeDamage(3);
  std::cout << std::endl;
  c.takeDamage(3);
  std::cout << std::endl;
  c.takeDamage(3);
  std::cout << std::endl;
  c.beRepaired(4);
  std::cout << std::endl;
  c.takeDamage(3);
  return (0);
}
