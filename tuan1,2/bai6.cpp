#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,tmp=INT_MAX;
    while(cin>>n){
        if(tmp<0) break;
        if(n!=tmp) cout<<n<<" ";
        tmp=n;
    }
    return 0;
}
