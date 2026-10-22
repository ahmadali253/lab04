#include <iostream>
using namespace std;

int main() {
    // Using for loop
    cout << "Using for loop:" << endl;
    for (int i = 1; i <= 20; i++)
        cout << i << " ";
    cout << endl;

    // Using while loop
    cout << "Using while loop:" << endl;
    int j = 1;
    while (j <= 20) {
        cout << j << " ";
        j++;
    }
    cout << endl;

    return 0;
}
