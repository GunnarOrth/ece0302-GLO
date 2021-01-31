#include "bag.hpp"

// empty implementation                                                                                                     

template <typename T> Bag<T>::Bag() { n = 0;}

template <typename T> Bag<T>::~Bag() {}

template <typename T> std::size_t Bag<T>::getCurrentSize() const 
{ 
    return n; 
}

template <typename T> bool Bag<T>::isEmpty() const 
{ 
    if(n == 0)
    {
        return true;
    }
    else{
        return false;
    } 
}

template <typename T> bool Bag<T>::add(const T& entry) 
{ 
    n = n+1;
    item[n] = entry;
    if(n < 100000)
    {
        return true;
    }
    else {
        return false;
    }
     
}

template <typename T> bool Bag<T>::remove(const T& entry) 
{ 
    for(int i = 0; i <= n; i++)
    {
        if(item[i] == entry)
        {
            for(int j = i; j <= n; j++)
            {
            item[j] == item[j+1]
            }
            n = n-1;
            return true;
        }
    }
    return false;
}

template <typename T> void Bag<T>::clear() 
{
    n = 0;
}

template <typename T> std::size_t Bag<T>::getFrequencyOf(const T& entry) const 
{ 
    int k = 0;
    for(int i = 0; i <= n; i++)
    {
        if ( item[i] == entry)
        {
            k++;
        }
    }
    return k; 
}

template <typename T> bool Bag<T>::contains(const T& entry) const 
{ 
    for(int i = 0; i <= n; i++)
    {
        if ( item[i] == entry)
        {
            return true;
        }
    }
    return false; 
}

