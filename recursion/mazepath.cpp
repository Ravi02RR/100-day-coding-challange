#include<iostream>
using namespace std;
int maze(int sr ,int sc,int er,int ec){
    if (sr > er || sc > ec) return 0 ; 
    if (sr==er && sc==ec)
    {
        return 1;
    }
    
    int rightways= maze( sr , sc+1, er, ec);
    int downways= maze( sr+1 , sc, er, ec);
    int totalWays=rightways+downways;
    return totalWays;
}

int main() {
    // Your code goes here
    return 0;
}
