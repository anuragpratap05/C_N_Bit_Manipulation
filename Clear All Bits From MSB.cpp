# C_N_Bit_Manipulation
int clearAllBits(int n, int i){
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     */
    int m=(1<<i)-1;
    int ans= n&m;
    return ans;
}

