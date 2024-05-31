#include <iostream>

using namespace std;

int main() {
    int n, i = 1;
    cout << "Enter your number: ";
    cin >> n;
    for(;i<=10;i++)
    {
        cout << n << " x " << i << " = " << i*n << endl;
    }
    return 0;
}
