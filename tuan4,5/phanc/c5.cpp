#include<iostream>
using namespace std;
int n,m,d[11][11];
void xoanoc(int x,int y,int z){
    if(y<x || z<x) return;
   for(int i=x;i<=y;i++) d[x][i]=d[x][i-1]+1;
   for(int i=x+1;i<=z;i++) d[i][y]=d[i-1][y]+1;
   for(int i=y-1;i>=x;i--) d[z][i]=d[z][i+1]+1;
   for(int i=z-1;i>x;i--) d[i][x]=d[i+1][x]+1;
   xoanoc(x+1,y-1,z-1);
}
int main(){
    cin>>n>>m;
    xoanoc(1,m,n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++) cout<<d[i][j]<<" ";
        cout<<"\n";
    }
    return 0;
}
