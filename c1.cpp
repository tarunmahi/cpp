#include<iostream>
#include<string>
using namespace std;
int main(){
    /*
    std::cout<<"hello"<<std::endl;
    std::cout<<"hello2";
*/
//-------------------------------
/*
int age;
string tar;
cout<<"enter the name and age yourself \n";
cin>>tar;
cin>>age;
cout<<"helllo your name is "<<tar<<" and your age is "<<age<<" ";
  */
 int age;
 string tar;
 cout<<"enter your name and age with a space \n";
 getline(cin,tar);
 cin>>age;
 cout<<"your name is "<<tar<< " and your age is "<<age<<" ";

}