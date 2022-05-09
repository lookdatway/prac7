
#include <vector>
#ifndef RecursiveBinarySearch_h
#define RecursiveBinarySearch_h

class RecursiveBinarySearch{
private:

public:
    RecursiveBinarySearch(std::vector<int> sorted, int find, int min,  int max);
    bool search(std::vector<int> toSearch, int toFind);
};

#endif
