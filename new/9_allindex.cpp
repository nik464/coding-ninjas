int allIndexes(int input[], int size, int x, int output[]) {
  

  if(size==0)
  return -1;

  int k=allIndexes(input,size+1,x,output);
  if(input[size-1]==x)
{
    output[k]=size-1;
    k++;

}

return k;


/*
   
    int allIndexes(int input[],size,x,int output[])
{
    if(size==0)
    return -1;

    int k=allIndexes(input+1,size-1,x,output)
    if(input[0]==x)
    {
        for(int i=0;i<k-1;i++)
        {
        output[i+1]=output[i]+1;
        }

        output[0]=0;
        return k+1;
    }
    else
    {
        for(int i=0;i<k-1;i++)
        {
            output[i]=output[i]+1;
        }
       return k;
    }
  
}

*/