#include <bits/stdc++.h>

using namespace std;

//? ROTATE ELEMENTS WITHIN CLASS

class process {

    public:

    void reverse (vector < int> &arr,int start , int end){

        while(start<end){

            swap(arr[start],arr[end]);
            start++;
            end--;

        }

    };

    void Rotate(vector<int> &arr , int k){

        int n=arr.size();
            k=k%n;

        reverse(arr,0,n-k-1);
        reverse(arr,n-k,n-1);
        reverse(arr,0,n-1);
        show(arr);



    }

    void show(vector<int> &arr){

        for(int i=0; i<arr.size();i++){
            cout<<arr[i]<<" ";
        }
    }
};

int main(){

    process obj;

    vector <int> ary = {1,2,3,4,5,6,7,8};

    

    obj.Rotate(ary,4);
}



