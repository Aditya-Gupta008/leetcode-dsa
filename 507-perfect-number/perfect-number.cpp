class Solution {
public:
    bool checkPerfectNumber(int num) {
        int c=1,sum=0;
        while(c<num){
            if(num%c==0){
                sum=sum+c;
            }
            c++;
        }
        if(sum==num){
            return true;
        }
        else {return false;}
    }
};