//conversion of lower case to uppercase letters and vice versa

#include<iostream>
#include<string>
using namespace std;
int main(){
    string a1 = "SafTyI";
    for (int i = 0; i < a1.length(); i++)
    {
        if(a1[i]>='A'&&a1[i]<='Z'){
            a1[i]+=32;
        }
    }
    cout<<a1;
}
