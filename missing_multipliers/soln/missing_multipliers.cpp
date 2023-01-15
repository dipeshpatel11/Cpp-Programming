// Name: Dipesh Patel
// SID: 1722408
// CCID: dipesh1

#include <iostream>
using namespace std;
int main(){

    // Declaring variables

    int n = 1, m = 0;
    cin >> n >> m;
    int array[n] = {}; 
    long long int left[n] = {};
    long long int right[n] = {};
    long long int result[n] = {};

    // Read the input

    for (int i = 0; i < n; i++){
        cin >> array[i];
    }

    // Solving the problem

    left[0] = 1; right[n-1] = 1;


    for (int i = 1; i < n; i++){
        left[i] = left[i-1] * array[i-1];
    }
    for (int i = n-2; i >= 0; i--){
        right[i] = right[i+1] * array[i+1];
    }
    // Output the answer

    for (int i = 0; i < n; i++){
        int start_i = i-m, end_i = i+m;

        if (start_i <= 0 && end_i >= (n-1)){
            result[i] = 0;
            continue;
        }
        (start_i < 0)? start_i = 0: start_i = start_i;
        (end_i > (n-1))? end_i = n-1: end_i = end_i;
        result[i] = left[start_i] * right[end_i];
    }

    for (int i = 0; i < n; i++){

        if (i == (n-1)){
        cout << result[i];
    }
        else {
            cout << result[i] << " ";
    }
}
    cout<<endl;
    return 0;
}
