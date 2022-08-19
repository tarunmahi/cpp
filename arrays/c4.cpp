#include<iostream>
using namespace std;
int main(){
    int n=8;
    int a[n]={1,2,3,4,5,8,1};
    int pd =a[1]-a[0];
    int curr=2;
    int j=2;
    int ans=0;
    while (j<n)
    {
        if (pd==a[j]-a[j-1])
        {
           curr++;
        }
        else{
            pd=a[j]-a[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }
    cout<<ans;
    
}