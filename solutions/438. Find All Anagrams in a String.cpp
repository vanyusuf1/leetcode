class Solution {
public:
    bool compare(int *fs,int *fp){
        for(int i=0;i<26;i++){
        if(fs[i]!=fp[i]) return false;
        }
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        if(p.length()>s.length()){
            return ans;
        }
        int fs[26]={0};
        int fp[26]={0};
        
        for(int i = 0; i<p.length();i++){
            int indx=p[i]-'a';
            fp[indx]++;
        }
        for(int i=0;i<s.length();i++){
            fs[s[i]-'a']++;
            if(i>=p.length()){
                fs[s[i-p.length()]-'a']--;
            }
            if(compare(fs,fp)){
                ans.push_back(i-p.length()+1);
            }
        }
        return ans;
    }
};
