class Solution {
    public String reverseVowels(String s) {
        char[] str = s.toCharArray();
        int i = 0, j = str.length-1;
        while(i < j){
            while(!isV(str[i]) && i < j)i++;
            while(!isV(str[j]) && j > i)j--;
            char t = str[i];
            str[i] = str[j];
            str[j] = t;
            i++;j--;
        }
        return new String(str);
    }
    private boolean isV(char c){
        return (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' 
                || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U');
    }
}
