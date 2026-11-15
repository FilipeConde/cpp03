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

void ScavTrap::attack(const std::string &target) {
    if(_energyPoints < 1)
      std::cout << "Scavtrap " << _name << " has no energy to do so!";
    else if(_hitPoints < 1)
      std::cout << "Scavtrap " << _name << " is dead!";
    else {
      _energyPoints--;
      std::cout << "Scavtrap " << _name << " deals " << _attackDamage << " points of damage to " << target << "!" << std::endl;
      std::cout << "It has left " << _energyPoints << " energy points." << std::endl;
    }
  }

  void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}
