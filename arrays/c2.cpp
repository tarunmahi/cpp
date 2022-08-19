//sum of all subarrays
#include<iostream>
using namespace std;

int main(){
    int n=5;
    int a[n]={1,2,3,4,5};
    int count;
    for (int i = 0; i <n; i++){
        count=0;
        for (int j = i; j<n ; j++){
            count+=a[j];
            
        }
        cout<<" "<<count;
        cout<<"\n";
        /* code */
    }
    
}