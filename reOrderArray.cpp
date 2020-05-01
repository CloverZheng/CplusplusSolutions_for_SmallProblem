/*
输入一个整数数组，实现一个函数来调整该数组中数字的顺序，使得所有的奇数位于数组的前半部分，所有的偶数位于数组的后半部分，并保证奇数和奇数，偶数和偶数之间的相对位置不变。
*/
class Solution {
public:
    void reOrderArray(vector<int> &array) {
        int numOfOdd=0,temp;
        for(int i=0;i<array.size();++i){
            if(array[i]%2){
                temp=array[i];
                for(int j=i;j>numOfOdd;--j){
                     array[j]=array[j-1]; 
                }
                array[numOfOdd]=temp;
                ++numOfOdd;
            }
        }
    }
};
