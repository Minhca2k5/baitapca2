#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,a[10000],s[10000];
ll dem;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    for(int i=1;i<=n;i++){
        s[i]=s[i-1]+a[i-1];
        dem+=(ll)s[i];
    }
    cout<<dem;
    return 0;
}
