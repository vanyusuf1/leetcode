class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0;
        int end = n - 1;
        while(start <= end){
            int mid = (start + end)/2;
            int midelem=nums[mid], left=nums[start], right = nums[end];  
            if(midelem == target){
                return mid;
            }
            if(left > midelem){
                if(target > midelem and target <= right)  start = mid + 1;
                else{
                    end = mid -1;
                }
                
            }
             else if(right < midelem){
                if(target >= left and target < midelem)  end = mid - 1;
                else{
                    start = mid + 1;
                }
                
            }
            else{
                if(target > midelem) start = mid +1;
                else{
                    end = mid -1 ;
                }
            }
        
        }
        return -1;
        
    }
};
​
