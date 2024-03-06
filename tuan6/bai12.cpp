#include<bits/stdc++.h>
using namespace std;
int tohop(int a,int b){
    if(a==b || a==0) return 1;
    return tohop(a-1,b-1)+tohop(a,b-1);
}
int main(){
    int a,b;
    while(cin>>a>>b){
        if(a==-1&&b==-1) break;
        else{
            cout<<tohop(a,b)<<endl;
        }
    }
}