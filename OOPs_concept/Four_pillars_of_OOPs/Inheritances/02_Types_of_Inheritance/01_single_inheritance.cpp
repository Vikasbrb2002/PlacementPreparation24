#include<bits/stdc++.h>
using namespace std;
class car{
     public:
     string name;
     string model;
     int maxspeed;

     void speedUp(){
        cout<<"speeding up"<<endl;
     }

     void breakdown(){
        cout<<"slow down the car"<<endl;
     }
};

class scopio: public car{

};
int main(){
   car scopio;
   scopio.name="top model";
   cout<<scopio.name<<endl;
   scopio.breakdown();

return 0;
}