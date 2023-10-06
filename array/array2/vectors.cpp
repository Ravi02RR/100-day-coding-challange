#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(1);
    arr.push_back(2);

    
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
