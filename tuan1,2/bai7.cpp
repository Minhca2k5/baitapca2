#include<bits/stdc++.h>
#define ll long long
using namespace std;
char c,tmp,res;
int cnt,ans;
ll dem;
int main(){
    while(cin>>c){
        if(c!=tmp){
            if(c==res) dem--;
            dem+=(ll)cnt;
            cnt++;
            ans=1;
        }
        else {
            if(ans==1){
                dem++;
                ans=0;
            }
        }
        res=tmp;
        tmp=c;
    }
    cout<<dem;
    return 0;
}
