#ifndef BITSET_HPP
#define BITSET_HPP
#include <string>

class Bitset{
public:

  //initialize n to 8 and use a for command to initialize bitst to 0
  Bitset();

  //same thing but set n = size
  Bitset(intmax_t size);

  //step through string with substr and for every 0 and 1 replicate in array as bool
  Bitset(const std::string & value);

  // delete pointer
  ~Bitset();

  Bitset(const Bitset & ) = delete;
  Bitset & operator=(const Bitset &) = delete;

  // im not sure what this is for
  intmax_t size() const;

  // if every value in pointer is a 0 or 1 return true.
  bool good() const;

  // use if statement to see if index is in parameters
  void set(intmax_t index);

  // same thing but changing pointer index to 0
  void reset(intmax_t index);

  // same thing but if the pointer value is 0 or 1 switch it
  void toggle(intmax_t index);

  // if index is in the range and the bit at that index is 1 return true
  bool test(intmax_t index);

  // use for loop to read each bit and add 0 or 1 to string as needed
  std::string asString() const;

private:
  int n;
  bool* array;
};

#endif
