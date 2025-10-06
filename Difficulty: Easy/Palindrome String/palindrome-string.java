class Solution {
    boolean isPalindrome(String s) {
        // code here
        
        int last = s.length() - 1;
        for(int i = 0; i < s.length() / 2;  i++){
            if(s.charAt(i) != s.charAt(last)) return false;
            last--;
        }
        return true;
        
    }
}

