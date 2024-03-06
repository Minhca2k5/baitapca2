#include<bits/stdc++.h>
using namespace std;
void reverse(char a[]){
    char* str=a;
    char * e=a;
    while(*e!='\0'){
        e++;
    }
    e--;
    while(str<=e){
        char tmp=*e;
        *e=*str;
        *str=tmp;
        e--;
        str++;
    }
    cout<<a<<endl;
}
void delete_char(char a[],char c){
    char* str=a;
    char* fir=a;
    while(*str!='\0'){
        if(*str!=c){
            *fir=*str;
            fir++;
        }
        str++;
    }
    *fir='\0';
    cout<<a<<endl;
}
void pad_right(char a[],int n){
    int t=strlen(a);
    if(t>=n) return;
    while(t<n){
        a[t]=' ';
        t++;
    }
    a[t]='\0';
    cout<<a<<endl;
}
void pad_left(char a[],int n){
    int t=strlen(a);
    if(t>=n) return;
    a[n]='\0';
    for(int i=t;i>=0;i--){
        a[i+n-t]=a[i];
    }
    for(int i=0;i<n-t;i++) a[i]=' ';
    cout<<a<<endl;
}
void truncate(char a[],int n){
    int t=strlen(a);
    if(t<=n) return ;
    a[n]='\0';
    cout<<a<<endl;
}
bool is_palindrome(char a[]){
    int t=strlen(a);
    for(int i=0;i<t/2;i++){
        if(a[i]!=a[t-i-1]) return false;
    }
    return true;
}
void trim_left(char a[]){
    char* str=a;
    int n=0;
    bool ok=false;
    while(*str!='\0'){
        if(*str!=' '){
            ok=true;
            *(str-n)=*str;
        }
        else if(!ok) n++;
        str++;
    }
    *(str-n)='\0';
    cout<<a<<endl;
}
void trim_right(char a[]){
    char* str=a;
    while(*str!='\0'){
        if(*str==' '){
            *str='\0';
            break;
        }
        str++;
    }
    cout<<a<<endl;
}
int main(){
    char a[11]="helloworld";
    reverse(a);
    char b[11]="helloworld";
    char c='l';
    delete_char(b,c);
    char d[]="hello";
    int n=10;
    pad_right(d,n);
    char e[]="hello";
    pad_left(e,n);
    char f[]="hellomyworld";
    truncate(f,n);
    char l[]="loveevol";
    cout<<(is_palindrome(l)?"yes":"no")<<endl;
    char k[]="   concac";
    trim_left(k);
    char r[]="condi  ";
    trim_right(r);
    cout<<strlen(r)<<endl;
    return 0;
}