// The functions should be written in a way that array become sorted 
// in increasing order when above heapSort() is called.
// To heapify a subtree rooted with node i which is  an index in arr[]. 
// n is size of heap. This function  is used in above heapSor()
void heapify(int arr[], int n, int i)  {
      // Your Code Here
      int largest=i;
      int l=2*i+1;
      int r=2*i+2;
      
      if(l<n && arr[l] > arr[largest]){
          largest=l;
      }
      
      if(r<n && arr[r] > arr[largest]){
         largest=r;
      }
      
      if(largest!=i){
          swap(arr[i],arr[largest]);
          heapify(arr,n,largest);
      }
      
      
}

// Rearranges input array so that it becomes a max heap
void buildHeap(int arr[], int n)  { 
    // Your Code Here
    for(int i=n/2-1;i>=0;i--)
    heapify(arr,n,i);
}