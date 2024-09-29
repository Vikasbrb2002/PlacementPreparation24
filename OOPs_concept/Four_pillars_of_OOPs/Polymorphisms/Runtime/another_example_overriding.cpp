#include<bits/stdc++.h>
using namespace std;
class shape{
   public:
   int radius;
   int length;
   int breath;
   shape(){
    this->length=10;
    this->breath=5;
    this->radius=7;
   }
   void area(){
    cout<<"Find area"<<endl;
   }
};

class circle:public shape{
     public:
     int area1=3.14*radius*radius;
     int area(){
       return area1;
     }
};

class rectangle: public shape{
   public:
    int area2=length*breath;
    void area(){
        cout<<"area of the rectangle is "<<area2<<endl;
    }
};
int main(){
   shape a;
   a.area();
   circle c;
   cout<<"area of circle is "<<c.area()<<endl;
   rectangle r;
   r.area();

return 0;
}