// Name: DIPESH PATEL
// SID:  1722408
// CCID: dipesh1

// CMPUT275, Winter2022

// Weekly Exercise 3
// Interview Problem: sales

#include <iostream>

#include <algorithm>

using namespace std;
void findPair_exist(int Array[], int x, int T) {
  /*
		Description:Function to find if a pair in an array with a given sum exist using sorting
		
		Arguments: Array[](int) : input of sales by user
				   x (int) : by dividing size of 1st element by size of whole array x(int) finds 
				   			 number of elements in array
				   T (int) : T is target price (sum we want)
	       Return: checks if pair exist and if it does then return "YES" else "NO"
 	*/
  sort(Array, Array + x);  // sort the array in ascending order
  // maintain two indices pointing to endpoints of the array
  int low = 0;
  int high = x - 1;

  // loop till low < high i.e 0 < (x-1)
  while (low < high) {
    // sum found
    if (Array[low] + Array[high] == T) {
      cout << "YES" << endl;
      return;
    }
    // increment `low` index if the total is less than the desired sum;
    // decrement `high` index if the total is more than the desired sum
    (Array[low] + Array[high] < T) ? low++ : high--;
  }
  // we reach here if the pair is not found
  cout << "NO" << endl;
}
int main() {
  int n, T;

  cin >> n >> T;
  int Array[n];
  for (int i = 0; i < n; ++i) {  // takes all sales as input by user
    cin >> Array[i];
  }
  int x = sizeof(Array) / sizeof(Array[0]);
  // by dividing size of 1st element by size of whole array x(int) finds
  // number of elements in array
  findPair_exist(Array, x, T);
  return 0;
}
