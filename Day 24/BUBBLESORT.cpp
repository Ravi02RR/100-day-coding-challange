// // 10 10  7 6 14 9
// // a>b then swap(a,b)....continuee..
// until no more swaps are needed.


#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    for(int i=1;i<n;i++){

        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }

        }
    }
}


