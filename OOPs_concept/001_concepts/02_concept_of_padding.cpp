#include<bits/stdc++.h>
using namespace std;
// class A{
//   public:
//   int a;
//   char b;
 
// };
class B{
 public:
 int a;
 char b;
 char d;
 int c;
 void fun(){
    int ans;
 }
};
int main(){
 // B obj;
  //cout<<"size of empty class is -> "<<sizeof(A)<<endl; // ans = 1 bytes
  
  // concept of padding : 
  //cout<<"Ans should be 5 but the ans is : "<< sizeof(A)<<endl;  // ans=8 bytes

  cout<<"Ans should be 20 but the ans is : "<< sizeof(B)<<endl;  // ans=12 bytes
return 0;
}