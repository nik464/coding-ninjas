int firstIndex(int input[], int size, int x) {
if(size==0)
{
    return -1;
}
if(input[0]==x)
{
    return 0;
}
int k=firstIndex(input+1,size-1,x);
if(k=-1)   
return k;
return k+1;

}