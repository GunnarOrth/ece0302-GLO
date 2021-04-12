// TODO
#ifndef ABSTRACT_DEQUE_HPP
#define ABSTRACT_DEQUE_HPP

// default constructor
template <typename T>
Deque<T>::Deque()
  
  // copy constructor
template <typename T>
Deque<T>::Deque(const Deque& x)
{
	int i = 0;
	while(!x.isEmpty())
	{
		i++;
		larray.insert(i,x.front());
		x.popFront();
	}
}
    
  // destructor
template <typename T>
Deque<T>::~Deque()
  
  // copy assignment
template <typename T>
Deque<T>& Deque<T>::operator=(const Deque& x)
{
	int i = 0;
	while(!x.isEmpty())
	{
		i++;
		larray.insert(i,x.front());
		x.popFront();
	}
	return this;
}
   
template <typename T>
bool Deque<T>::isEmpty() const
{
	if(larray.getLength == 0)
	{
		return true;
	}
	return false;
}

  /** Add item to the front of the deque
   * may throw std::bad_alloc
   */
template <typename T>
void Deque<T>::pushFront(const T & item)
{
	larray.insert(1, item);
}

  /** Remove the item at the front of the deque
   * throws std::runtime_error if the deque is empty
   */
template <typename T>
void Deque<T>::popFront()
{
	larray.remove(1);
}

  /** Returns the item at the front of the deque
   * throws std::runtime_error if the deque is empty
   */
template <typename T>   
T Deque<T>::front() const
{
	if(larray.isEmpty())
	{
		throw std::bad_alloc;
	}
	return larray.getEntry(1);
}

  /** Add item to the back of the deque
   * may throw std::bad_alloc
   */
template <typename T>
void Deque<T>::pushBack(const T & item)
{
	larray.insert(larray.getLength(),item);
}

  /** Remove the item at the back of the deque
   * throws std::runtime_error if the deque is empty
   */
template <typename T>
void Deque<T>::popBack()
{
	larray.remove(larray.getLength());
}


  /** Returns the item at the back of the deque
   * throws std::runtime_error if the deque is empty
   */
template <typename T>
T Deque<T>::back() const
{
	if(larray.isEmpty())
	{
		throw std::bad_alloc;
	}
	return larray.getEntry(larray.getLength());
}
	
#endif
	
