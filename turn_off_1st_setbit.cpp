# C_N_Bit_Manipulation
int turnOffFirstSetBit(int n){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    if(n==0)
        return 0;
    
    int ans;
    int y=n;
    

    int i=0;
    
    while((n&1)!=1)
    {
        n=n>>1;
        i++;
    }
     ans=1<<i;
        
    
    int z=~ans;
    int newans=y&z;
    return newans;
    
    
    
}
