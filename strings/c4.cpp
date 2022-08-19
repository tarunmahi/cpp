#include<iostream>
#include<string>
using namespace std;
int main(){
    string a ="dkdnkddddddddddd";
    int freq[26];
    for (int i = 0; i < 26; i++)
    {
        freq[i]=0;
    }
    for (int i = 0; i < a.size(); i++)
    {
        freq[a[i]-'a']++;
    }
    int count=0;
    char ans='a';
    for (int i = 0; i < 26; i++)
    {
      if(freq[i]>count) {
        count =freq[i];
        ans = i +'a';
        
      }
       
    }
    
    
    cout<<"the char is "<<ans << "the freq is "<<count; 
    
}