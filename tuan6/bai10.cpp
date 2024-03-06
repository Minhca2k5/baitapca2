#include<bits/stdc++.h>
using namespace std;
int n;
vector<int>v;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        int tmp=rand()%50;
        v.push_back(tmp);
    }
    for(int i=0;i<n-2;i++){
       for(int j=i+1;j<n-1;j++){
        for(int k=j+1;k<n;k++){
            if((v[i]+v[j]+v[k])%25==0) cout<<v[i]<<" "<<v[j]<<" "<<v[k]<<endl;
        }
       }
    }
    return 0;
}