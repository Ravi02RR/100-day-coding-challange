#include <iostream>
#include <vector>
using namespace std;

// Find the last occurrence in the array
int findlast(const vector<int>& a, int x) {
    for (int i = a.size() - 1; i >= 0; i--) {
        if (a[i] == x) {
            return i;
        }
    }
    return -1;  // Return -1 if x is not found in the vector
}

int main() {
    int x = 34;
    vector<int> a = {3, 4, 23, 34, 34, 3, 34, 34, 362, 3464};

    int lastIndex = findlast(a, x);

    if (lastIndex != -1) {
        cout << "The last occurrence of " << x << " is at index: " << lastIndex << endl;
    } else {
        cout << x << " is not found in the vector." << endl;
    }

    return 0;
}
