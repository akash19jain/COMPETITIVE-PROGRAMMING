https://www.codechef.com/PCJ2018/problems/PCJ18E/

#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        int step=1;
        int j=n-1;
        while(j > 0 && a[j-1] < a[j]) 
        --j;
        if (j == 0)
        {
        printf("0\n");
        step=0;
        //break;
        }
        if(step!=0)
        {
        int min_val = a[j], v_1 = a[j-1];
        j -= 2;
        while(j >= 0) {
        if (a[j] < min_val) {
            min_val = a[j];
        } else if (a[j] < v_1) {
            v_1 = a[j];
        }
        --j;
    }
    int count_smaller = 0;
    for(j = 0; j < n; ++j) {
        if (a[j] < v_1) ++count_smaller;
    }
    printf("%d\n",n - count_smaller);
        
    }}
}
