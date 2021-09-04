vector<int> separateNegativeAndPositive(vector<int> &nums){
    int s=0,e=nums.size()-1,k=0;
    
    while(k<=e){
        if(nums[k]>0){
            k++;
        }
        else if(nums[k]<0){
            swap(nums[s],nums[k]);
            s++;
            k++;
        }
        else k++;
    }
    return nums;
}