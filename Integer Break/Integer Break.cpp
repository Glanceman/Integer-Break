// Integer Break.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
using namespace std;


int integerBreak(int n) {
    vector<int> dptable(n + 1, 0);
    dptable[1] = 1;
    for (int i = 2; i < dptable.size(); i++) {
        for (int j = i - 1; j > 0; j--) {
            int front = 0;
            int back = 0;
            if (j >= dptable[j]) {
                front = j;
            }
            else {
                front = dptable[j];
            }

            if ((i - j) > dptable[i - j]) {
                back = i - j;
            }
            else {
                back = dptable[i - j];
            }
            dptable[i] = max(dptable[i], front * back);
        }
    }
    return dptable[n];
}


int main()
{
    std::cout << integerBreak(9);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
