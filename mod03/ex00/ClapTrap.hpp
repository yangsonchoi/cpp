// Copyright 2022 Yangson Choi. All rights reserved.

#ifndef MOD03_EX00_CLAPTRAP_HPP_
#define MOD03_EX00_CLAPTRAP_HPP_

#include <string>

#define DEFAULT_NAME "CL4P-TP"

class ClapTrap {
 public :
  ClapTrap();
  ClapTrap(const std::string&);
  ClapTrap(const ClapTrap&);

  ClapTrap& operator=(const ClapTrap&);

  ~ClapTrap();

  void set_name(const std::string name)  { name_ = name; } 
  void set_hp(const unsigned int hp)  { current_hp_ = hp; }
  void set_ep(const unsigned int ep)  { current_ep_ = ep; }
  void set_damage(const unsigned int damage)  { attack_damage_ = damage; }
  
  std::string	get_name() const { return name_; }
  unsigned int get_hp() const { return current_hp_; }
  unsigned int get_ep() const { return current_ep_; }
	unsigned int get_damage() const { return attack_damage_; }

  void attack(const std::string&);
  void takeDamage(unsigned int);
  void beRepaired(unsigned int);

 private :
  static const unsigned int kFullHP = 10;
  static const unsigned int kFullEP = 10;
  static const unsigned int kDefaultAD = 0;

  std::string name_;
  unsigned int current_hp_;
  unsigned int current_ep_;
  unsigned int attack_damage_;
};

#endif  // MOD03_EX00_CLAPTRAP_HPP_