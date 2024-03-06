#include<bits/stdc++.h>
using namespace std;
int a,b;
int ucln(int a,int b){
    if(b==0) return a;
    return ucln(b,a%b);
}
int main(){
    cin>>a>>b;
    cout<<ucln(a,b);
    return 0;
}