int countZeros(int n) {
    static int count=0;
    if(n==0)
    {
        return 1;
    }
    if(n>1)
    {
        if(n%10==0)
        count++;
        countZeros(n/10);
    
    }

    return count;
}