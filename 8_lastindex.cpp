int LastIndex(int input[], int size, int x) {
if(size==0)
{
    return -1;
}

int k=LastIndex(input+1,size-1,x);


if(k=-1)
{
    if(input[0]=x)
    {
      return 0;
    }
     else
     return -1;

}  
return k+1;

}