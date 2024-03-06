#include<bits/stdc++.h>
using namespace std;
void concat(const char*s1,const char*s2){
    int t1=strlen(s1);
    int t2=strlen(s2);
     char* s=new char[t1+t2+1];
    for(int i=0;i<t1;i++){
        s[i]=s1[i];
    }
    for(int i=t1;i<t1+t2;i++){
        s[i]=s2[i-t1];
    }
    s[t1+t2]='\0';
    cout<<s;
    delete s;
}
int main(){
    const char* s1="hello";
    const char* s2="word";
    concat(s1,s2);
    return 0;
}