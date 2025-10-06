// User function Template for Java

class Solution {
    public static String reverseString(String s) {
        // code here
        char[] arr = s.toCharArray();
        int last = arr.length - 1;
        
        for(int i = 0; i < arr.length / 2; i++){
            char temp = arr[i];
            arr[i] = arr[last];
            arr[last] = temp;
            last--;
        }
        
        return new String(arr);
    }
}