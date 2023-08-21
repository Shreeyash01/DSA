// class Solution {
// public:
//     string convertToTitle(int columnNumber) {
//         unordered_map<int, char>dict;
//         for (int i = 1; i <= 26; ++i) {
//             dict[i] = static_cast<char>('A' + i - 1);
//         }

//         int q=columnNumber/26;
//         int r=columnNumber%26;
        
//         string alphabets="";
//         alphabets=alphabets+dict[r];
//         while(q>26){

//             // alphabets=alphabets+dict[r];

//             q=q/26;
//             r=q%26;

//             alphabets=alphabets+dict[r];
//         }

//         if(q!=0){
//             // alphabets=alphabets+dict[r];
//             alphabets=alphabets+dict[q];
//         }
//         reverse(alphabets.begin(),alphabets.end());

//         return alphabets;
//     }
// };

class Solution {
public:
    string convertToTitle(int columnNumber) {
        unordered_map<int, char> dict;
        for (int i = 1; i <= 26; ++i) {
            dict[i] = static_cast<char>('A' + i - 1);
        }

        string alphabets = "";

        while (columnNumber > 0) {
            int r = (columnNumber - 1) % 26;
            alphabets = dict[r + 1] + alphabets;
            columnNumber = (columnNumber - 1) / 26;
        }

        return alphabets;
    }
};
