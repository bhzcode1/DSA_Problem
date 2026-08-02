class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int Currsum = 0;
        int count= 0;
        for(int i =0 ;i<k ; i++){
            Currsum+= arr[i];

        }
        if((Currsum /k)>= threshold){
            count++;
        }
        
        for(int i =k ; i<arr.size();i++){
             Currsum+= arr[i]-arr[i-k];
            if((Currsum / k)>=threshold){
                count++;
            }
           
        }
        return count;
    }
};