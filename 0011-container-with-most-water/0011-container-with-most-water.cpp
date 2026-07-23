class Solution {
public:
    int maxArea(vector<int>& height) {
        int width,tall;
        int area,maxarea=0;
        int i=0,j=height.size()-1;
        while(i<height.size() && j>=0)
        {
            width=j-i;
            tall=min(height[i],height[j]);
            area=width * tall;
            maxarea=max(area,maxarea);
            if(height[i]>height[j])
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        return maxarea;
        
    }
};