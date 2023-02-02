class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
        if (words[startIndex] == target)
        return 0;
        bool isTargetPresent = false;
        for(int i=0;i<words.size();i++){
            if(words[i]==target){
                isTargetPresent=true;
                break;
            }
        }
        if(isTargetPresent==false)return -1;

        int n = words.size();
        int forwardCount=0;
        for(int i=startIndex;i<2*n;i++){
            forwardCount++;
            if(words[(i + 1) % n] == target){
                // forwardCount = i;
                break;
             }
                                    
        }


    int backwardCount=0;
        for(int j=startIndex;j>-n;j--){
            backwardCount++;
            if(words[(j - 1 + n) % n] == target){
                // backwardCount = j;
                break;
            }
                     
        }

//         int a = abs(backwardCount - startIndex + 1);
//         int b = abs(forwardCount - startIndex + 1);
        return min(backwardCount,forwardCount);
    }
};