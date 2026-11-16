#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
  _hitPoints = 100;
  _energyPoints = 50;
  _attackDamage = 20;
  std::cout << "FragTrap " << _name << " is created with default constructor!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other) {
  std::cout << "FragTrap " << _name << " is created with copy constructor!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
  if(this != &other)
    ClapTrap::operator=(other);
  return (*this);
}

FragTrap::~FragTrap() {
  std::cout << "FragTrap " << _name << " is destroyed!" << std::endl;
}

void FragTrap::attack(const std::string &target) {
    if(_energyPoints < 1)
      std::cout << "FragTrap " << _name << " has no energy to do so!";
    else if(_hitPoints < 1)
      std::cout << "FragTrap " << _name << " is dead!";
    else {
      _energyPoints--;
      std::cout << "FragTrap " << _name << " deals " << _attackDamage << " points of damage to " << target << "!" << std::endl;
      std::cout << "It has left " << _energyPoints << " energy points." << std::endl;
    }
}
