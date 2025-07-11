class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN&&divisor==-1){
            return INT_MAX;
        }
        bool negative;
        if((dividend<0)!=(divisor<0)){
            negative=true;
        }
        else{
            negative=false;
        }
        unsigned long long dvd, dvs;
        if(dividend<0){
            dvd=-static_cast<long long>(dividend);
        }
        else{
            dvd=static_cast<unsigned long long>(dividend);
        }
        if(divisor<0){
            dvs=-static_cast<long long>(divisor);
        }
        else{
            dvs=static_cast<unsigned long long>(divisor);
        }
        unsigned long long result=0;
        while(dvd>=dvs) {
            unsigned long long t=dvs;
            unsigned long long m=1;
            while((t<<1)<=dvd){
                t<<=1;
                m<<=1;
            }
            dvd-=t;
            result+=m;
        }
        long long signedResult;
        if(negative){
            signedResult=-static_cast<long long>(result);
        }
        else{
            signedResult=static_cast<long long>(result);
        }
        if(signedResult>INT_MAX){
            return INT_MAX;
        }
        if(signedResult<INT_MIN){
            return INT_MIN;
        }
        return static_cast<int>(signedResult);
    }
};
