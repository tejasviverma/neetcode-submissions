class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> anagramMap;

        for(string word: strs){
            string key = word;
            sort(key.begin(), key.end());
            anagramMap[key].push_back(word);
        }

        vector<vector<string>> results;
        for(auto& entry: anagramMap){
            results.push_back(entry.second);
        }

        return results;
    }
};
