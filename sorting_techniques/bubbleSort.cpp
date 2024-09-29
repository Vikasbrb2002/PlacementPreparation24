#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int> arr={29,3,2,44,1};
for(int i=0;i<arr.size()-1;i++){
    for(int j=0;j<arr.size()-1-i;j++){
    if(arr[j]>arr[j+1]){
    int temp=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;
    }
    // swap(arr[j],arr[j+1]);
}
}
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}

return 0;
}