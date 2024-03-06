#include <iostream>
using namespace std;

int main() {
    char arr[5];
    char var1, var2;

    for (int i = 0; i < 10; i++) {
        arr[i] = 'A' + i;
    }


    cout << "Cac gia tri doc duoc khi truy cap ra ngoai mang:" << endl;
    cout << "arr[-1]: " << arr[-1] << endl;
    cout << "arr[5]: " << arr[5] << endl;
    cout << "arr[10]: " << arr[10] << endl;
    cout << "var1: " << var1 << endl;
    cout << "var2: " << var2 << endl;


    cout << "\nHau qua cua ghi tran:" << endl;
    arr[-1] = 'X';
    cout << "arr[-1] sau khi ghi tran: " << arr[-1] << endl;
    cout << "var1 sau khi ghi tran: " << var1 << endl;
    cout << "var2 sau khi ghi tran: " << var2 << endl;


    char arr2D[3][4];


    for (int i = 0; i < 6; i++) {
        arr2D[0][i] = 'A' + i;
    }


    cout << "\nMang hai chieu sau khi ghi tran:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr2D[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
