#include "ClapTrap.hpp"

  ClapTrap::ClapTrap(std::string name) : _name(name),
    _hitPoints(10),
    _energyPoints(10),
    _attackDamage(0) {
    std::cout << "ClapTrap " << _name << " is created with default constructor!" << std::endl;
    }

  ClapTrap::ClapTrap(const ClapTrap &other) : _name(other._name),
    _hitPoints(other._hitPoints),
    _energyPoints(other._energyPoints),
    _attackDamage(other._attackDamage) {
      std::cout << "ClapTrap " << _name << " is created with copy constructor!" << std::endl;
    }

  ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
    if(this != &other) {
      this->_name += " <- " + other._name;
      this->_hitPoints = other._hitPoints;
      this->_energyPoints = other._energyPoints;
      this->_attackDamage = other._attackDamage;
    }
    std::cout << "ClapTrap " << _name << " is created with copy assignment operator!" << std::endl;
    return (*this);
  }

  ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << _name << " is destroyed!" << std::endl;
  }

  void ClapTrap::attack(const std::string &target) {
    if(_energyPoints < 1)
      std::cout << _name << " has no energy to do so!";
    else if(_hitPoints < 1)
      std::cout << _name << " is dead!";
    else {
      _energyPoints--;
      std::cout << _name << " deals " << _attackDamage << " points of damage to " << target << "!" << std::endl;
      std::cout << "It has left " << _energyPoints << " energy points." << std::endl;
    }
  }

  void ClapTrap::takeDamage(unsigned int amount) {
    _hitPoints -= amount;
    std::cout << _name << " was inflicted " << amount << " points of damage!" << std::endl;
    std::cout << _name << " has " << _hitPoints << " hitpoints." << std::endl;
    if(_hitPoints < 1)
      std::cout << _name << " died!" << std::endl;
  }

  void ClapTrap::beRepaired(unsigned int amount) {
    if(_energyPoints < 1)
      std::cout << _name << " has no energy to do so!";
    else if(_hitPoints < 1)
      std::cout << _name << " is dead!";
    else {
      _energyPoints--;
      _hitPoints += amount;
      std::cout << _name << " heals " << amount << " hitpoints!" << std::endl;
      std::cout << "Now it has " << _hitPoints << " hitpoints." << std::endl;
      std::cout << "It has left " << _energyPoints << " energy points." << std::endl;
    }
  }
