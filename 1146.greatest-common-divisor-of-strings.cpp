class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        while(str1 != str2){
            int i=0;
            while(i < min(str1.length(), str2.length()) && str1[i] == str2[i]){
                i++;
            }
            if(i != str1.length() && i != str2.length()) return "";

            if(str1.length() < str2.length()){
                str2 = str2.substr(i);
                continue;
            }
            if(str1.length() > str2.length()) str1 = str1.substr(i);
        }

        return str1;
    }
};