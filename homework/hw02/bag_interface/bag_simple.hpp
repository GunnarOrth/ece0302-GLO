<<<<<<< HEAD
#ifndef STUDENT_BAG_HPP
#define STUDENT_BAG_HPP
#include "abstract_bag.hpp"
#include <cstdlib>

template<typename T> class Bag : public AbstractBag<T>{
public:

  Bag();
  
  ~Bag();

  std::size_t getCurrentSize() const;

  bool isEmpty() const;

  bool add(const T& entry);

  bool remove(const T& entry);

  void clear();

  std::size_t getFrequencyOf(const T& entry) const;

  bool contains(const T& entry) const;

  static const std::size_t MAXSIZE = 100;
  
private:
  // implementation using fixed automatic storage
  std::size_t size;
  
  T data[MAXSIZE];
};

#include "bag_simple.tpp"

#endif
=======
#ifndef STUDENT_BAG_HPP
#define STUDENT_BAG_HPP
<<<<<<< HEAD
#include "abstract_bag.hpp"
#include <cstdlib>
=======

#include "abstract_bag.hpp"
>>>>>>> 520b2e5d6f42681d9f488467df242930a183b076

template<typename T> class Bag : public AbstractBag<T>{
public:

  Bag();
  
  ~Bag();

  std::size_t getCurrentSize() const;

  bool isEmpty() const;

  bool add(const T& entry);

  bool remove(const T& entry);

  void clear();

  std::size_t getFrequencyOf(const T& entry) const;

  bool contains(const T& entry) const;

  static const std::size_t MAXSIZE = 100;
  
private:
  // implementation using fixed automatic storage
  std::size_t size;
  
  T data[MAXSIZE];
};

#include "bag_simple.tpp"

#endif
>>>>>>> 75dc68f48c8b871fbf24acc3ea40ec065db837ac
