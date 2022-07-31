#include<iostream>
using namespace std;

int main(){
    int b=0120;
    int c = 0x50;
    int d= 0b01010000;
    cout<<"\n"<<b<<"\n"<<c<<"\n"<<d;
     
    char a =66;
    cout<<"value is "<<a<<"\n";
    cout<<"values is "<<static_cast<int>(a)<<"\n";

}