class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<nums.size()-2;i++){
            if(i>0&&nums[i]==nums[i-1]){
                continue;
            }
            int sum=(-1)*nums[i];
            int j=i+1;
            int k=nums.size()-1;
            while(j<k){
                int s=nums[j]+nums[k];
                if(s==sum){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j<nums.size()-1&&nums[j]==nums[j-1]){
                        j++;

                    }
                    while(k>=0&&nums[k]==nums[k+1]){
                        k--;
                    }
                    }
                   else if(s>sum){
                    k--;
                   }
                   else{
                    j++;
                   }

                }

            }
              return ans;
        }
      
        
    
};