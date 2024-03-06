#include<bits/stdc++.h>
using namespace std;
int a[30];
int main(){
    for(int i=0;i<30;i++) cin>>a[i];
    sort(a,a+30);
    for(int i=0;i<30;i++) cout<<a[i];
}
