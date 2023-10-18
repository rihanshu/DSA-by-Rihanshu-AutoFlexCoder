class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    // Brute Force Approach : Time Complexity : O(n^3)
  //   set<vector<int>>check;
	// vector<vector<int>>ans;
	// for(int i=0;i<nums.size()-2;i++){
	// 	for(int j=i+1;j<nums.size()-1;j++){
	// 		for(int k=j+1;k<nums.size();k++){
	// 			if(nums[i]+nums[j]+nums[k]==0){
	// 				vector<int>triplet;
	// 				triplet.push_back(nums[i]);
	// 				triplet.push_back(nums[j]);
	// 				triplet.push_back(nums[k]);
	// 				sort(triplet.begin(),triplet.end()); 
	// 				// Find will return the index where element is found.
	// 				//If the element is not found it will return the index next to the last index.
	// 				//end() also returns the last index.
	// 				if(check.find(triplet)==check.end()){
	// 					ans.push_back(triplet);
	// 					check.insert(triplet);

	// 				}
	// 			}
	// 		}
	// 	}
	// }
	// return ans;

	// Method 2 : Two pointer Time Complexity O(n^2)

	vector<vector<int>>ans;
	set<vector<int>>present;
	sort(nums.begin(),nums.end());
	for(int i=0;i<nums.size()-2;i++){
		int currentSum=0-nums[i];
		int j=i+1;
		int h= nums.size()-1;
		while(j<h){
			if(nums[j]+nums[h]>currentSum){
				h--;
			}
			else if(nums[j]+nums[h]<currentSum){
				j++;
			}
			else{
				vector<int>temp;
				temp.push_back(nums[i]);
				temp.push_back(nums[j]);
				temp.push_back(nums[h]);
				//Means element not found in present set..means it is unique..
				if(present.find(temp)==present.end()){
					ans.push_back(temp);
					present.insert(temp);

				}	
				while(j<h && nums[j]==nums[j+1] ){
					j++;
				}
				j++;
				while(j<h && nums[h]==nums[h-1] ){
					h--;
				}
				h--;

			}
		}
		while(i+1<nums.size()  && nums[i]==nums[i+1]){
			i++;
		}

	}
	return ans;
  }
};