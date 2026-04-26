class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size()) return false;
        
        unordered_map<char, int> freq;
        for(int i{0}; i<s.size(); i++)
        {
            freq[s[i]] += 1;
            freq[t[i]] -= 1;
        }

        for(auto& [k, v] : freq)
        {
            if(v != 0) return false; // mismatched letters
        }

        return true;
    }
};
