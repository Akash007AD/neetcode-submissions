class Solution {
public:
    int cyclic(int n){
        int sum =0;
        while(n>0){
            int digit = n%10;
            sum+= (digit *digit);
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        unordered_map<int,int> hash;
        while(n>1){
            int temp = cyclic(n);
            if(hash[temp]>=1) return false;
            else{
                hash[temp]++;
                n = temp;
            }
        }
        return true;
    }
};
