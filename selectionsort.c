#include <stdio.h>
void main()
{
int n, i, j, position, t,c=0;
c++;
printf("Enter number of elements\n");
c++;
scanf("%d", &n);
c++;
int array[n];	
printf("Enter %d integers\n", n);
c++;
for (i = 0; i < n; c++,i++)
{
scanf("%d", &array[i]);
c++;
}
c++;
for (i = 0; i < (n - 1); c++,i++)
{
position = i;
c++;
for (j = i + 1; j < n; j++,c++)
{
if (array[position] > array[j])
{ position = j;
c++;
}
c++;
}
c++;
if (position != i)
{
t = array[i];c++;
array[i] = array[position];c++;
array[position] = t;c++;
}
c++;
}
c++;
printf("Sorted list in ascending order:\n");
c++;
for (i = 0; i < n; c++,i++)
{
printf("%d\n", array[i]);
c++;
}
c++;
printf("time complexity=%d \n",++c);
printf("space complexity=%d",(4*6)+(4*n));
}
