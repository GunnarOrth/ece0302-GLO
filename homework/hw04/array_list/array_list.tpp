#include "array_list.hpp"

template <typename T>
ArrayList<T>::ArrayList() {n = 0;}

template <typename T>
ArrayList<T>::~ArrayList() {}

template <typename T>
ArrayList<T>::ArrayList(const ArrayList & rhs)
{
  varray.clear();
  for(int i = 1; i < rhs.getLength(); i++)
  {
    varray.push_back(rhs.getEntry(i));
  }
  n = rhs.getLength();
}

template <typename T>
ArrayList<T> & ArrayList<T>::operator=(const ArrayList & rhs){
  n = 0;
  varray.clear();
  for(int i = 1; i <= rhs.getLength(); i++)
  {
    varray.push_back(rhs.getEntry(i));
  }
  n = rhs.getLength();
  return *this;
}

template <typename T>
bool ArrayList<T>::isEmpty() const{
  if(n == 0)
  {
    return true;
  }
  return false;
}

template <typename T>
std::size_t ArrayList<T>::getLength() const{
  return (varray.size());
}

template <typename T>
bool ArrayList<T>::insert(std::size_t position, const T& item){
  int i = position-1;
  varray.insert(varray.begin()+i,item);
  n++;
  return true;
}

template <typename T>
bool ArrayList<T>::remove(std::size_t position){
  int i = position-1;
  varray.erase(varray.begin()+i);
  n--;
  return true;
}

template <typename T>
void ArrayList<T>::clear() {
  varray.clear();
  n = 0;
  }

template <typename T>
T ArrayList<T>::getEntry(std::size_t position) const {
  return varray.at(position-1);
}

template <typename T>
void ArrayList<T>::setEntry(std::size_t position, const T& newValue) 
{
  varray.at(position-1) = newValue;
}
