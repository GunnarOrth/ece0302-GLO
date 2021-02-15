#include "dynamic_bag.hpp"

template<typename T>
DynamicBag<T>::DynamicBag() 
{
  n = 8;
  x = 0;
  array = new T[8];
}
  

template<typename T>
DynamicBag<T>::DynamicBag(const DynamicBag& y)
{
  n = y.getCurrentSize();
  x = n;
  array = new T[n];
  for(int i=0; i < n; i++)
  {
    *(array+i) = y.getItem(i);
  }
}
    
template<typename T>
DynamicBag<T>::~DynamicBag()
{
  delete array;
}
  
template<typename T>
DynamicBag<T>& DynamicBag<T>::operator=(DynamicBag<T>& y)
{  
  n = y.getCurrentSize();
  x = n;
  array = new T[n];
  for(int i=0; i < n; i++)
  {
    *(array+i) = y.getItem(i);
  }
  return *this;
}

template<typename T>
bool DynamicBag<T>::add(const T& item)
{
  if(x != n)
  {
    *(array+x) = item;
    x++;
    return true;
  }
  return false;
}

template<typename T>
bool DynamicBag<T>::remove(const T& item)
{
  for(int i  = 0; i < x; i++)
  {
    if(*(array+i)==item)
    {
      x--;
      for(int j = i; j< x; j++)
      {
        array[j] = array[j+1];
      }
      return true;
    }
  }
  return false;
}

template<typename T>
bool DynamicBag<T>::isEmpty() const
{
  if(x == 0)
  {
    return true;
  }
  return false;
}

template<typename T>
std::size_t DynamicBag<T>::getCurrentSize() const
{
  return x;
}

template<typename T>
bool DynamicBag<T>::contains(const T& item) const
{  
  for(int i = 0; i < x; i++)
  {
    if(*(array+i)== item)
    {
      return true;
    }
  }
  return false;
}

template<typename T>
void DynamicBag<T>::clear()
{
  x = 0;
}

template<typename T>
std::size_t DynamicBag<T>::getFrequencyOf(const T & item) const
{
  int j = 0;
  for(int i = 0; i < x; i++)
  {
    if(*(array+i)== item)
    {
      j++;
    }
  }
  return j;
};

template<typename T>
T DynamicBag<T>::getItem(int i) const
{
  return *(array+i);
}