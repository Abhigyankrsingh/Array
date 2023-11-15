#include<bits/stdc++.h>

using namespace std;



// int remv(int arr[], int n){

//     int temp[n];

//     temp[0] = arr[0];
//      int res = 1;
//     for(int i =0; i<n;i++){
      
//       if(temp[res-1] != arr[i]){
//          temp[res] = arr[i];
//          res++;
//       }
//     }

//     return res;
// }



int remv(int arr[], int n){

    int res = 1;

    for(int i =0; i<n; i++){
        if(arr[i] != arr[res-1]){
            arr[res] = arr[i];
            res++;
        }
    }
    return res++;
}

int main(){


int arr[4] = {1,33,33,33} , n=4;


n= remv(arr, n);

for(int i =0; i<n;i++){
    cout << arr[i] ;
}


}