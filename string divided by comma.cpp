/*
题目描述 
  对输入的字符串进行排序后输出
  输入描述:
  多个测试用例，每个测试用例一行。
  每行通过,隔开，有n个字符，n＜100
输出描述:
  对于每组用例输出一行排序后的字符串，用','隔开，无结尾空格
*/

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main(){
    vector<string> str;
    string data,temp;
    while(cin>>data){//每输入一行就处理一行
        for(int i=0;i<data.length();++i){
            if(data[i]==',') {
                str.push_back(temp);
                temp="";
            }
            else temp+=data[i];
        }
        str.push_back(temp);    //最后一个元素后面没有，
        temp="";
        
        sort(str.begin(),str.end());//排序，默认从小到大
        //输出结果
        for(int i=0;i<str.size()-1;++i) 
            cout<<str[i]<<',';
        cout<<str[str.size()-1]<<endl;//最后一个元素后面没有，
        
        //清空容器，为下次测试做准备
        str.clear();  
    }
    
    return 0;
}
