// Name: DIPESH PATEL
// SID:  1722408
// CCID: dipesh1

// CMPUT275, Winter2022

// Weekly Exercise 4
// Interview Problem: rivers
#include <iostream>
using namespace std;
int query(int *a, int n, int u, int v) {
  // parameters: a points to the start of the array of values a[] from
  //                the description, n is the number of rivers, and u,v
  //                are the two query values from a single query.
  // return: the river where u,v connect
  bool *visited = new bool[n + 1];  // creates the visited array makes the
  // true/false
  int j;
  bool cond = false;      // intially all the values are false

  for (int i = 0; i <= n; i++) {
      visited[i] = false;
  }
  j = u;
  while (j > 0) {
      visited[j] = true;
      j = a[j];
  }
  if (j == 0) {
      visited[0] = true;
  }
  // if the v will also goes to the same river then prints the river name
  j = v;
  while (j > 0) {
      if (visited[j]) {
          cond = true;
          break;
      }
      j = a[j];
  }
  if (j == 0 && !cond) {
    
  }
  return j;
}
int main() {
  int n, m, u, v;
  // reads the n and m
  cin >> n >> m;
  int *arr = new int[n + 1];
  // reads the arr value
  for (int i = 1; i <= n; i++) {
      cin >> arr[i];
  }
  // reads the m queries and reads the u and v values and calls the query()
  // function
  for (int i = 0; i < m; i++) {
      cin >> u >> v;
      cout << query(arr, n, u, v) << endl;
  }
  return 0;
}
