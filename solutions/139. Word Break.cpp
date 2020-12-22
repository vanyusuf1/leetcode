class Solution {
public:
    unordered_map<string,bool> h;
    int isPossible(string s,int start,int *dp){
        // base case
        if(start == s.length()) return dp[start] = 1;
        if(dp[start]!=-1) return dp[start];
        
        // recursive case
        for(int i = start+1 ; i <= s.length() ; i++){
            string word = s.substr(start,i-start);
            if(h.count(word) and isPossible(s,i,dp)){
                return dp[start] = 1;
            }
        }
        
        return dp[start] = 0;
    }
    
    bool wordBreak(string s, vector<string>& dict) {
        for(int i = 0 ; i < dict.size() ; i++)
            h.insert({dict[i],true});
        int *dp = new int[s.length()+1];
        int n = s.length()+1;
