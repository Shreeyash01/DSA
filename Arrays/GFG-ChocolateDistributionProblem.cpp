#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> arr={12, 4, 7, 9, 2, 23, 25, 41, 30, 40, 28, 42, 30, 44, 48, 43, 50};
    sort(arr.begin(),arr.end());

    int m=7;
    int min=999;

    for(int i=0; i<arr.size()-m+1; i++){
        if(arr[i+m-1]-arr[i]<min){
            min=arr[i+m-1]-arr[i];
        }
    }
    cout<<"Minimum Difference : "<<min<<endl;
    
    return 0;
}
