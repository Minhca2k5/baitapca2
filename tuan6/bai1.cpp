#include<bits/stdc++.h>
using namespace std;
int n,m,k,a[1001][1001];
int dx[8]={-1,-1,-1,0,1,1,1,0};
int dy[8]={-1,0,1,1,1,0,-1,-1};
void input(){
    cin>>n>>m>>k;
    int t=0;
    while(t<k){
        int x=rand() % n;
        int y=rand() % m;
        a[x][y]=1;
        t++;
    }
}
int minf(int x,int y){
    int cnt=0;
    for(int k=0;k<8;k++){
        int x1=x+dx[k];
        int y1=y+dy[k];
        if(x1>=1&&x1<=n&&y1>=1&&y1<=m&&a[x1][y1]==1) cnt++;
    }
    return cnt;
}
int main(){
    input();
    bool over=false;
    while(!over){
        int x,y; cin>>x>>y;
        if(a[x][y]==1){
            cout<<"You're dead!"<<endl;
            for(int i=1;i<=n;i++){
                for(int j=1;j<=m;j++) cout<<a[i][j];
                cout<<"\n";
            }
            over=true;
        }
        else{
            int tmp=minf(x,y);
            a[x][y]=tmp;
            cout<<tmp<<" ";
        }
    }
    return 0;
}