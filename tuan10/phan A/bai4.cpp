#include<bits/stdc++.h>
using namespace std;
int* contro(){
    int t=5;
    int* ptr=&t;
    return ptr;
}
int main(){
    int* ptr=contro();
    cout<<ptr<<" "<<*ptr<<endl;
    delete ptr;
    cout<<*ptr;
}
// trong chương trình trên lỗi là khi kết thúc hàm contro() thì t bị hủy do đó ptr nó không biết trỏ về đâu nên nó đã in ra 1 địa chỉ và 1 giá trị ngẫu nhiên nên sai, còn khi delete ptr rồi thì nó đã giải phóng bộ nhớ của ptr nên lệnh cout sau là không hợp lí
