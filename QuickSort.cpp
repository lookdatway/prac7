
#include <iostream>
#include "QuickSort.h"
using namespace std;

vector<int> QuickSort::sort(vector<int> list){
    if (list.size()<2){
        return list;
    }
    if (list.size()==2){
        if (list[0]>list[1]) {
            swap(list[0],list[1]);
        }
        return list;
    }
    int partition = list[2];
    vector<int> low;
    vector<int> high;
    for (int i=0; i<list.size(); i++) {
        if (list[i]>partition) {
            high.push_back(list[i]);
        }else{
            low.push_back(list[i]);
        }
    }
    vector<int> a;
    vector<int> b;
    a=sort(low);
    b=sort(high);
    a.insert(a.end(),b.begin(), b.end());
    return a;
}
