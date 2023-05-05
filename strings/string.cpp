// In C++, a string is a sequence of characters. 
//It is represented by the std::string class, which is part of the standard library. 
//A string object can be constructed using a string literal or by copying another string object. 
//It is mutable, meaning that you can modify the individual characters in a string. 
//The string class also provides a wide range of member functions to manipulate 
//strings such as concatenation, substring, size, find, replace, and much more. Here is an example:

// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     string s1 = "Hello";
//     string s2 = " World";
//     string s3 = s1 + s2;
//     cout << s3 << endl;
//     return 0;
// }

// Output: Hello World

// we can use it in two ways

// 1.using char array
// 2.using string calss

// #include <iostream>

// using namespace std;

// int main()
// {
//     char S[10] = "Hello";
//     cout << S << endl;

// we can use empty string too.....

//     char S[] = "Hello";
//     cout << S << endl;
//     return 0;
// }

// using alphabatical order

// #include <iostream>

// using namespace std;

// int main()
// {
//     char S[] = {'h', 'e', 'l', 'l', 'o', '\0', 'p', 'p', 'p'};
//     cout << S;
//     return 0;
// }

//'\0' stops at null char

// string printing by ASCII code
// #include <iostream>

// using namespace std;

// int main()
// {
//     char S[] = {65, 66, 67, 68, '\0'};
//     cout << S << endl;
//     return 0;
// }

// output:ABCD

// using pointers

// #include <iostream>

// using namespace std;

// int main()
// {
//     char *S = "hello";
//     string s = "hello";
//     cout << S << endl;
//     return 0;
// }
