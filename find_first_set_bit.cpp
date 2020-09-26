# C_N_Bit_Manipulation
#include<bits/stdc++.h>
int returnFirstSetBit(int n){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    
    if(n==0)
    {
        return 0;
    }
    else
    {
    int i=0;
    
    while((n&1)!=1)
    {
        n=n>>1;
        i++;
    }
    int ans=pow(2,i);
    return ans;
    }
    
}
