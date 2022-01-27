#ifndef BITSET_HPP
#define BITSET_HPP
#include <string>

class Bitset{
public:

  // Default constructor, sets valid bit size to 8
  Bitset();

  // Constructor seting bit size to n
  Bitset(intmax_t size);

  // Constructor with valid bitset being 00010000
  Bitset(const std::string & value);

  // Deconstructor
  ~Bitset();

  Bitset(const Bitset & ) = delete;
  Bitset & operator=(const Bitset &) = delete;

  // Returns size of bitset
  intmax_t size() const;

  // Determines if bitset is valid
  bool good() const;

  // Sets nth bit to 1
  void set(intmax_t index);

  // Sets nth bit to 0
  void reset(intmax_t index);

  // Switches nth bit from 1 to 0 or 0 to 1
  void toggle(intmax_t index);

  // Determines if nth bit is 1
  bool test(intmax_t index);

  // Returns bit set as string
  std::string asString() const;

private:

  // TODO
  bool isValid;
  
  intmax_t arraySize;
  
  intmax_t *bitarray;
};

#endif
