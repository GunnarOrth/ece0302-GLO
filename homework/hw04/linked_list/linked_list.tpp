#include "linked_list.hpp"

template <typename T>
LinkedList<T>::LinkedList() : headPtr(nullptr), itemCount(0)
{
  
}

template <typename T>
LinkedList<T>::~LinkedList()
{
  clear();
}

template <typename T>
LinkedList<T>::LinkedList(const LinkedList<T>& x)
{
  itemCount = x.itemCount;
  Node<T>* origChainPtr = x.headPtr;
  if(origChainPtr == nullptr)
  {
    headPtr = nullptr;
  }
  else{
    headPtr = new Node<T>();
    headPtr->setItem(origChainPtr->getItem());
    Node<T>* newChainPtr = headPtr;
    origChainPtr = origChainPtr->getNext();
    while(origChainPtr != nullptr)
    {
      T nextItem= origChainPtr ->getItem();
      Node<T>* newNodePtr = new Node<T>(nextItem);
      newChainPtr->setNext(newNodePtr);
      newChainPtr = newChainPtr ->getNext();
      origChainPtr = origChainPtr->getNext();
    }

  }
}

template <typename T>
void LinkedList<T>::swap(LinkedList<T>& x, LinkedList<T>& y)
{
 LinkedList<T> z(x);
 x = y;
 y = z;
}

template <typename T>
LinkedList<T>& LinkedList<T>::operator=(const LinkedList<T>& x)
{
  itemCount = x.itemCount;
  Node<T>* origChainPtr = x.headPtr;
  if(origChainPtr == nullptr)
  {
    headPtr = nullptr;
  }
  else{
    headPtr = new Node<T>();
    headPtr->setItem(origChainPtr->getItem());
    Node<T>* newChainPtr = headPtr;
    origChainPtr = origChainPtr->getNext();
    while(origChainPtr != nullptr)
    {
      T nextItem= origChainPtr ->getItem();
      Node<T>* newNodePtr = new Node<T>(nextItem);
      newChainPtr->setNext(newNodePtr);
      newChainPtr = newChainPtr ->getNext();
      origChainPtr = origChainPtr->getNext();
    }
  }
  return *this;
}

template <typename T>
bool LinkedList<T>::isEmpty() const
{
  if(itemCount == 0)
  {
    return true;
  }
  return false;
}

template <typename T>
std::size_t LinkedList<T>::getLength() const
{
  //TODO
  return itemCount;
}

template <typename T>
bool LinkedList<T>::insert(std::size_t position, const T& item)
{
  bool ableToInsert = (position >= 1) && (position <= itemCount + 1);
  if(ableToInsert)
  {
    Node<T>* newNodePtr = new Node<T>(item);

    if(position == 1)
    {
      newNodePtr->setNext(headPtr);
      headPtr = newNodePtr;
    }
    else{
      Node<T>* prevPtr = getNodeAt(position-1);
      newNodePtr->setNext(prevPtr->getNext());
      prevPtr->setNext(newNodePtr);

    }
    itemCount++;
  }
  return ableToInsert;
}

template <typename T>
bool LinkedList<T>::remove(std::size_t position)
{
  bool ableToRemove = (position >= 1) && (position <= itemCount);
  if(ableToRemove)
  {
    Node<T>* curPtr = nullptr;
    if (position == 1)
    {
      curPtr = headPtr;
      headPtr = headPtr->getNext();
    }
    else{
      Node<T>* prevPtr = getNodeAt(position-1);
      curPtr = prevPtr->getNext();
      prevPtr->setNext(curPtr->getNext());
    }
    curPtr->setNext(nullptr);
    delete curPtr;
    curPtr = nullptr;
    itemCount--;
  }
  return ableToRemove;
}

template <typename T>
void LinkedList<T>::clear()
{
  Node<T>* nodeToDeletePtr = headPtr;
  while(headPtr != nullptr)
  {
    headPtr = headPtr->getNext();
    nodeToDeletePtr->setNext(nullptr);
    delete nodeToDeletePtr;
    nodeToDeletePtr = headPtr;
  }
  itemCount = 0;
}

template <typename T>
T LinkedList<T>::getEntry(std::size_t position) const
{
  bool y = (position >= 1) && (position <= itemCount);
  if(y)
  {
    Node<T>* nodePtr = getNodeAt(position);
    return nodePtr->getItem();
  }
}

template <typename T>
void LinkedList<T>::setEntry(std::size_t position, const T& newValue)
{
  bool y = (position >= 1) && (position <= itemCount);
  if(y)
  {
    Node<T>* nodePtr = getNodeAt(position);
    nodePtr->setItem(newValue);
  }
}

template <typename T>
Node<T>* LinkedList<T>::getNodeAt(int position) const
{
  Node<T>* curPtr = headPtr;
  for(int i = 1; i < position; i++)
  {
    curPtr=curPtr->getNext();
  }
  return curPtr;
}