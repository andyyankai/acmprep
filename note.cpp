#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    vector<int> twoSum1(vector<int>& nums, int target) {
        for ( int i=0; i<nums.size();++i ) {
            for ( int j=1+i; j<nums.size();++j  ) {
                if (nums[i]+nums[j] == target && i!=j) {
                    return {i, j};
                }
            }
        }
    }
    
    int twoSum2(vector<int>& nums, int target) {
        map<int, int> m;
        for ( int i=0; i<nums.size();++i ) {
            int c = target-nums[i];
//            if(m[c]) {
 //               return {m[c], i};
  //          }
   //         m[nums[i]]=i;
   return {0, i};
        }
    }
};


int main ( void ) {
    Solution sol;
    vector<int> num = {2,7,11,15};
    vector<int> a = {};
    a = sol.twoSum2(num, 9);
    return 0;
}
