#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
  _hitPoints = 100;
  _energyPoints = 50;
  _attackDamage = 20;
  std::cout << "ScavTrap " << _name << " is created with default constructor!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
  std::cout << "ScavTrap " << _name << " is created with copy constructor!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
  if(this != &other)
    ClapTrap::operator=(other);
  return (*this);
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap " << _name << " is destroyed!" << std::endl;
}
