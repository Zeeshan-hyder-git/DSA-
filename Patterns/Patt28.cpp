#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int row = 1;
    while (row <= n) {
        // Print left numbers
        int num = 1;
        while (num <= n - row + 1) {
            cout << num << " ";
            num = num + 1;
        }
        // Print stars
        int stars = 1;
        while (stars <= 2 * (row - 1)) {
            cout << "* ";
            stars = stars + 1;
        }
        // Print right numbers
        int right = n - row + 1;
        while (right >= 1) {
            cout << right << " ";
            right = right - 1;
        }
        cout << endl;
        row = row + 1;
    }
}
// output
// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1