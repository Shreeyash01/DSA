#include<iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    string arr1[a];
    for(int i=0; i<a; i++){
        cin>>arr1[i];
    }
    int b;
    cin>>b;
    string arr2[b];
    for(int j=0; j<b; j++){
        cin>>arr2[j];
    }
    for(int k=0; k<b; k++){
        int count=0;
        for(int l=0; l<a; l++){
            if(arr2[k]==arr1[l]){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
