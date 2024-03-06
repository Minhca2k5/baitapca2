#include<bits/stdc++.h>
using namespace std;
int n,a,b,cnt=INT_MAX,res=INT_MAX;
int main() {
    cin>>n;
    while(n--){
        cin>>a>>b;
        cnt=min(cnt,a);
        res=min(res,b);
    }
    cout<<(long long)cnt*res;
    return 0;
}
