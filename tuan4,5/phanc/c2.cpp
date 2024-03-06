#include<iostream>
#include<string>
using namespace std;
string s;
bool dx(){
    int x=s.size();
    for(int i=0;i<x;i++){
        if(s[i]!=s[x-i-1]) return false;
    }
    return true;
}
int main(){
    cin>>s;
    cout<<dx()?"Yes":"No";
    return 0;
}
