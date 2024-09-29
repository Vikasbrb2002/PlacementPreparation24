#include<bits/stdc++.h>
using namespace std;
class param{
  public:
  int val;

  void operator+(param& object2){
       int val1=this->val;
       int val2=object2.val;
       cout<<(val2-val1)<<endl;
  }
};
int main(){
  param object1,object2;
  object1.val=10;
  object2.val=44;

  object1+object2;

return 0;
}