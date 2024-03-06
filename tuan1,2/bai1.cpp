#include<bits/stdc++.h>
using namespace std;
int n;
bool nt(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return n>1;
}
int main(){
    cin>>n;
    cout<<(nt(n)?"yes":"no");
    return 0;
}
