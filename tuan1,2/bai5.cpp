#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        int tmp=i;
        for(int j=1;j<=n;j++){
            cout<<tmp<<" ";
            if(tmp==n) tmp=1;
            else tmp++;
        }
        cout<<"\n";
    }
    return 0;
}
