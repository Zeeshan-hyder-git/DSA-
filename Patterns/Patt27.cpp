#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int row = 1;
    while (row <= n) {
        // Print spaces
        int space = n - row;
        while (space > 0) {
            cout << "  ";
            space = space - 1;
        }
        // Print increasing numbers
        int inc = 1;
        while (inc <= row) {
            cout << inc << " ";
            inc = inc + 1;
        }
        // Print decreasing numbers
        int dec = row - 1;
        while (dec >= 1) {
            cout << dec << " ";
            dec = dec - 1;
        }
        cout << endl;
        row = row + 1;
    }
}
// output for n = 4
//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1