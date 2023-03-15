#include <iostream>
using namespace std;

int main(){

    int arr[] = {10, 20, 30, 50, 60, 80, 110, 130, 140, 170};
    int array[] = {4,3,2,4,1,9,0,4,2,6};
    int x = 110;

    for(int i=1;i<10;i++){

        int j = i-1;
        int temp = array[i];

        while(array[j]>temp){
            array[j+1] = array[j];
            
            j--;
        }
        array[j+1]=temp;
    }
    for(int k = 0; k<10;k++){
        cout<<array[k]<<" ";
    }




return 0;
}