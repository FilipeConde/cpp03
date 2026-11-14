#include <iostream>
#include "ClapTrap.hpp"

int main(){

  ClapTrap a("test");
  ClapTrap b(a);
  a.attack("First guy");
  ClapTrap c("dummy");
  c = a;
  c.attack("Second guy");
  c.takeDamage(3);
  c.takeDamage(3);
  c.takeDamage(3);
  c.takeDamage(3);
  return (0);
}
