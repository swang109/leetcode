#include<iostream>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        int slow = n, fast =n;
        do{
            slow = digitSquares(slow);
            fast = digitSquares(fast);
            fast = digitSquares(fast);
        }while(slow!=fast);
        if(slow==1) return true;
        else return false;
    }
    int digitSquares(int n){
        int result=0, d;
        while(n!=0){
            d = n%10;
            n=n/10;
            result+=d*d;
        }
        return result;
    }
};

int main(){
        int h =100, uh=18;
        bool happy;
        Solution solution;
        happy = solution.isHappy(h);
        cout<<"happy test result:"<<happy<<"\n";	
        cout<<"unhappy test result:"<<solution.isHappy(uh)<<"\n";	
        return 0;
};
