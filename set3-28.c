#include <stdio.h>
   #include<math.h>  
    int main()
    {
        int n,i,a[100];
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
          scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
          printf("%d  %d\n",a[i],i);
        }

      return 0;
    }

