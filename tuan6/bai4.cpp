#include <bits/stdc++.h>
using namespace std;

class hangman{
private:
    string s[5];
    vector<string>v;
public:
    hangman(){
        s[0]="elephant";
        s[1]="chicken";
        s[2]="mouse";
        s[3]="monkey";
        s[4]="goose";
    }
    void input(){
        for(int i=0;i<5;i++) v.push_back(s[i]);
    }
    string random(){
        srand(time(0));
        int index=rand()%5;
        return v[index];
    }
    void xuli(){
        string st=random();
        string sc;
        for(int i=0;i<st.size();i++) sc+='_';
        int t=0,index=0;
        while(t<10){
            cout<<"nhap lua chon cua ban: "<<endl;
            char c; cin>>c;
            if(c==st[index]){
                sc[index]=c;
                cout<<sc<<endl;
                if(sc==st){
                    cout<<"chuc mung ban da gianh chien thang!"<<endl;
                    return ;
                }
                else{
                    cout<<"ban that dang cap!"<<endl;
                    index++;
                }
            }
            else{
                cout<<sc<<endl;
                cout<<"that dang tiec,hay co gang tiep nhe."<<endl;
            }
            t++;
        }
        cout<<"ban da thua cuoc, hay co gang lan sau nhe."<<endl;
    }
};
int main(){
    hangman x;
    x.input();
    x.xuli();
}
