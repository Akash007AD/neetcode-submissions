class Solution {
public:
    bool isPalindrome(string s) {
        string temp = s;
        reverse(temp.begin(), temp.end());
        return s == temp;
    }
    int countSubstrings(string s) {
        int count = 0;
        for (int i = 0; i < s.size(); i++) {
            string st = "";
            for (int j = i; j < s.size(); j++) {
                st += s[j];
                if (isPalindrome(st))
                    count++;
            }
        }
        return count;
    }
};