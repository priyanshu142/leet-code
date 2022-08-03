class Solution {
public:
    int findMin(vector<int>& nums) {
       int low=0;
      vector<int> vc;
        int mid;
        int high=nums.size()-1;
        if(low==high){
            return nums[0];
        }
        if(nums[mid]>=nums[low]&&nums[mid]<=nums[high]){
                return nums[0];
            }
        while(low<high){
            mid=(low+high)/2;
            if(high==mid){
                break;
            }
            if(low==mid){
                vc.push_back(nums[high]);
                break;
            }
            
            if(nums[mid]>nums[high]){
                low=mid;
            }
            else if(nums[low]>nums[mid]){
               vc.push_back(nums[mid]);cout<< vc.back();
                high=mid;
            }
            
            else if(nums[mid]>=nums[low]&&nums[mid]<=nums[high]){
                return nums[0];
            }
        }
        return vc.back();
    }
};