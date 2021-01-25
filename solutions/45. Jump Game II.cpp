class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size()-1;
        int curReach=0;
        int maxReach=0;
        int jumps=0;
        for(int i=0;i<n;i++){
            maxReach=max(maxReach, nums[i]+i);      
            if(i>=curReach){
                jumps++;
                curReach=maxReach;
                maxReach=0;
            }
            
        }
        return jumps;
        
    }
};
​
​
​
​
