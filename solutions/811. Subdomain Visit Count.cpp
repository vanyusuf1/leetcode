class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        unordered_map<string, int> cnt;
        for (auto domain : cpdomains) {
            int i = domain.find(" ");
            int n = stoi(domain.substr (0, i));
            string s = domain.substr (i + 1);
            for (int i = 0; i < s.size(); ++i)
                if (s[i] == '.')
                    cnt[s.substr(i + 1)] += n;
            cnt[s] += n;
        }
        vector<string> res;
        for (auto k : cnt)
            res.push_back (to_string(k.second) + " " + k.first);
        return res;
    }
};
