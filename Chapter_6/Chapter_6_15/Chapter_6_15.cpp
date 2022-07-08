#include <iostream>
using namespace std;

int main()
{

    const int NUM_ROWS = 3;
    const int NUM_COLS = 4;

    // 2D array of integers

    int myInts[NUM_ROWS][NUM_COLS] = {
        {34, -1, 879, 22},
        {24, 365, -101, -1},
        {-20, 40, 90, 97}};

    // iterate rows each array of integers

    for (int row = 0; row < NUM_ROWS; ++row)
    {
        for (int column = 0; column < NUM_COLS; ++column)
        {
            cout << "Integers[" << row << "][" << column << "] = " << myInts[row][column] << endl;
        }
    }

    return 0;
}