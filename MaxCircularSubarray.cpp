class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    
    int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
    // int counter=0;
 
    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        // counter++;
        // // if(counter>=size){
        // //     max_so_far=max_ending_here;
        // //     max_ending_here=0;
        // //     counter=0;
        // // }
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0){
            max_ending_here = 0;
            // counter=0;
        }
            
    }
    return max_so_far;
}

    int circularSubarraySum(int arr[], int num){
        
        // your code here
        int sum=0;
        int sum2=maxSubArraySum(arr,num);
        
        // int msum=INT_MIN;
        int count=0;
        int t=INT_MIN;
        for (int i=0;i<num;i++){
            
            t=max(arr[i],t);
            if(arr[i]<0){
                count++;
            }
            sum=sum+arr[i];
            arr[i]=-arr[i];
            
        }
        if(count==num){
            return t;
        }
        int summin=maxSubArraySum(arr,num);
        // for (int i=0;i<num;i++){
        //     ar2[num+i]=arr[i];
        // }
        // cout<<sum<<" "<<summin<<"\n";
        return max(sum2,sum+summin);
    }
};
