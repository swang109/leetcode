#include<vector>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i=0,result=nums.size(); //must be nums.size
        for(int num:nums){
            result^=num;
            result^=i;
            i++;
        }
        return result;
    }
};
// 0 1 2 3 size=4;
//[0,1,2,4]
/*
XOR (all numbers in nums array and 0, 1, ..., n)

Each number in [0, 1, ... n] have two occurrences except the missing number. So the result is the missing number. The same idea as the solution to "single number".
*/

int main(){
}
