#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int tmp1=n-1,tmp2=n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n-1;j++){
            cout<<(j>=tmp1&&j<=tmp2?"*":" ");
        }
        cout<<endl;
        tmp1--;
        tmp2++;
    }
}