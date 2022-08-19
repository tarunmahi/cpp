//sorting numbers in an string
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string a ="189452394579759121341515";
    sort(a.begin(),a.end(),greater<char>());
    cout<<a;
}
