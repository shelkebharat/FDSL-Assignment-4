#include <stdio.h>

int main() 
{
 int n, i, j, temp;
 int a[10];
    
printf("Enter size of array: ");
scanf("%d", &n);
    
printf("Enter array elements:\n");
for (i = 0; i < n; i++) 
{
 scanf("%d", &a[i]);
}

for (i = 0; i < n-1; i++) 
{
    for (j = i+1; j < n; j++)
     {
       if (a[i] > a[j]) 
       {
           temp = a[i];
           a[i] = a[j];
           a[j] = temp;
        }
     }
}
    
printf("The sorted elements are:\n");
 for (i = 0; i < n; i++) 
 {
      printf("%d\n", a[i]);
 }

 return 0;
}
