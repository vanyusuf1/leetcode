class Solution {
    public int myAtoi(String s) {
        long rst = 0;
        long rst_too_large = (long)Integer.MAX_VALUE + 1;
        boolean negative = false;
        boolean found_digits = false;
        for (int i=0; i<s.length(); ++i) {
            // ch: +/-, digit, '.', space, oth
            char ch = s.charAt(i);
            if (found_digits) {
                if (Character.isDigit(ch)) {
                    rst *= 10;
                    rst += ch-'0';
                    if (rst>rst_too_large) { break; }
                } else {
                    break;
                }
            } else {
                if (Character.isDigit(ch)) {
                    rst = ch-'0';
                    found_digits = true;
                } else if (ch=='-') {
                    negative = true;
                    found_digits = true;
                } else if (ch=='+') {
                    found_digits = true;
                } else if (!Character.isWhitespace(ch)) {
                    return 0;
                }
            }
        }
        if (negative) { rst = -rst; }
        if (rst<Integer.MIN_VALUE) rst = Integer.MIN_VALUE;
