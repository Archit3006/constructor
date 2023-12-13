#include <iostream>
using namespace std;
class rectangle{
    public:
int l;
int b;

rectangle(){ //default constructor
l = 2;
b= 3;
}

rectangle (int x, int y){  //parameterised constructor
l = x;
b = y;
}

rectangle(rectangle & r){ //copy constructor
    l = r.l;
    b = r.b;
}
~rectangle(){
    cout<<"destructor is called";
}

};

int main (){
   rectangle r1;
cout<<r1.l<<" "<<r1.b<<endl;

rectangle r2(3,6);
cout<<r2.l<<" "<<r2.b<<endl;

rectangle r3 = r2;
cout<<r3.l<<" "<<r3.b<<endl;
}