class Solution {
    public boolean isPalindrome(int x) {
        
        if (x < 0) return false;
        
        int number = x;
        long result = 0;
        
        while (Math.abs(number) > 0) {
            result = result * 10 + (number % 10);
            number = number / 10;
        }
        
        return result == x;
    }
}
