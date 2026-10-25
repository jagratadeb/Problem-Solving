class Solution {
    public String longestCommonPrefix(String[] strs) {
        String result = "";
        Arrays.sort(strs);

        char[] first = strs[0].toCharArray();
        char[] last = strs[strs.length - 1].toCharArray();

        int limit = Math.min(first.length, last.length);
        for (int i = 0; i < limit; i++) {
            if (first[i] != last[i])
                break;
            result = result + first[i];
        }

        return result;
    }
}