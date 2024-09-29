#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    int a;
    string name;
    
    void sleep(){
        cout<<"sleeping behaviour.";
    }

    void eating(){
        cout<<"eating behaviour";
    }
};
int main(){
 // Static memory allocation :
  A obj1;
  obj1.sleep();
  cout<<endl;
  obj1.name="vikas";
  cout<<obj1.name<<endl;
  // dynamic memory allocation :
  A* obj2 = new A;
  obj2->sleep();
  cout<<endl;
  obj2->name="abc";
  cout<<"name of obj2 is : "<<obj2->name<<endl;
//   cout<<"obj2 behavour : "<< obj2->sleep()<<endl;

return 0;
}