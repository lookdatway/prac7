
#include "BubbleSort.h"
#include <iostream>
#include "QuickSort.h"
using namespace std;


int main(){
    vector<int> vect;
    vect.push_back(5);
    vect.push_back(1);
    vect.push_back(-4);
    vect.push_back(2);
    vect.push_back(19);
    BubbleSort halpert;
    QuickSort beesly;
    //vector<int> sorted = halpert.sort(vect);
    vector<int> sorted2 = beesly.sort(vect);
    
    /*for (int i=0; i<vect.size(); i++) {
        cout<<sorted[i]<<" ";
    }
    cout<<endl;*/
    for (int i=0; i<vect.size(); i++) {
        cout<<sorted2[i]<<" ";
    }
    cout<<endl;
}
