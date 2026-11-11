#include "ClapTrap.hpp"

  ClapTrap::ClapTrap(std::string name) : _name(name),
    _hitPoints(10),
    _energyPoints(10),
    _attackDamage(0) {
    std::cout << _name << " is created!" << std::endl;
    }

  ClapTrap::~ClapTrap() {
    std::cout << _name << " is destroyed!" << std::endl;
  }
