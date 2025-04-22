class Solution {
public:
    int reverse(int x) {
       // int ans=0;
       long long  sum=0;
      
       
        while(x!=0)
        {
            //int digit=x%10;
            int rem=x%10;

            sum=sum*10+rem;
            x=x/10;}
            if(sum>INT_MAX  || sum<INT_MIN)
            {
            return 0;
        }
             
            return (int) sum;
        
    }
};
