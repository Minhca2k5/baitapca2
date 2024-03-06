#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int tmp1=n-1,tmp2=n+1;
    for(int i=1;i<=n;i++){
        int tmp=1;
        while(tmp<=2*n-1){
            cout<<(tmp>tmp1&&tmp<tmp2?"*":" ");
            tmp++;
        }
        cout<<"\n";
        tmp1--;
        tmp2++;
    }
    return 0;
}
