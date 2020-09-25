# C_N_Bit_Manipulation
int turnOffIthBit(int n, int i){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    
     int z=1<<i;
    int y=~z;
    int ans=y&n;
    return ans;
   
  
    
}
