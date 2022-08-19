//getting highest numbers in an array....


#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int n=5;
    int s[n]={1,4,2,7,5};
    for (int i = 0; i < n; i++)
    {
       // cout<<s[i];
    }
    int mx =-99999;
    int nx=-999999;
    for(int i=0;i<n;i++){
        mx=max(mx,s[i]);
    }
    for(int i=0;i<n;i++){
       if(s[i]!=mx){
        nx=max(nx,s[i]);
       }

    }
    cout<<mx <<"\n"<<nx;
}