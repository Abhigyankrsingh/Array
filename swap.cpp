#include<bits/stdc++.h>

using namespace std;


  void swapnU(int &a, int &b){
    int temp = a;
    a = b;
    b = temp; 
  }

  void printa (int arr[], int n){

    for(int i =0; i<n; i++){
        cout<< arr[i] << " ";
    }
  }


  void swapat(int arr[], int size){
    

    for(int i =0; i <size; i+=2){
        swapnU(arr[i], arr[i +1]);
    }
  }



int main(){


    int even[8] = {2,3,31,3,4,1,6,5};

    swapat( even, 8);

    printa(even, 8);
}