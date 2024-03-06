#include<bits/stdc++.h>
using namespace std;
int n;
bool nt(int x){
    for(int i=1;i<=sqrt(x);i++){
        if(x%i==0) return false;
    }
    return x>1;
}
int main(){
    cin>>n;
    if(nt(n)) cout<<"yes";
    else cout<<"no";
}