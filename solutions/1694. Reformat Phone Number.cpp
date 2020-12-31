class Solution {
public:
string format(string n) {
    if (n.size() >= 4) {
        int take = n.size() > 4 ? 3 : 2;
        return n.substr(0, take) + "-" + format(n.substr(take));
    }
    return n;
}
string reformatNumber(string &n) {
    auto it = copy_if(begin(n), end(n), begin(n), [](char c){return isdigit(c);});
    return format(string(begin(n), it));
}
};
