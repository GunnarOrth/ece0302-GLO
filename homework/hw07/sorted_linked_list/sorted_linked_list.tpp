#include "sorted_linked_list.hpp"
#include <stdexcept>

template <typename T>
SortedLinkedList<T>::SortedLinkedList(): LinkedList<T>()
{
	length = 0;
}

template <typename T>
SortedLinkedList<T>::SortedLinkedList(const SortedLinkedList<T> & x):
  LinkedList<T>(x)
{
}

template <typename T>
SortedLinkedList<T>& SortedLinkedList<T>::operator=(const SortedLinkedList<T>& x)
{
  LinkedList<T>::operator=(x);
  return *this;
}

template <typename T>
SortedLinkedList<T>::~SortedLinkedList()
{
  // base destructor gets called automatically
}

template <typename T>
bool SortedLinkedList<T>::isEmpty()
{
  return LinkedList<T>::isEmpty();
}

template <typename T>
std::size_t SortedLinkedList<T>::getLength()
{
  return LinkedList<T>::getLength();
}

template <typename T>
void SortedLinkedList<T>::insert(const T& item)
{
	bool x = LinkedList<T>::insert(length, item);
	length++;
	return;
  // todo
}

template <typename T>
void SortedLinkedList<T>::remove(const T& item)
{
	int x = getPosition(item);
	bool y = LinkedList<T>::remove(x);
	length--;
	return;
  // todo
}

template <typename T>
void SortedLinkedList<T>::removeAt(std::size_t position)
{
	bool x = LinkedList<T>::remove(position);
	length--;
	return;
}

template <typename T>
void SortedLinkedList<T>::clear()
{
  LinkedList<T>::clear();
}

template <typename T>
T SortedLinkedList<T>::getEntry(std::size_t position)
{
  return LinkedList<T>::getEntry(position);
}

template <typename T>
long int SortedLinkedList<T>::getPosition(const T& newValue)
{
	
  
  return LinkedList<T>::getNodeAtItem(newValue);
}


