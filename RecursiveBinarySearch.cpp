
#include "RecursiveBinarySearch.h"
using namespace std;



bool RecursiveBinarySearch::search(vector<int> toSearch, int toFind){
    int mid = toSearch.size()/2;
    
    if (toSearch[mid]==toFind){
        return 1;
    }
    
    if (toSearch.size()<2){
        return 0;
    }
    if (toSearch[mid]<toFind){
        vector<int> right = toSearch;
        for (int i=0; i<mid; i++) {
            right.erase(right.begin()+i);
        }
        return search(right, toFind);
    }
    if (toSearch[mid]>toFind){
        vector<int> left = toSearch;
        for (int j=mid; j<toSearch.size(); j++) {
            left.pop_back();
        }
        return search(left, toFind);
    }
    
    
    /*
    RecursiveBinarySearch jim(toSearch, toFind, 0, toSearch.size()-1)
    
    if (toSearch[jim.midpoint]==toFind){
        return 1;
    }
    if (toSearch[jim.midpoint]<toFind){
        RecursiveBinarySearch creed(toSearch, toFind, jim.min, (jim.midpoint)-1);
    }
    */
    return 0;
}
