class Solution {
public:
    string addBinary(string A, string B) {
        if(A=="0" and B=="0")
            return "0";
        if(A.length()<B.length()){
	       string temp=A;
	       A=B;
	       B=temp;
	   }
	   int j=A.length()-1;
	   int carry=0;
	    for(int i=B.length()-1;i>=0;i--){
	        if(carry==1){
	            if(A[j]==B[i]){
	                if(A[j]=='1'){
	                    carry=1;
	                }
	                else{
	                    carry=0;
	                }
	                A[j]='1';
	            }
	            else{
	                A[j]='0';
	                carry=1;
	            }
	        }
	        else{
	            if(A[j]==B[i]){
	                if(A[j]=='1'){
	                    carry=1;
	                }
	                else{
	                    carry=0;
	                }
	                A[j]='0';
	            }
	            else{
	                A[j]='1';
	                carry=0;
	            }
	        }
	        j--;
	    }
	    if(carry==1){
	        while(j>=0){
	            if(A[j]=='1'){
	                A[j]='0';
	            }
	            else{
	                A[j]='1';
	                carry=0;
	                break;
	            }
	            j--;
	        }
	        if(carry==1){
	            A='1'+A;
	        }
	    }
	    int i=0;
	    while(i<A.length() && A[i]=='0'){
	        i++;
	    }
	    return A.substr(i);
    }
};