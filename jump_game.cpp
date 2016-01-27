#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
//calculate the max reach
    bool canJump(vector<int>& nums) {
        int reach=0;
        for(int i=0;i<nums.size()&&i<=reach;i++){  //i<=reach!!!
            reach=max(reach,i+nums[i]);
        }
        return reach>=nums.size()-1;
    }
};

int main(){
   Solution* solution = new Solution();
   vector<int>  v(4);
   //v = { 3,2,1,0,4 };
   int vv[5] = {3,2,1,0,4};
   v.assign(&vv[0],&vv[0]+5);
   cout<<"test result:"<<solution->canJump(v)<<"\n";
   
}
