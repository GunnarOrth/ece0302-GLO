#include "dynamic_array_list.h"

#include <algorithm>
#include <stdexcept>

#include <iostream>

template <typename T>
DynamicArrayList<T>::DynamicArrayList()
{
  //TODO
  capacity = 1000;
  data = new T [capacity];
  size = 0;
  
}
  
template <typename T>
DynamicArrayList<T>::DynamicArrayList(const DynamicArrayList<T>& x)
{
    //TODO
    capacity = x.capacity;
    size = x.size;
    data = new T[capacity];
    for(int i = 0; i < capacity;i++)
    {
		*(data+i) = *(x.data+i);
	}
}
    
template <typename T>
DynamicArrayList<T>::~DynamicArrayList()
{
  std::clog << "DynamicArrayList Destructor called." << std::endl;
  delete data;
  //TODO
}

template <typename T>
DynamicArrayList<T>& DynamicArrayList<T>::operator=(DynamicArrayList<T> x)
{
  //TODO
	capacity = x.capacity;
    size = x.size;
    data = new T[capacity];
    for(int i = 0; i < capacity;i++)
    {
		*(data+i) = x.getEntry(i);
	}
  return *this;
}

template <typename T>
void DynamicArrayList<T>::swap(DynamicArrayList<T>& y)
{
  //TODO
  DynamicArrayList<T> z(y);
  y.capacity = capacity;
  y.size = size;
  y.data = new T [capacity];
  for(int i = 0; i < capacity; i++)
  {
	  *(y.data+i) = *(data + i);
  }
  capacity = z.capacity;
  size = z.size;
  data = new T[capacity];
  for(int i = 0; i < capacity;i++)
  {
	*(data+i) = z.getEntry(i);
	}
  
}

template <typename T>
bool DynamicArrayList<T>::isEmpty()
{
  if(size == 0)
  {
	  return true;
  }
  return false;
}

template <typename T>
std::size_t DynamicArrayList<T>::getLength()
{
  //TODO
  return size;
}

template <typename T>
void DynamicArrayList<T>::insert(std::size_t position, const T& item)
{
  //TODO
  if(position <= (size+1))
  {
	for(int i = position; i < size; i++)
	{
		*(data+i+1) = *(data+i);
	}
	*(data+position) = item;
	size++;
	}
}

template <typename T>
void DynamicArrayList<T>::remove(std::size_t position)
{
	for(int i = position; i < (size); i++)
	{
		*(data+i) = *(data+i+1);
	}
	
	size--;
  //TODO
}

template <typename T>
void DynamicArrayList<T>::clear()
{
  //TODO
  size = 0;
}

template <typename T>
T DynamicArrayList<T>::getEntry(std::size_t position)
{
  //TODO
  if(position <= size)
  {
	return *(data+position);
	}
	else return -1;
}

template <typename T>
void DynamicArrayList<T>::setEntry(std::size_t position, const T& newValue)
{
  //TODO
  if(position <= size)
  {
	*(data+position) = newValue;
	}
}
