/* Removes min element from min heap and returns it */
int MinHeap ::  extractMin()
{
    // Your code here
    if(heap_size<=0){
        return -1;
    }
    if(heap_size==1){
        heap_size--;
        return harr[0];
    }
    int temp=harr[0];
    harr[0]=harr[heap_size-1];
    heap_size--;
    MinHeapify(0);
    return temp;
    
}

/* Removes element from position x in the min heap  */
void MinHeap :: deleteKey(int i)
{
    // Your code here
    if(i>=heap_size)
    return;
    if(i<0)
    return;
    
    decreaseKey(i,INT_MIN);
    extractMin();
    
}

/* Inserts an element at position x into the min heap*/
void MinHeap ::insertKey(int k)
{
   // Your code here
   if(heap_size==capacity)
   return;
   heap_size++;
   harr[heap_size-1]=k;
   
   int i=heap_size-1;
   while(i!=0 && harr[parent(i)]>harr[i]){
       swap(harr[parent(i)],harr[i]);
       i=parent(i);
   }
}
