#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int row = 1;
    while (row <= n) {
        // Print spaces
        int space = row - 1;
        while (space > 0) {
            cout << "  ";
            space = space - 1;
        }
        // Print numbers
        int col = 1;
        while (col <= n - row + 1) {
            cout << row << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}
// output
// 1 1 1 1
//   2 2 2
//     3 3
//       4