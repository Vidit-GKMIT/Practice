#include<iostream>
using namespace std;

int getLargestNumber(vector<int>&arr){
    int largest = INT_MIN;
    for(int i=0; i<arr.size(); i++){
        largest = max(largest, arr[i]);
    }
    return largest;
}

int main(){
    vector<int>arr = {6,4,8,2,43,9,7,5,2,5};
    int largest = getLargestNumber(arr);
    cout << "The largest number in the array is: " << largest << endl;
    return 0;
}