#include "bitset.hpp"

  Bitset::Bitset()
  {
      n = 8;
      array = new bool[8];
      for(int i = 0; i < 8; i++)
      {
          *(array+i) = 0;
      }
  }


  Bitset::Bitset(intmax_t size)
  {
      n = size;
      array = new bool[size];
      for(int i = 0; i < size; i++)
      {
          *(array+i) = 0;
      }
  }


  Bitset::Bitset(const std::string & value)
  {
      n = value.length();
      array = new bool[n];
      for(int i = 0; i < n; i++)
      {
          if(value.substr(i,1) == "0")
          {
              *(array+i) = 0;
          }
          else
          {
              *(array+i) = 1;
          }
      }
      
  }


  Bitset::~Bitset()
  {
      delete array;
  }

  intmax_t Bitset::size() const
  {
      return n;
  }


  bool Bitset::good() const
  {
      for(int i = 0; i < n; i++)
      {
          if((*(array+i) == 0) || (*(array+i) == 1))
          {
              return true;
          }
      }
      return false;
  }

  void Bitset::set(intmax_t index)
  {
      if(index >= 0 && index <= (n-1))
      {
          *(array+index) = 1;
      }
  }

  
  void Bitset::reset(intmax_t index)
  {
      if(index >= 0 && index <= (n-1))
      {
          *(array+index) = 0;
      }
  }

  
  void Bitset::toggle(intmax_t index)
  {
      if(index >= 0 && index <= (n-1))
      {
          if(*(array+index) == 1)
          {
              *(array+index) = 0;
          }
          else
          {
            *(array+index) = 1;
          }
      }
  }

  
  bool Bitset::test(intmax_t index)
  {
      if(index >= 0 && index <= (n-1))
      {
          if(*(array+index) == 1)
          {
              return true;
          }
          else {return false;}
      }
      return false;
  }

  
  std::string Bitset::asString() const
  {
      std::string s = "";
      for(int i = 0; i < n;i++)
      {
          std::string x;
          if(*(array+i)==0)
          {
              x = "0";
          }
          else
          {
              x = "1";
          }
          s = s+x;
      }
      return s;
  }
