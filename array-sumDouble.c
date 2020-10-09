/* C program to find sum of elements using array and functions*/
#include <stdio.h>

//function to return sum of elements in an array of size n
double sum_array(double a[], int n){
    int i; 
    double sum=0.0;
//Iterate through all elements and add them to sum
    for(i=0; i<n; i++)
    {
        sum += a[i];
    }
    return sum;

}

//function to return sum of square of elements in an array of size n
double kvad_sum(double a[], int n){
    int i; 
    double sum=0.0;
//Iterate through all elements and add squared values of elements to sum
    for(i=0; i<n; i++)
    {
        sum += a[i]*a[i];
    }
    return sum;

}

void main()
{
    double a[100];
    int i, n;
    printf("Input the number of elements to be stored in the array :");
    scanf("%d",&n);
     printf("Input %d elements in the array :", n);
       for(i=0;i<n;i++)
        {
	      scanf("%lf",&a[i]);
	    }
  //Calling to both functions to get results
    printf("\nSum of all elements stored in the array is : %.2f\n\n", sum_array(a, n));
    printf("\nSum of square of all elements stored in the array is : %.2f\n\n", kvad_sum(a, n));
    return 0;
}