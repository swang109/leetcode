//Reverse the first n - k elements, the last k elements, and then all the n elements.
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
         k = k%nums.size();
         reverse(nums.begin()+nums.size()-k,nums.end());
         reverse(nums.begin(),nums.begin()+nums.size()-k);
         reverse(nums.begin(),nums.end());
    }
};


//make a copy
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
         int n = nums.size();
         vector<int> copy(n);
         for(int i=0;i<n;i++){
             copy[i]=nums[i];
         }
         for(int i=0;i<n;i++){
             nums[(i+k)%n]=copy[i];
         }
    }
};
