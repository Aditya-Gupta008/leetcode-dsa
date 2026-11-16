class Solution {
public:
    int reverse(int x) {
        int reversenumber=0;
        while(x!=0){
            int digit=x%10;
            if(reversenumber>INT_MAX/10||(reversenumber==INT_MAX/10 && digit>7)){return 0;}
            if(reversenumber<INT_MIN/10||(reversenumber==INT_MIN/10 && digit<-8)){return 0;}
            reversenumber=(reversenumber*10)+digit;
            x=x/10;
        }
        return reversenumber;
    }
};