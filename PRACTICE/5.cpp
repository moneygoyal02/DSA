#include <bits/stdc++.h>
using namespace std;

//? FIND THE FIRST AND LAST POSITION OF WANTED ELEMENT IN SORTED ARRAY

class process{

    public:

    int Find_First_Position(vector<int> &arr , int target){

        int s=0 , e=arr.size()-1 ;
        int result=-1;

        while(s<=e){
            int mid = s + (e-s)/2;

            if(arr[mid]==target){
                result = mid; // possibly my answer
                e = mid-1; // but lets look at left more
            }

            else if(arr[mid]> target){

                e = mid - 1;

            }

            else
            {
                s=mid+1;
            }


        };

        return result;

    };

    int Find_Last_Position(vector<int> &arr , int target){

        int s=0 , e=arr.size()-1 ; 
        int result=-1;

        while(s<=e){

            int mid = s + (e-s)/2;
            
            if(arr[mid]==target){
                result = mid; // possibly my answer
                s = mid+1; // but lets look at right more
            }

            else if(arr[mid]>target){
                e = mid-1;

            }

            else
            {
                s = mid + 1;
            }
        };

        return result;

    };

    vector <int> Range (vector <int> &arr,int target){

        int l= Find_First_Position(arr,target);
        int r= Find_Last_Position(arr,target);

        return {l,r};


    }
};

int main(){

    vector <int> arr = {0,2,2,2,2,2,2,2,2,2,2,2,2,2};

    process obj;

    vector<int> ran = obj.Range(arr,2);

    cout<<"Left Most : "<<ran[0];
    cout<<endl;
    cout<<"Right Most : "<<ran[1];
}