class Solution {
public:
    string reverseOnlyLetters(string S) {
        stack<char> s;
        for(char i:S)
            if(isalpha(i))
                s.push(i);
        string out="";
        for(char i:S)
            if(isalpha(i))
                out+=s.top(), s.pop();
            else
                out+=i;
        return out;
    }
};
