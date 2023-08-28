#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 2, 8, 10, 10, 12, 19};
    int x = 20;
    int n = sizeof(a) / sizeof(a[0]);

    int i=0;
    bool flag=false;
    while(i<n){
        if(a[i]==x){
            cout<<"ceil: "<<a[i]<<endl;
            cout<<"floor: "<<a[i]<<endl;
            flag=true;
            break;
        }
        else if(a[i]>x){
            cout<<"ceil: "<<a[i]<<endl;
            if(i!=0){
                cout<<"floor: "<<a[i-1]<<endl;
            }
            else{
                cout<<"floor not found "<<endl;
            }
            flag=true;
            break;
        }
        else{
            i++;
        }
    }
    if(flag==false){
        cout<<"ceil not found "<<endl;
        cout<<"floor: "<<a[n-1]<<endl;
    }

    return 0;
}
