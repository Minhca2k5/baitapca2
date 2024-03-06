#include<iostream>
#define N 10000
using namespace std;
int a[N],n,d[N];
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        d[a[i]]++;
        if(d[a[i]]>1){
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
    return 0;
}
