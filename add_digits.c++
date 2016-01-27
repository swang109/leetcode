#include<iostream>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        return 1 + (num - 1) % 9;
    }
};

int main(){
   Solution solution;
   cout<<solution.addDigits(38)<<'\n';
}
