#include <bits/stdc++.h>
using namespace std;

class process {
    public: 

    vector <int> mergee (vector<int>arr1,vector<int>arr2){
        vector<int> bhai ;

        int i=0,j=0;

        while(i<arr1.size() && j<arr2.size()){

            if(arr1[i]<arr2[j])
            {
                bhai.push_back(arr1[i]);
                i++;
            }

            else
            {
                bhai.push_back(arr2[j]);
                j++;
            }



        };

        if(i<arr1.size()){
            for(int k=i ; k<arr1.size(); k++){
                bhai.push_back(arr1[k]);
            }
        }

         if(j<arr2.size()){
            for(int k=j ; k<arr2.size(); k++){
                bhai.push_back(arr1[k]);
            }
        }



    }

};

int main(){

    vector <int> arr1= {1,2,4,5,6};
    vector <int> arr2= {3,7,8};
    
    process obj;

    vector <int> arr = obj.mergee(arr1,arr2);
}