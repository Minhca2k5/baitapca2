#include<bits/stdc++.h>
using namespace std;
int n,m,k,a[1001][1001];
int dx[8]={-1,-1,-1,0,1,1,1,0};
int dy[8]={-1,0,1,1,1,0,-1,-1};
bool ok=false;
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
void output(){
    cout<<"You're dead!"<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++) cout<<a[i][j];
        cout<<"\n";
    }
    ok=true;
}
void loang(int x,int y){
    a[x][y]=minf(x,y);
    for(int k=0;k<8;k++){
        int x1=x+dx[k];
        int y1=y+dy[k];
        if(x1>=1&&x1<=n&&y1>=1&&y1<=m){
            if(a[x1][y1]==0){
                loang(x1,y1);
            }
            else output();
        }    
    }
}
int main(){
    input();
    if(!ok){
        int x,y; cin>>x>>y;
        if(a[x][y]==1) output();
        else{
            loang(x,y);
        }
    }
    return 0;
}