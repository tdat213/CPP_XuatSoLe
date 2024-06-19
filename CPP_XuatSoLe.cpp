#include <iostream>
using namespace std;


int main()
{
    int n;
    cout << "Nhap so: ";
    cin >> n;

    for (int i = 1; i < n; i += 2) {
        cout << i << " " ;
    }
    

    //Xuat so chan
    /*for (int i = 0; i < n; i += 2) {
        cout << i << " " ;
    }*/

    return 0;
}


