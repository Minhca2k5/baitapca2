#include<bits/stdc++.h>
using namespace std;
int n,m;
string doi1(int &n){
    string st="";
    while(n>1){
        char tmp=(n%2)+'0';
        st+=tmp;
        n/=2;
    }
    reverse(st.begin(),st.end());
    st="1"+st;
    return st;
}
int doi2(int x){
    int ans=0;
    string s=to_string(x);
    int tmp=s.size()-1;
    for(int i=0;i<s.size();i++){
        ans+=(s[i]-'0')*pow(2,tmp);
        tmp--;
    }
    return ans;
}
int main(){
    cin>>n>>m;
    cout<<doi1(n)<<" "<<doi2(m);
}