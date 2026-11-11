#include <iostream>
#include "ClapTrap.hpp"

int main(){

  ClapTrap a("test");
  ClapTrap b(a);
  ClapTrap c("dummy");
  c = a;
  return (0);
}
