#include <bits/stdc++.h>
//? PASSING VECTOR AND RETURNING VECCTOR
using namespace std;

class process{

    public: 

    int getmax(vector <int> arry){
        int max = arry[0];

        for (int i=0 ; i<arry.size() ; i++){
            if(max<arry[i]){
                max= arry[i];

            };
        }

        return max;
    };

    vector<int> getevenarr(vector<int>array)
    {
        vector<int> bhai;
        for(int i=0; i<array.size() ; i++){

            if(array[i]%2 == 0){
                bhai.push_back(array[i]);
            }


        }

        return bhai;
    };

    void show(vector <int> arr){
        for(int i=0 ; i<arr.size(); i++){
            cout << arr[i]<<" ";
        }
    }




};

int main(){

    vector<int> arr= {1,2,43,3,2,45,5};
    
    process obj;

    int max = obj.getmax(arr);

    cout<<max;
    cout<<endl;

    vector <int> arry = obj.getevenarr(arr);
    obj.show(arry);







}