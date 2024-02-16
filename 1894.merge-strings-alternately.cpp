class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = "";
        int i=0;
        while(i < max(word1.length(), word2.length())){
            if(i >= word1.length() && i >= word2.length()) break;
            if(i >= word1.length()){ result += word2[i++]; continue;}
            if(i >= word2.length()){ result += word1[i++]; continue;}
            result = result + word1[i] + word2[i]; i++;
        }
        return result;
    }
};