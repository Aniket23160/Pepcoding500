class Solution{
public:	
	// Program for zig-zag conversion of array
	void zigZag(int arr[], int n) {
	    // code here
	    for (int i=0;i<n-1;i++){
	        if(i%2==0){
	            int temp=arr[i];
	            arr[i]=min(arr[i],arr[i+1]);
	            arr[i+1]=max(temp,arr[i+1]);
	        }
	        else{
	            int temp=arr[i];
	            arr[i]=max(arr[i],arr[i+1]);
	            arr[i+1]=min(temp,arr[i+1]);
	            
	        }
	        
	    }return;
	}
};
