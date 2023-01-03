// Copyright 2022 Yangson Choi. All rights reserved.

#ifndef MOD04_EX01_BRAIN_HPP_
#define MOD04_EX01_BRAIN_HPP_

#include <string>

#define I_SIZE 10

class Brain {
 public :
  Brain();
  Brain(const Brain&);

  Brain& operator=(const Brain&);

  virtual ~Brain();

  void set_idea(const int& i, const std::string& idea) { ideas_[i] = idea; }
  std::string get_idea(const int& i) const { return ideas_[i]; }

 private :
  std::string ideas_[I_SIZE];
};


#endif  // MOD04_EX01_BRAIN_HPP_