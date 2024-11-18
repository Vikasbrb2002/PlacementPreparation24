#include<bits/stdc++.h>
using namespace std;
class Base{
    int privatedata;

  protected:
     int protectedData;

  public:
    Base(){
        privatedata=10;
        protectedData=19;
    }
    friend void friendfuc(Base& obj);
};

void friendfuc(Base& obj){
    cout<<"private data is : "<<obj.privatedata<<endl;
    cout<<"protected data is : "<<obj.protectedData;
}
int main(){
  Base obj;
  friendfuc(obj);

return 0;
}