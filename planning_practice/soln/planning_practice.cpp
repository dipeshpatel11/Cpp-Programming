#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){

    int n, t;
 
    cin >> n >> t;
    int *s = new int[n];
    int *e = new int[n];
 
    for (int i =0; i<((2*n)); i++) {
        if(i %2 ==0) {
            cin >> s[i/2];
        }
        else {
            cin >> e[((i-1)/2)];
        }
    }

    int max_val = s[0];
    int min_val = e[0];
 
    for (int i = 0; i<n;i++) {
        if (s[i] > max_val) {
            max_val = s[i];
        }
        if (e[i] < min_val) {
            min_val = e[i];
        }
    }
 
    int hrs, x;
    int days_need = 1;
 
    if (min_val <= max_val) {
        cout << "IMPOSSIBLE" << endl;
    }
    else {
        hrs = min_val - max_val;
        x = hrs;
        while (x<t) {
            x = x+hrs;
            days_need++;
        }
        cout << days_need << endl;
    }
    
    return 0;
}