#include<bits/stdc++.h>
using namespace std;
class maths{
   public:
   int sum(int a, int b){
    return a+b;
   }

   int sum(int a,int b,int c){
    return a+b+c;
   }

   int sum(int a, float b){
    return a+b+10;
   }
};
int main(){
   maths obj;

   cout<<obj.sum(20,10)<<endl;
   cout<<obj.sum(10,20,30)<<endl;
   cout<<obj.sum(20,2.4f);

return 0;
}