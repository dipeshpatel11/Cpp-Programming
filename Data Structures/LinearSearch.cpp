#include <iostream>
#include <vector>
#include "math.h"
using namespace std;

int search(vector<int> arr, int x)
{
    int i = 0;
    long count = arr.size();
    while (i < count)
    {
        if (arr[i] == x)
            return i;
        i++;
    }
    return -1;
}

int main()
{
    vector<int> items = {2, 3, 5, 7, 11, 13, 17};

    cout << search(items, 1) << "\n";
    // print -1
    cout << search(items, 7) << "\n";
    // print 3
    cout << search(items, 19) << "\n";
    // print -1

    // *** simplified speed test ***

    items = vector<int>(10000000, 0);
    for (int i = 0; i < items.size(); i++)
    {
        items[i] = i;
    }
    int count = 100;

    time_t start = time(0);

    for (int i = 0; i < count; i++)
    {
        search(items, 7777777);
    }

    long seconds = time(0) - start;

    cout << seconds;
    // about 18 seconds

    return 0;
}