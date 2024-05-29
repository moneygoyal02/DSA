#include <bits/stdc++.h>
// max element of array 

using namespace std;

int main() {
    int getmax(int arr[], int n);
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << getmax(arr, n);

}

int getmax(int arr[] , int n){
    int max = arr[0];

    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    };

    return max;
}