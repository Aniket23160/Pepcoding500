class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, int s)
    {
        // Your code here
        vector <int> ans;
        ans.push_back(-1);
        if(n==1 && s==arr[0]){
            ans.pop_back();
            ans.push_back(1);
            ans.push_back(1);
        }
        else{
        int i=0;
        int j=1;
        int sum=arr[0];
        while(j<n){
            sum=sum+arr[j];
            if(sum==s){
                ans.pop_back();
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
            if(sum<s){
                j++;
            }
            if(sum>s){
                sum=sum-arr[i]-arr[j];
                i++;
                
            }
            
        }}
        return ans;
    }
};
