#include<iostream>
using namespace std;
int main(){
    int n=8;
    int a[n]={1,2,0,7,2,0,2,2};
    int mx=-1;
    int ans=0;

    for (int i = 0; i < n; i++)
    {
        if(a[i]>mx &&a[i]>a[i+1]){
            mx=a[i];
            ans++;
        }
        mx=max(mx,a[i]);
    }
    cout<<ans;
}