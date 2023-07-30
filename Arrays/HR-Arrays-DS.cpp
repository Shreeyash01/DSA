#include<iostream>
#include<vector>
using namespace std;

vector<int> reverseArray(vector<int> a) {
    vector<int> b;
    for(int i=a.size(); i>0; i--){
        b.push_back(a[i-1]);
    }
    return b;
} 

int main(){
    int size;
    cin >> size;
    
    vector<int> arr(size);
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    vector<int> reversedArr = reverseArray(arr);

    for (int i = 0; i < reversedArr.size(); i++) {
        cout << reversedArr[i] << " ";
    }
    
    return 0;
}
