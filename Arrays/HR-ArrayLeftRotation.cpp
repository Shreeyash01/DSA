#include<iostream>
using namespace std;

int main()
{
    int a1[2];
    for(int i=0; i<2; i++){
        cin>>a1[i];
    }
    int a2[a1[0]];
    for(int i=0; i<a1[0]; i++){
        cin>>a2[i];
    }

    for(int i=0; i<a1[1]; i++){
        int temp=a2[0];
        for(int j=0; j<a1[0]-1; j++){
            a2[j]=a2[j+1];
        }
        a2[a1[0]-1]=temp;
    }

    for(int i=0; i<a1[0]; i++){
        cout<<a2[i]<<" ";
    }



    return 0;
}
