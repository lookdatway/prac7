
#include "BubbleSort.h"
#include <iostream>
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
using namespace std;


int main(){
    vector<int> vect;
    /*vect.push_back(0);
    vect.push_back(3);
    vect.push_back(5);
    vect.push_back(4);
    vect.push_back(-5);
    vect.push_back(100);
    vect.push_back(7777);
    vect.push_back(2014);
    BubbleSort halpert;*/
    QuickSort beesly;
    RecursiveBinarySearch jon(vect, -4, 0, 6);

    while (!cin.fail()) {
        int input;
        cin>>input;
        vect.push_back(input);
    }
    vect.pop_back();
    
    //vector<int> sorted = halpert.sort(vect);
    vector<int> sorted2 = beesly.sort(vect);
    
    bool found = jon.search(sorted2, 1);
    if (found==1) {
        cout<<"true ";
    }else{
        cout<<"false ";
    }
    /*for (int i=0; i<vect.size(); i++) {
        cout<<sorted[i]<<" ";
    }
    cout<<endl;*/
    for (int i=0; i<sorted2.size(); i++) {
        cout<<sorted2[i]<<" ";
    }
    cout<<endl;
    
   
    
}
