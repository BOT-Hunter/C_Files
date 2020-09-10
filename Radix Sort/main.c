#include<stdio.h>

// Function to find largest element
int max(int a[], int n)
{
      int max = a[0], i;
      for(i = 1; i < n; i++)
      {
	    if(max < a[i])
	    max = a[i];
      }
      return max;
}
// Function to perform sorting
void RadixSort(int a[], int n)
{
      int bucket[10][10], bucket_cnt[10];
      int i, j, k, r, NOP=0, divisor=1, lar, pass;
      lar=max(a, n);
      printf("\n The largest element is : %d\n",lar);
      while(lar > 0)
      {
	    NOP++;
	    lar=lar/10;
      }
      /*Initialize the buckets*/
      for(pass = 0; pass < NOP; pass++)
      {
	    for(i = 0; i < 10; i++)
	    {
		  bucket_cnt[i] = 0;
	    }
	    //sort the numbers according to the digit & place it into specified bucket
	    for(i = 0; i < n; i++)
	    {
		  r = (a[i] / divisor) % 10;
		  bucket[r][bucket_cnt[r]] = a[i];
		  bucket_cnt[r] = bucket_cnt[r] + 1;
	    }
	    //Collect the numbers after completed each pass
	    i = 0;
	    for(k = 0; k < 10; k++)
	    {
		  for(j = 0; j < bucket_cnt[k]; j++)
		  {
			a[i] = bucket[k][j];
			i++;
		  }
	    }
	    divisor = divisor * 10;
	    printf("\n Numbers after completing pass %d :\n",pass+1);
	    for(i = 0; i < n; i++)
		  printf("  %d",a[i]);
	    printf("\n");
      }
}
//Entry point of program
int main()
{
      int i, n, a[7]={908, 378,189, 790, 421, 787, 389};
      n=7;
      RadixSort(a,n);
      printf("\n Sorted numbers after using radix sort:\n");
      for(i = 0; i < n; i++)
	    printf("  %d",a[i]);
      printf("\n");
      return 0;
}
