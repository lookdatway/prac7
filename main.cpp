
#include "BubbleSort.h"
#include <iostream>
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
using namespace std;


int main(){
    vector<int> vect;

    QuickSort jim;
    /*for (int i=0; i<vect.size(); i++) {
        cout<<sorted[i]<<" ";
    }
    cout<<endl;
    for (int i=0; i<vect.size(); i++) {
        cout<<sorted2[i]<<" ";
    }
    cout<<endl;
    
    RecursiveBinarySearch jon(vect, -4, 0, 6)
    cout<<jon.search(sorted2, 23)<<endl;*/
    RecursiveBinarySearch jon(vect, -4, 0, 6);
    while(!cin.fail()) {
            int input;
            cin >> input;
            vect.push_back(input);
        }
        vect.pop_back();
    
    vector<int> sorted = jim.sort(vect);
    string boole;
    if (jon.search(sorted,1)==1) {
        boole = "true";
    }else{
        boole = "false";
    }
    cout<<boole;
    for (int i=0; i<sorted.size(); i++) {
        cout<<" "<<sorted[i];
    }
    cout<<endl;
}
