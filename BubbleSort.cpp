#include <iostream>
#include "BubbleSort.h"
using namespace std;

vector<int> BubbleSort::sort(vector<int> list){
    int temp;
    for (int j=0; j<list.size()-1; j++) {
    for (int i=0; i<list.size()-j-1; i++ ) {
        if (list[i]>list[i+1]) {
            temp = list[i];
            list[i]=list[i+1];
            list[i+1]=temp;
        }
    }
    }
    return list;
}
