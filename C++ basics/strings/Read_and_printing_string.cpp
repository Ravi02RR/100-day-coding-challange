// Here is an example code block that reads a 
//string from standard input and prints it to the standard output in C++:

// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     string s;
//     cout << \"Enter a string: ";
//     getline(cin, s);
//     cout << \"You entered: " << s << endl;
//     return 0;
// }

// This code declares a string s and prompts the user to enter a 
//string using the cout object and the getline function. \
//The input string is then printed to the standard output using the cout object again. 
//The getline function reads the entire line of input, including any whitespace characters,
//and stores it in the string s. 
//The using namespace std; statement is used to signify that we are using the standard library in our program.

#include <iostream>

using namespace std;

int main()
{
    char s[100];
    char s2[100];
    cout << "Enter a string: ";
    cin.getline(s, 100);

    cout << "Enter a string: ";
    cin.getline(s2, 100);
    // cin.getline(s, 100);
    cout << "You entered: " << s2 << endl;
    return 0;
}
