#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        int bags = (X * Y) / 100;
        cout << bags << endl;
    }

    return 0;
}
