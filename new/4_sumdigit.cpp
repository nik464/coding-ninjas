int sumOfDigits(int n) {

static int sum=0;
if(n==0)
return 0;

if(n>0)
{
int count =n%10;
sum=sum+count;
sumOfDigits(n/10);

}

return sum;
}