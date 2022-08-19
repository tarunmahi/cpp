#include<iostream>
using namespace std;

int main(){
    int n=8;
    int a[n]={1,0,3,0,5,0,24};
    int s[n];
    int j=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]!=0){
            s[j]=a[i];
            j++;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<s[i]<<" ";
    }
}