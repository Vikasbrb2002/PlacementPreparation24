#include<bits/stdc++.h>
using namespace std;
int BS(vector<int> arr, int low, int high, int target){

    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            high=mid-1;
        }
        else low=mid+1;
    }
    return -1;

}
int main(){

 vector<int> arr={2,12,23,24,32,33,54,55};
 int low=0,high=arr.size()-1;
 int target=5;
 int ans=BS(arr,low,high,target);
 if(ans==-1){
    cout<<"target is not present in array"<<endl;

 }
 else cout<<"target is present at position : "<<ans<<endl;
return 0;
}