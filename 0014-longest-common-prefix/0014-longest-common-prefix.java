class Solution {
    public String longestCommonPrefix(String[] strs) {
        Arrays.sort(strs);
        StringBuilder str = new StringBuilder();
        char[] first = strs[0].toCharArray();
        char[] last = strs[strs.length - 1].toCharArray();

        int limit = Math.min(first.length, last.length);

        for(int i = 0; i < limit; i++){
            if(first[i] != last[i])
                break;
            str.append(first[i]);                
        }
        return str.toString();
    }
}
