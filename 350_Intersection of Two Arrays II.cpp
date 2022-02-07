class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> intercection = {};
        
        int i = nums1.size(), j = nums2.size();
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        for(int i = 0, j = 0; i < nums1.size() && j < nums2.size(); ){
            if(nums1[i] == nums2[j]){
                intercection.push_back(nums1[i]);
                    i++;
                    j++;
            }
            
            else if (nums1[i] > nums2[j]) {
                j++;
            }
            
            else 
                i++;
        }
     

        return intercection;
                   
    }      
    
};