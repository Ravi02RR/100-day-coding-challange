#include <iostream>
using namespace std;

int binarSearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = start +((end-start)/2);

    while (start < end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }

        // for right search
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start +((end-start)/2);
    }
    return -1;
}

int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};

    int evenindex = binarSearch(even, 6, 12);
    int oddindex = binarSearch(odd, 6, 16);
    cout << "the index of even is " << evenindex << endl;
    cout << "the index of odd is " << oddindex << endl;


    int arry[]={34,21,335,46,57,6474};
   

    return 0;
}



//to make it error free
//start + end) / 2

//👆  
//start +((end-start)/2)