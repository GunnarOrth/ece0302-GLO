#include "limited_size_bag.hpp"

template<typename T>
LimitedSizeBag<T>::LimitedSizeBag() {n = 0;}
  
template<typename T>
LimitedSizeBag<T>& LimitedSizeBag<T>::operator=(LimitedSizeBag<T>& x)
{  
  n = x.getCurrentSize();
  for(int i = 0; i < n; i++)
  {
    array[i] = x.getItem(i);
  }
  return *this;
}

template<typename T>
LimitedSizeBag<T>::LimitedSizeBag(const LimitedSizeBag& x)
{
  n = x.getCurrentSize();
  for(int i = 0; i < n; i++)
  {
    array[i] = x.getItem(i);
  }
}
    
template<typename T>
LimitedSizeBag<T>::~LimitedSizeBag()
{
}

template<typename T>
bool LimitedSizeBag<T>::add(const T& item)
{
  if(n != 5)
  {
    array[n] = item;
    n++;
    return true;
  }
  return false;
}

template<typename T>
bool LimitedSizeBag<T>::remove(const T& item)
{
  for(int i = 0; i < n; i++)
  {
    if(array[i]== item)
    {
      n--;
      for(int j = i; j < n; j++)
      {
        array[j] = array[j+1];
      }
      return true;
    }
  }
  return false;
}

template<typename T>
bool LimitedSizeBag<T>::isEmpty() const
{
  if(n == 0)
  {
    return true;
  }
  return false;
}

template<typename T>
std::size_t LimitedSizeBag<T>::getCurrentSize() const
{
  return n;
}

template<typename T>
bool LimitedSizeBag<T>::contains(const T& item) const
{  
  for(int i = 0;i<n;i++)
  {
    if(array[i] == item)
    {
      return true;
    }
  }
  return false;
}

template<typename T>
void LimitedSizeBag<T>::clear(){ n = 0;}

template<typename T>
std::size_t LimitedSizeBag<T>::getFrequencyOf(const T & item) const
{
  int j = 0;
  for(int i = 0;i<n;i++)
  {
    if(array[i] == item)
    {
      j++;
    }
  }
  return j;
};

template<typename T>
T LimitedSizeBag<T>::getItem(int i) const
{
  return array[i];
}