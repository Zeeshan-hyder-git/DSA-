#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int row = 1;
    while (row <= n) {
        char ch = 'A' + row - 1;
        int col = 1;
        while (col <= row) {
            cout << ch << " ";
            ch = ch + 1;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}
// output
// A
// B C
// C D E
// D E F G