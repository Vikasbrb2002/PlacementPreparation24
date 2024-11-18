#include<bits/stdc++.h>
using namespace std;  
                    // get and set function should be in public mode
class A{
   int a;
   string s;
  public:
   void setname(string str){
       this->s=str;
   }
   string getname(){
    return s;
   }
};
int main(){
  A obj;
  obj.setname("vikas");
  cout<<"name of the private member is : "<<obj.getname()<<endl;

return 0;
}