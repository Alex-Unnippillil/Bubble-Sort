

/*
Bubble Sort Algorithm C++
Alex Unnippillil

*/

#include <iostream> 
#include <bits/stdc++.h> 
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>


using namespace std; 


//BUBBLE SORT 

void printArr(vector<int>& arr) {
    for(int i = 0; i <arr.size();i++){
        cout<<arr[i] <<", ";
    }
    cout<<endl;
}


void bubbleSort(vector<int>& arr){
    int n=arr.size();
    for(int i =0; i<n-1; i++){
        if(arr[i]>arr[i+1]);
    }
}

int main() {
    int arr[10];
    string input;
    cout<<"Bubble Sort algorithm"<<endl;
    cout <<"User Enter 10 numbers (separated by commas ex. 3,1,2,6,7,9,0,10,14,7): ";
    for (int i=0; i<10;i++){
        cin>>arr[i];
    }
    cout << " User Inputed Array: ";
    printArr(arr);
    bubbleSort(arr);
    cout<<endl;
    printArr(arr)
    
    return 0;
    }
    