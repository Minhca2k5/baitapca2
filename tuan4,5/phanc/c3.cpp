#include<iostream>
using namespace std;
int a,b,q;
bool dg(int n){
    int t=0,k=n;
    while(n>0){
        t=t*10+n%10;
        n/=10;
    }
    return t==k;
}
int main(){
    cin>>q;
    while(q--){
        int dem=0;
        cin>>a>>b;
        for(int i=a;i<=b;i++){
            if(dg(i)) dem++;
        }
        cout<<dem<<"\n";
    }
    return 0;
}
