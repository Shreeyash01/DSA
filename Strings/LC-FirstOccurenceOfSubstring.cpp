class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int nI = 0;
        int hl = haystack.length();
        int nl = needle.length();
        for (int i = 0; i < hl; i++)
        {
            if (haystack[i] == needle[nI]){
                nI++;   
            }
            else{
                i = i - nI;
                nI = 0;
            }
            if (nI == nl){
                return i - nl + 1;
            }
        }
        return -1;
    }
};
