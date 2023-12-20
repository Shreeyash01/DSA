// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int ans=0;
//         int l=0;
//         vector<char>v;
//         int n=s.length();

//         int i;
//         while(i!=n){
//             v.push_back(s[i]);
//             for(int j=i+1;j<n;j++){
//                 auto it=find(v.begin(),v.end(),s[j]);
//                 if(it==v.end()){
//                     v.push_back(s[j]);
//                 }else{
//                     l=v.size();
//                     if(ans<l){
//                         ans=l;
//                     }
//                     v.clear();
//                     i=j;
//                     break;
//                 }
//             }
//         }
//         return ans;
//     }
// };


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        int n = s.length();
        vector<char> v;

        for (int i = 0; i < n; ++i) {
            auto it = find(v.begin(), v.end(), s[i]);

            if (it == v.end()) {
                v.push_back(s[i]);
            } else {
                ans = max(ans, static_cast<int>(v.size()));
                v.erase(v.begin(), it + 1);
                v.push_back(s[i]);
            }
        }

        ans = max(ans, static_cast<int>(v.size()));
        return ans;
    }
};
