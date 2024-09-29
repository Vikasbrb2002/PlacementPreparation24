#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int> arr={3,2,55,5,6,1};
  for(int i=1;i<arr.size();i++){
       int key=arr[i];
       int j=i-1;
       while(j>=0 && key<arr[j]){
        arr[j+1]=arr[j];
        j--;
       }
       arr[j+1]=key;
  }
  for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
  }

return 0;
}