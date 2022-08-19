
//string basic operations

#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){

    string s1="abc";
    string s2 = "abc";
    string s6 = "9866266";
    int s7 =9866266;
    string s5 ="hello";
    if (s2.compare(s1)==0)
    {
        cout<<"false";
    }
    string s3 =s2.append(s1);
    cout<<s3;
    string s4 = s3.substr(2,3);
    cout<<"\n";
    cout<<s4;

    string a1 =to_string(s7);
     cout<<"\n";
     cout<<a1;
     int a2 =stoi(s6);
     cout<<"\n";
     cout<<a2;

    stable_sort(s5.begin(),s5.end());
    cout<<s5;
     
     char b1[] ="tar";
     char b4[]="tar";
     if(strcmp(b1,b4)==0){
        cout<<"true";
     }
 string b7 ="taruun";

  cout<<b7.find("u");



    
    
}