class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int j=1;
        for(int i=1;i<n;i++){
            if(nums[i-1]==nums[i]) continue;
            nums[j]= nums[i];
            j++;
        }
            return j;

        }
    }; 