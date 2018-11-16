class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {        
        int n = nums.size();        
        for(int i=0; i<n; i++) {            
            int curElement = nums[i];            
            if((curElement == i+1) || (curElement <= 0) || (curElement > n)) continue;              
            swap(nums[i], nums[curElement-1]);            
            if(nums[i] != nums[curElement-1]) i--;             
        }
        for(int i=0; i<n; i++) if(nums[i] != i+1) return i+1;        
        return n+1;        
    }
};
