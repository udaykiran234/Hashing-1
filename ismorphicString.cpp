class Solution {
public:
    bool isIsomorphic(string s, string t) {
        // Base case
        if(s.empty() || t.empty()) return false;
        if(s.length() != t.length()) return false;

        std::map<char, char> sMap;
        std::map<char, char> tMap;

        for(int i=0; i < s.length(); i++) {
            // No entry yet, so add the entry
            if(sMap.find(s[i]) == sMap.end()) {
                sMap[s[i]] = t[i];
            } else {
                // Not the same character
                if(sMap[s[i]] != t[i]) return false;
            }

            // No entry yet, so add the entry
            if(tMap.find(t[i]) == tMap.end()) {
                tMap[t[i]] = s[i];
            } else {
                // Not the same character
                if(tMap[t[i]] != s[i]) return false;
            }
        }
        return true;
    }
};
