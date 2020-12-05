class Solution {
    public boolean isAnagram(String s, String t) {
        int letters[]=new int[26];
            char[] arr1= s.toCharArray();
            char[] arr2= t.toCharArray();
        for(int i=0;i<arr1.length;i++){
            letters[arr1[i]-'a']++;
            
        }
        for(int i=0;i<arr2.length;i++){
            letters[arr2[i]-'a']--;  
    
        }
        for(int letter : letters){
            if(letter!=0){
                return false;   }
            
        }
        return true;
    }
}
