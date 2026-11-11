#include "ClapTrap.hpp"

  ClapTrap::ClapTrap(std::string name) : _name(name),
    _hitPoints(10),
    _energyPoints(10),
    _attackDamage(0) {
    std::cout << _name << " is created with default constructor!" << std::endl;
    }

  ClapTrap::ClapTrap(const ClapTrap &other) : _name(other._name),
    _hitPoints(other._hitPoints),
    _energyPoints(other._energyPoints),
    _attackDamage(other._attackDamage) {
      std::cout << _name << " is created with copy constructor!" << std::endl;
    }

  ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
    if(this != &other) {
      this->_name += " <- " + other._name;
      this->_hitPoints = other._hitPoints;
      this->_energyPoints = other._energyPoints;
      this->_attackDamage = other._attackDamage;
    }
    std::cout << _name << " is created with copy assignment operator!" << std::endl;
    return (*this);
  }

  ClapTrap::~ClapTrap() {
    std::cout << _name << " is destroyed!" << std::endl;
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
