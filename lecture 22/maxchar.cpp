#include <iostream>
using namespace std;

char getMax(string s) {
    int arr[26] = {0};
    
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        int number = 0;
        
        if (ch >= 'a' && ch <= 'z') {
            number = ch - 'a';
        } else if (ch >= 'A' && ch <= 'Z') { // Added an else if to make sure we're checking for uppercase
            number = ch - 'A';
        }
        
        arr[number]++;
    }

    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++) {
        if(arr[i] > maxi) { // Find the maximum occurring character
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAns = 'a' + ans;
    return finalAns; // Return the result
}

int main() {
    string s;
    cin >> s;
    cout << getMax(s) << endl;
    return 0;
}

