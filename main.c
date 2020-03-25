#include<stdio.h>
#include<stdlib.h>



int main()
{
int i,j,n=15,s,v,r=15,a[15],frame[10],no=7,k,avail,count=0;
time_t t;
            /* Intializes random number generator */
   srand((unsigned) time(&t));
   /* initialising refrence string*/
   for( s = 0 ; s < r ; s++ ) {

       v=(rand() % 100)%10;
       a[s]=v;
       printf("%d\n",a[s]);

   }



            for(i=0;i<no;i++)
            frame[i]= -1;
                        j=0;
                        printf("ref string\t page frames\n");
            for(i=1;i<=n;i++)
                        {
                         printf("%d\t\t",a[i]);
                         avail=0;
                         for(k=0;k<no;k++)
                         if(frame[k]==a[i])
                         avail=1;
                         if (avail==0)
                          {
                           frame[j]=a[i];
                           j=(j+1)%no;
                           count++;
                           for(k=0;k<no;k++)
                           if (frame[k]>-1)
                           printf("%d\t",frame[k]);
}
                           printf("\n");
}
                        printf("Page Fault Is %d",count);
                        return 0;
}
