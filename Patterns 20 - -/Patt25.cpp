#include <iostream>
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
        // Print numbers from row to n
        int col = row;
        while (col <= n) {
            cout << col << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}
// output for n = 4
// 1 2 3 4
//   2 3 4
//     3 4
//       4