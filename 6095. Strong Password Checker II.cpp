class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        int len= password.size(),uppercase=0,lowercase=0,digit=0,special=0,valid=0;
        bool flag=false;
        
        if(len<8)
            return false;
        else if(len>=8){
            for(int i=0;i<len;i++){
                if(password[i]>='A' && password[i]<='Z')
                    uppercase++;
                if(password[i]>='a' && password[i]<='z')
                    lowercase++;
                if(password[i]>='0' && password[i]<='9')
                    digit++;
                if(password[i]=='!'||password[i]=='@'||password[i]=='#'||password[i]=='$'||password[i]=='%'||password[i]=='^'||password[i]=='&'||password[i]=='*'||password[i]=='('||password[i]==')'||password[i]=='-'||password[i]=='+')
                    special++;
                if(password[i]==password[i+1])
                    valid++;
              
            }
            if(uppercase>0&&lowercase>0&&digit>0&&special>0&&valid==0)
                flag=true;
        }
        return flag;
    }
};
