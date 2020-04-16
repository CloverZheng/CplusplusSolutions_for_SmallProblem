/*
一只青蛙一次可以跳上1级台阶，也可以跳上2级。
求该青蛙跳上一个n级的台阶总共有多少种跳法（先后次序不同算不同的结果）。
以下是非递归求法，用到排列组合。
*/
class Solution {
public:
    //排列组合
    int Cnm(int n, int m) {
        if (n == 0) {
            //cout << "没法跳" << endl;
            return 0;
        }else if (m == 0) {
            //cout << "跳法有1种" << endl << endl;
            return 1;
        }else {
            long long nu = 1, di = 1;
            int choose;
            if (n - m < m) choose=m;
            else choose=n-m;
            for (int j = choose+1; j <= n; ++j)
                nu = nu * j;
            //cout << "nu=" << nu << endl;
            for (int j = 2; j <= n-choose; ++j)
                di = di * j;
            //cout << "di=" << di << endl;
            //cout << "跳法有" << nu / di << "种" << endl << endl;
            return int(nu / di);
        }       
    }
    
    int jumpFloor(int number) {
        int total=0;
        for(int i=0;i<=int(number/2);++i){
            total+=Cnm(number-i,i);
        }
        return total;
    }
};
