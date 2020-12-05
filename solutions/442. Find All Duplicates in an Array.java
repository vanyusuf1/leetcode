class Solution {
    public List<Integer> findDuplicates(int[] nums) {
        List<Integer> result=new ArrayList<>();
        for(int i=0; i<nums.length;i++){
            int ind=Math.abs(nums[i])-1;
            
            if(nums[ind]<0) result.add(ind + 1); 
        nums[ind]=-nums[ind];
        }
        return result;
            
            
        }
        
    }
​
