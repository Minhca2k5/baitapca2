#include<bits/stdc++.h>
using namespace std;
struct sinhvien{
    int age,stt;
    string s1,s2;
    void nhap(){
        cin>>age>>s1>>s2>>stt;
    }
    void in(){
        cout<<age<<" "<<s1<<" "<<s2<<" "<<stt;
    }
};
int main(){
    sinhvien x;
    x.nhap();
    x.in();
    return  0;
}
