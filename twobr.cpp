#include<bits/stdc++.h>

using namespace std;


void sumo(vector<int>& arr, int n, int target){

    vector<int>ans(n);
    for(int i =0; i<n;i++){
        for(int j = i+1; i<n;j++){
            if(arr[i] + arr[j] == target){
                arr.push_back(ans.arr[i], ans.arr[j]);

            }
        }
    }

}



int main(){

int n;

cin >>n;

int target;

cin >> target;

vector<int>arr(n);

for(int i =0; i<n;i++){
    cin >> arr[i];
}


}