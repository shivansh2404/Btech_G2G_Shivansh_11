#include <stdio.h>
void bubble_sort(int n, int a[])
{   int i,j, temp;
    for(i=1;i<n;i++){
    for(j=0;j<n-i;j++)
    {
        if(a[j]>a[j+1])
        {
            temp= a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
         }
        }
    }
}
        int main()
        {int n,a[10],i;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        bubble_sort(n,a);
        printf("Sarted array =");
        for(i=0;i<n;i++)
        {
            printf("a[%d]=%d\n",i,a[i]);
        }
        return 0;
        }