class Solution {
public:
    bool is_vowel(char c){
        return  c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
    string reverseVowels(string s) {
        int start = 0;
        int end = s.length()-1;
        while(start < end){
            if(!is_vowel(s[start])){start++; continue;}
            if(!is_vowel(s[end])){end--; continue;}
            swap(s[start++], s[end--]);
        }
        return s;
    }
};