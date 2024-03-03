#include<bits/stdc++.h>

using namespace std;

void binar(vector<int> &arr, int n, int target){


    int start = 0;
    int end = n-1;
    
  
    while(start <= end){
          int mid = start + (end - start)/2;
        if(arr[mid] == target){
            cout << " Target found at " << mid  << " index"<<endl;
            return;
        } else if (arr[mid] > target){
            start = mid + 1;
        } else {
             end = mid -1;
        }
    }

    cout << " Target not found" << endl;
}



int main(){
    int n;
    cin >> n;

    int target; 

    cin >> target;

    vector<int>arr(n);

    for(int i =0; i< n;i++){
        cin >> arr[i];
    }

    binar(arr,n, target);

   for(int i =0; i<n;i++){
    cout << arr[i];
   }   
}