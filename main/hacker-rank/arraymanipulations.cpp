long arrayManipulation(int n, vector<vector<int>> queries) {
vector<long>arr(n+1,0 );
    
     for(auto &it:queries)
     {
          int a=it[0];
     int b=it[1];
     int k=it[2];
   
    arr[a]+=k;
    if(b+1<=arr.size()-1)
    {
        arr[b+1]-=k;
    }
    
     }
     long curr=0,maxi=0;
     for(auto i:arr)
     {
         curr+=i;
         maxi=max(curr,maxi);
     }
     return maxi;
     
}
