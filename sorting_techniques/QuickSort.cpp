#include<bits/stdc++.h>
using namespace std;
int Partition(vector<int>& arr,int s,int e){
    int pivotIndex=s;
    int pivotElement=arr[s];
    // step:B -> find right position of pivot element
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=arr[pivotIndex]){
            count++;
        }
    }
    int rightIndex=count+s;
    swap(arr[pivotIndex],arr[rightIndex]);
    pivotIndex=rightIndex;

    // step c: 
    int i=s,j=e;
    while(i<pivotIndex && j>pivotIndex){
        while(pivotElement>=arr[i]){
            i++;
        }
        while(pivotElement<arr[j]) j--;

        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i],arr[j]);
        }
    }
    return pivotIndex;
}
void quickSort(vector<int> &arr,int s, int e){

    if(s>=e) return;

    int p=Partition(arr,s,e);

    //recursive calls
    //left chote element ke liye
    quickSort(arr,s,p-1);
    //right bade element ke liye
    quickSort(arr,p+1,e);
}
int main(){
//   int arr[]={8,1,3,4,20,50,30};
  vector<int> arr={8,1,3,4,20,50,20,30,20,30,30};
  int n=11;
  int s=0;
  int e=n-1;
  quickSort(arr,s,e);
  
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }

return 0;
}