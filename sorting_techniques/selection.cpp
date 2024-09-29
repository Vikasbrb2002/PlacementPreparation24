#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int> arr={8,2,4,3,1,9};
 for(int i=0;i<arr.size()-1;i++){
    int min_index=i;
    for(int j=i+1;j<arr.size();j++){
        if(arr[j]<arr[min_index])
        min_index=j;
    }
    if(min_index!=i){
        swap(arr[i],arr[min_index]);
    }
 }
 for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
 }

return 0;
}