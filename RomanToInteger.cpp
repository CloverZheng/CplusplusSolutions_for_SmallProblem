/*Given a roman numeral, convert it to an integer.*/
class Solution {
public:
    int romanToInt(string s) {
        int len = s.size();
        int index = 0;
        int num=0;
        for(index = 0; index<len; ++index){
            if(s[index]=='M') num+=1000;
            else if(s[index]=='D') num+=500;
            else if(s[index]=='C') {
                if(s[index+1]=='M') {
                    num+=900;
                    ++index;
                    }
                else if(s[index+1]=='D') {
                    num+=400;
                    ++index;
                    }    
                else num+=100;
            }
            else if(s[index]=='L') num+=50;
            else if(s[index]=='X') {
                if(s[index+1]=='C') {
                    num+=90;
                    ++index;
                    }
                else if(s[index+1]=='L') {
                    num+=40;
                    ++index;
                    }    
                else num+=10;
            }
            else if(s[index]=='V') num+=5;
            else if(s[index]=='I') {
                if(s[index+1]=='X') {
                    num+=9;
                    ++index;
                    }
                else if(s[index+1]=='V') {
                    num+=4;
                    ++index;
                    }    
                else num+=1;
            }
        }
        return num;

    }
};
