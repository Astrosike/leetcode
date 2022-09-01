class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mymap;
        int length = 0, left = 0;
        for (int i = 0; i < s.size(); ++i){
            if(mymap.find(s[i]) == mymap.end()){     // s[i] not present
                mymap[s[i]] = i;
            }
            else{
                if(mymap[s[i]] >= left){
                    left = mymap[s[i]] + 1;
                    mymap[s[i]] = i;
                }
                else{
                    mymap[s[i]] = i;
                }
            }
            length = max(length, i - left + 1);
        }
        return length;
    }
};