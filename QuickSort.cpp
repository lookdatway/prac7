
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
            //cout<<"high "<<list[i]<<endl;
            continue;
        }
        if (list[i]<partition) {
            low.push_back(list[i]);
            //cout<<"low "<<list[i]<<endl;
            continue;

        }
        if (list[i]==partition&&partition==*min_element(list.begin(),list.end())) {
            low.push_back(list[i]);
            //cout<<"low "<<list[i]<<endl;
            continue;

        }
        if (list[i]==partition&&partition==*max_element(list.begin(),list.end())) {
            high.push_back(list[i]);
            //cout<<"high "<<list[i]<<endl;
            continue;

        }
        if (list[i]==partition&&i==2) {
            high.push_back(list[i]);
            //cout<<"high "<<list[i]<<endl;
            continue;

        }
        if (list[i]==partition&&i==0) {
            low.push_back(list[i]);
            //cout<<"low "<<list[i]<<endl;
            continue;
        }

        
    }
    vector<int> a;
    vector<int> b;
    /*for (int k; low.size(); k++) {
        cout<<low[k]<<endl;
    }
   
    for (int j; j<high.size(); j++) {
        cout<<high[j]<<endl;
    }*/
    a=sort(low);
    b=sort(high);
    a.insert(a.end(),b.begin(), b.end());
    return a;
}
