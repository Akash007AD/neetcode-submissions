class Solution {
public:
    bool ispalindrome(string s){
        string temp = s;
        reverse(temp.begin(),temp.end());
        return temp == s;
    }
    string longestPalindrome(string s) {
        int n = s.size();
        vector<string> subs;
        for(int i =0;i<n;i++){
            string st = "";
            for(int j = i;j<n;j++){
                st+=s[j];
                subs.push_back(st);
            }
        }
        string ans = "";
        for(auto &p:subs){
            if(ispalindrome(p) && p.size()>ans.size()) ans=p;
        }
        return ans;
    }
};
