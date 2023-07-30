#include<iostream>
using namespace std;

int main()
{
    long long int n,m;
    cin>>n>>m;
    
    long long int c[n]={0};

    for(int i=0; i<m; i++){
        int a,b,k;
        cin>>a>>b>>k;
        for(int j=a-1; j<b; j++){
            c[j]=c[j]+k;
        }
    }
    long long int max=c[0];
    for(int i=0; i<n; i++){
        if(c[i]>max){
            max=c[i];
        }
    }
    cout<<max;

    return 0;
}
