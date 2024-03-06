#include<bits/stdc++.h>
using namespace std;
int n,a[1000][1000];
void sapxep(int x,int y){
    int x1,y1;
    if(x==1) x1=n;
    else x1=x-1;
    if(y==n) y1=1;
    else y1=y+1;
    if(a[x1][y1]==0){
        a[x1][y1]=a[x][y]+1;
        sapxep(x1,y1);
    }
    else {
        if(x==n) return;
        else{
            if(a[x+1][y]>0) return;
            else{
                a[x+1][y]=a[x][y]+1;
                sapxep(x+1,y);
            }
        }
    }
}
int main(){
    cin>>n;
    a[1][n/2+1]=1;
    sapxep(1,n/2+1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) cout<<a[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}
