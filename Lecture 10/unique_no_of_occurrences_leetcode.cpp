class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {


        //Method 1 :
        
        set<int>unique;
        sort(arr.begin(),arr.end());
        int count=1;
        for(int i=0;i<arr.size();i++){
            
            while(i+1<arr.size() &&  arr[i]==arr[i+1]){
                count++;
                i++;
            }
            
            if(unique.find(count)==unique.end()){
                    
                unique.insert(count);
                count=1;
            }
            else{
                return false;
            }
           
            }
        return true;




        // Method 2 :

       
        // set<int>unique;

        // for(int i=0;i<arr.size();i++){
        //     if(arr[i]==INT_MIN){
        //         continue;
        //     }
        //     int count=1;
        //     for(int j=i+1;j<arr.size();j++){
        //         if(arr[i]==arr[j]){
        //             count++;
        //             arr[j]=INT_MIN;
        //         }
        //     }
        //     if(unique.find(count)==unique.end()){
        //         unique.insert(count);

        //     }
        //     else{
        //         return false;
        //     }

        // }
        // return true;


        }
};