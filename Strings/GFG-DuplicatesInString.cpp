#include <iostream>
#include <unordered_map>
using namespace std;

void duplicates(string &s)
{
    unordered_map<char, int> m;
    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
    }
    for (auto i : m)
    {
        if (i.second > 1)
        {
            cout << i.first << " , count : " << i.second << endl;
        }
    }
};

int main()
{
    string s = "shreeyash";
    duplicates(s);

    return 0;
}
