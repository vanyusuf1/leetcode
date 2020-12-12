class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int l=0,ans=0,product=1,n=nums.size();
        for(int r=0;r<n;r++){
            product*=nums[r];
            while(product>=k){
                product=product/nums[l];
                l++;
            }
            ans+=r-l+1;
        }
        return ans;
    }
};
