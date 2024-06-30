class Solution{
  public:
    
    string longestCommonPrefix (string a[], int N)
    {
        // your code here
        if(N==1)
        {
            return a[0];
        }
        int count=INT_MAX;
        
        for(int i=1;i<N;i++)
        { 
            if(a[0][0]!=a[i][0])
            {
                count=0;
                break;
            }
            int inc=0;
            for(int j=0;j<a[0].length();j++)
           
            {
                
                if(a[0][j]==a[i][j])
                {
                    inc++;
                    
                }
                else{
                    break;
                }
            }
            count=min(count,inc);
        }
        
        if(count==INT_MAX||count==0)
        {
            return "-1";
        }
        return a[0].substr(0,count);
        
;    } 
};