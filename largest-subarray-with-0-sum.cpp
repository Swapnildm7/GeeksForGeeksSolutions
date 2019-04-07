int maxLen(int A[],int n)
{
  //Your code here
  int i,sum=0,maxlength=0;
  unordered_map<int,int> presum;
  for(i=0;i<n;i++){
      sum+=A[i];
      if(A[i]==0 && maxlength==0)
      maxlength=1;
      if(sum==0)
      maxlength=i+1;
      if(presum.find(sum)!=presum.end()){
          maxlength=max(maxlength,i-presum[sum]);
      }
      else{
          presum[sum]=i;
      }
  }
  return maxlength;
}
