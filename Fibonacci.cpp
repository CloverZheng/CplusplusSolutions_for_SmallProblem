class Solution {
public:
    int last_1=1,last_2=0,result=0;
    int Fibonacci(int n) {
        if(n==0) return result;
        else {
            result=last_1+last_2;
            last_1=last_2;
            last_2=result;
        }
        Fibonacci(--n);
        return result;
    }
};
