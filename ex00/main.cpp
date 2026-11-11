#include <iostream>
#include "ClapTrap.hpp"

int main(){

  ClapTrap a("test");
  ClapTrap b(a);
  a.attack("First guy");
  ClapTrap c("dummy");
  c = a;
  c.attack("Second guy");
  return (0);
}
