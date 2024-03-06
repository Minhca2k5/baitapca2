#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        int tmp=1;
        while(tmp<=n){
            cout<<(tmp<=i-1?" ":"*");
            tmp++;
        }
        cout<<"\n";
    }
    return 0;
}
