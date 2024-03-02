#include<bits/stdc++.h>

using namespace std;



void selectS(int arr[], int n){

        for(int i =0; i< n-1 ;i++){
            int index = i;

            for(int j = i+1; j<n;j++){

                if(arr[index] < arr[j]){
                     index = j;
                }
            }

            swap(arr[i], arr[index]);
        }
    }
 
 void printa(int arr[], int n){

    for(int i =0; i<n;i++){
        cout << arr[i];
    }
 }



int main(){

   int n;
   cin >> n;

  int arr[n];

   for(int i =0; i<n;i++){
    cin >> arr[i];
   }
 
 selectS(arr,n);
 printa(arr,n);
    
}

