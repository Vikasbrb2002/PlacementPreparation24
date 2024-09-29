#include<bits/stdc++.h>
using namespace std;
class A{
   public:
   int chemistry;
   A(){
    this->chemistry=101;
   }
};

class B{
   public:
   int physics;
   int chemistry;
   B(){
    this->physics=202;
    this->chemistry=11001;
   }
};

class C: public A,public B{
    public:
    int maths;
};

int main(){
  C obj;
  cout<<obj.A::chemistry<<" "<<obj.maths<<" "<<obj.physics<<" "<<obj.B::chemistry<<endl;

return 0;
}