class Solution {
    public static boolean areAnagrams(String s1, String s2) {
        // code here
        if(s1.length() != s2.length()) return false;
        
        int[] fq = new int[26];
        
        for(int i = 0; i < s1.length(); i++){
            fq[s1.charAt(i) - 'a']++;
            fq[s2.charAt(i) - 'a']--;
        }
        
        for(int count : fq){
            if(count != 0) return false;
        }
        
        return true;
    }
}