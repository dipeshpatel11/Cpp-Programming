// Name: Dipesh Patel
// SID:  1722408
// CCID: dipesh1
// CMPUT 275, Winter 2022
//
// Weekly Exercise 7: Divide & Conquer

#include <iostream>
#include <math.h>  // for floor
using namespace std;
typedef unsigned int uint;

uint climbing(const uint *heights, uint length, uint rest, uint limit) {

    if (length == 2 && limit == heights[length - 1]) {
        return heights[length - 1];

    } else if (length == 2 && limit != heights[length - 1] && rest > 1) {
        return heights[1] - heights[0];

    } else {
        uint mid, low = 0, high = length - 1, time = 0, NoOfRests = 0;

        
        while (low < high) {   // run the binary search algorithm

            mid = (low + high) / 2;
            // gets no. of rests required for the current burst
            NoOfRests = floor(heights[length - 1] / heights[mid]);

            // Add rest period to last height to get total time for current burst
            time = heights[length - 1] + (NoOfRests * rest);

            // If total time with current burst is more than the limit,
            if (time > limit) {
                low = mid + 1;

            } else if (time <= limit) {  // if total time with current burst is in the limit,

                high = mid;
            }
        }

        return heights[high];  // Return burst
    }
}

int main() {
    
    uint n, rest, limit;
    cin >> n >> rest >> limit;  // take inputs

    const uint N = n;
    uint heights[N];

    for (uint i = 0; i < n; i++)
        cin >> heights[i];

    cout <<  climbing(heights, n, rest, limit) << endl;

    return 0;
}
