class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
      
       vector<vector<int>> v;
        
        for(int i=0;i<nums.size();i++)
        {
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {  
            for(int j=i+1;j<v.size();j++)
            {    
17
18
19
20
21
22
