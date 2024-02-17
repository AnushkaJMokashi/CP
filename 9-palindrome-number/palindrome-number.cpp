class Solution {
public:
    bool isPalindrome(int x) {
        int n=x;
    double y =0;
    while(x>0){
        y = y*10 + (x%10);
        x=x/10;
    }
    if(n==y) return true;
    return false;
        
    }
};