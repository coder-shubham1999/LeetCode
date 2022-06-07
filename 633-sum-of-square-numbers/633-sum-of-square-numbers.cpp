class Solution {
public:
    bool judgeSquareSum(int c) {
      
      for(long long i=0;i*i<=c;i++){
        long long num=c-i*i;
        long long s=sqrt(num);
        if(num==s*s)return true;
      }
      
      return false;
        
    }
};