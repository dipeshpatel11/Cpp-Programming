// NAME: Dipesh Patel
// STUDENT ID: 1722408
// CCID: dipesh1
// Weekly Exercise 1: twin_primes.cpp
// winter 2022

#include <iostream>

using namespace std;
bool isPrime(int n) {  // returns true if n is prime
  if (n == 0 || n == 1) {  // if n = 0  or 1 , returns false
    return false;
  }
  if (n == 2 || n == 3 || n == 5 || n == 7) {  // if n = 2,3,5,7 return true
    return true;
  } else {
    for (int i = 2; i < 11; i++) {  // divides n with all numbers between
      int remainder = n % i;  // 2 to 11 and checks
      if (remainder == 0) {  //  if remainder is 0 with any number
        return false;  //  and if it is then return false
      }
    }
  }

  return true;
}

void twinPrimes(int k) {  // prints the first k twin prime pairs
  for (int i = 0; k != 0; i++) {  // loop starts from i=0 and each time
    //  i will increase by 1 and it will keep looping till k = 0
    if (isPrime(i) && isPrime(i + 2)) {  // if i and i+2 is prime
      cout << i << " " << i + 2 << endl;  //  prints twin primes pair
      k -= 1;  // will decrease k by 1
    }
  }
}

int main() {
  char x;
  int y;
  cin >> x >> y;  // user input

  if (x == 'p') {
    if (isPrime(y) == true) {  // if isPrime(y)= true prints "prime"
      cout << "prime" << endl;
    } else {
      cout << "not prime" << endl;  // else prints "not prime"
    }
  } else if (x == 't') {
    twinPrimes(y);
  }
  return 0;
}
