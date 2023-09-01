#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v={90, 70, 20, 80, 50};
    int k=45;
    int n=v.size();
    bool flag=false;
    int i=0;
    while(i<n-1){
        int j=i+1;
        while(j<n){
            if(abs(v[i]-v[j])==k){
                cout<<"pair found : ("<<v[i]<<","<<v[j]<<")"<<endl;
                flag=true;
                break;
            }
            j++;
        }
        if(flag){
            break;
        }
        i++;
    }
    if(!flag){
        cout<<"pair not found"<<endl;
    }

    return 0;
}

// #include <iostream>
// #include <vector>
// #include <unordered_set>
// using namespace std;

// int main() {
//     vector<int> v = {90, 70, 20, 80, 50};
//     int k = 45;
//     unordered_set<int> seen;

//     for (int num : v) {
//         int complement = num - k;
//         if (seen.count(complement) || seen.count(num + k)) {
//             cout << "Pair found: (" << complement << "," << num << ")" << endl;
//         }
//         seen.insert(num);
//     }

//     return 0;
// }
