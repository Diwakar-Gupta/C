#include <stdio.h>
#include <string.h>

double avg(int arr[]){

    int length=sizeof(arr)/sizeof(arr[0]);
    printf("size arr=%d\n",sizeof(arr));
    printf("size=%d\n",sizeof(arr[0]));
    double sum=0.0;
    for(int i=0;i<length;i++)
        sum+=arr[i];
    printf("sum=%lf\n",sum);
    printf("length=%d\n",length);
    return sum/length;
}

int main(int argc, char **argv)
{
    
    int arr[]={1,2,67,87};
    printf("%lf",avg(arr));
    return 0;
}