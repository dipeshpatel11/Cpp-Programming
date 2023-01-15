// NAME: Dipesh Patel
// STUDENT ID: 1722408
// CCID: dipesh1
// Weekly Exercise 2: idols.cpp
// winter 2022

#include <iostream>

using namespace std;

/*The function reverse takes two pointers that are pointing into an array a[] 
and reverses all entries between these pointers including the entry pointed 
to by begin but not the entrypointed to by end*/

void reverse(int * begin, int * end) {
  end--;
  while (begin < end) {
  	// reversing array by swapping elements in array
    int temp = * begin;  // int temp is temperary variable
    * begin = * end;
    * end = temp;
    begin++;  // value of 1st pointer increase by 1
    end--;  // value of last pointer decrease by 1
  }
}

int main() {
  int len_arr = 0;
  int start_index = 0;
  int next_index = 0;
  int counter = 0;
  cin >> len_arr;  // taking length of array
  int Array[len_arr];  // declaring array
  // using for loop to apend all input values to array
  for (int i = 0; i < len_arr; i++) {
    cin >> Array[i];
  }

  int current_len = len_arr;

  while (true) {
    start_index = next_index;
    len_arr = current_len;
    int max = 0;

    // finds first largest element in array
    for (int i = (next_index + counter); i < len_arr; i++) {
      if (max < Array[i]) {
        max = Array[i];
      }
    }
    // to starting loops from largest element
    for (int i = (next_index + counter); i < len_arr; i++) {
      if (max == Array[i]) {
        next_index = i;
      }
    }
    len_arr = len_arr - next_index;
    int diff = current_len - len_arr;
    if (current_len - diff > 1) {
      cout << max << " ";  // prints idols
    }
    reverse(Array + (start_index + counter), Array + next_index);
    counter = 1;  // reverses the given array
    if (len_arr <= 1) {
      cout << max << endl;
      break;
    }
  }
  // using for loop to print final array
  for (int i = 0; i < current_len; i++) {
    if (i <= current_len - 2) {
      cout << Array[i] << " ";
    } else {
      cout << Array[i] << endl;
    }
  }
}
