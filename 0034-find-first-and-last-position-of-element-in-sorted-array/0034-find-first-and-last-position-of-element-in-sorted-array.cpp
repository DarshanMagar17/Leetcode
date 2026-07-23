class Solution {
public:
    

        int lb(vector<int> n1,int target1)
        {
            int low=0,high=n1.size()-1,mid;
            while(low<=high)
            {
                mid=(low+high)/2;
                if(n1[mid]==target1)
                {
                    
                    high=mid-1;
                }
                else if(n1[mid]>target1)
                {
                    high=mid-1;
                }
                else
                {
                    low=mid+1;
                }
            }
            if(low>=0 && low<n1.size() && n1[low]==target1)
            {
                return low;
            }
            else
            {
                return -1;
            }
        }

        int up(vector<int> n2,int target2)
        {
            int low=0,high=n2.size()-1,mid;
            while(low<=high)
            {
                mid=(low+high)/2;
                if(n2[mid]==target2)
                {
        
                    low=mid+1;
                }
                else if(n2[mid]>target2)
                {
                    high=mid-1;
                }
                else
                {
                    low=mid+1;
                }
            }
            if(high>=0 && high<n2.size() && n2[high]==target2)
            {
                return high;
            }
            else
            {
                return -1;
            }   
        }

        vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()!=0)
        {
            int s=lb(nums,target);
            int r=up(nums,target);
            return {s,r};
        }
        else
        {
            return {-1,-1};
        }
    }
        
        
    
};