class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int  l = nums.size();
        int s =0 ;
        int e =l-1;
        int ans  = INT_MIN;
        sort(nums.begin(),nums.end());
        while(s<=e){
            int sum = nums[s]+nums[e];
            if(sum>=ans){
                ans=sum;
                e--;
               
            }

           
            else{
            e--;
            }
        }
        return ans;
    }
};