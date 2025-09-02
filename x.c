#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n , m ;
    scanf("%d %d", &n, &m);
    float x , v ;
    scanf ("%f %f", &x , &v);
    int sum_1,sum_2;
    sum_1= n+(int)x;
    sum_2= m+(int)v;
    
    float dif_1 , dif_2 ;
    dif_1 = (float)n - x ;
    dif_2 = (float)m - v ;
    
    printf("%d %d \n",sum_1 , sum_2);
    printf("%.1f %.1f" , dif_1 ,dif_2);
    
    return 0;
}
