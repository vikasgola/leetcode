class Solution {
public:
    string intToRoman(int num) {
        map<int, string> ans = {
            {1, "I"},
            {4, "IV"},
            {5, "V"},
            {9, "IX"},
            {10, "X"},
            {40, "XL"},
            {50, "L"},
            {90, "XC"},
            {100, "C"},
            {400, "CD"},
            {500, "D"},
            {900, "CM"},
            {1000, "M"},
        };

        string rom = "";
        // while(num > 0){
            for (auto iter = ans.rbegin(); iter != ans.rend(); ++iter) {
                while(num-iter->first >= 0){
                    rom += iter->second;
                    num -= iter->first;
                }
            }
        // }
        return rom;
    }
};