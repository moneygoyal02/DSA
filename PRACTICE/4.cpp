#include <bits/stdc++.h>
using namespace std;

//? TO FIND UNIQUE ELEMENT 


// The time complexity of the given code is O(n) where n is the number of elements in the input array.
//  This is because the code iterates through the array once to calculate the XOR of all elements.

// The space complexity is O(1) because the code uses a constant amount of extra space 
// regardless of the size of the input array.

class process {

    public:

    void find(vector<int>&arr){
        int x=0;

        for(int i=0 ; i<arr.size();i++){

            x=x^arr[i];
        }

        cout<<"Unique Number : "<<" "<<x;
    }
};


int main(){

    vector<int> arr = {3,4,4,5,3,3,3,6,6};

    process obj;

    obj.find(arr);

}