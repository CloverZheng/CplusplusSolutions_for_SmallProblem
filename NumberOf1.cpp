/*
输入一个整数，输出该数二进制表示中1的个数。其中负数用补码表示。
*/
class Solution {
public:
     int  NumberOf1(int n) {
         int result=0;
         //递归输出二进制函数 
         unsigned int flag=1; 
         do{
             if(n&flag) ++result;
         }while(flag<<=1);
         return result;
     }
};
