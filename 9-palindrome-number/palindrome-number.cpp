class Solution {
public:
    bool isPalindrome(int x) {
        int original=x;
        int reverse=0;
        if(x<0){
            return false;
        }
        while(x!=0){
            int digit=x%10;
            if(reverse>INT_MAX/10 || (reverse==INT_MAX/10 && digit>7)){
                return false;
            }
            if(reverse<INT_MIN/10 || (reverse==INT_MIN/10 && digit<-8)){
                return false;
            }
            reverse=(reverse*10)+digit;
            x=x/10;
        }
        if(original==reverse){return true;}
        else {return false;}
    }
};