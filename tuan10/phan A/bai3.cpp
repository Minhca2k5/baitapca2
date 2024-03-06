#include<bits/stdc++.h>
using namespace std;
int main(){
    char* a = new char[10];
    char* c = a + 3;
    for (int i = 0; i < 9; i++) a[i] = 'a'; 
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c;
    cerr << "a after deleting c:" << "-" << a << "-" << endl;
}
// ở dòng cout cuối thì nó không in vì c ko được cấp phát động bởi new do đó nó không thể giải phóng bằng delete điều này nên dòng delete c sẽ gây ra lỗi