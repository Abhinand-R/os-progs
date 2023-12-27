#include<stdio.h>
#include<stdlib.h>
int mutex=1,full=0,empty,x=0,n;
int wait(int s)
{
   while(s<=0);
   return (--s);
}
int signal(int s)
{
   return(++s);
}
void producer()
{
   
   mutex=wait(mutex);
   full=signal(full);
   empty=wait(empty);
   printf("\nProduces %d",++x);
   mutex=signal(mutex);
}
void consumer()
{
   //mutex=signal(mutex);
   mutex=wait(mutex);
   full=wait(full);
   empty=signal(empty);
   printf("\nConsumes %d",x--);

   mutex=signal(mutex);
}



void main()
{
   printf("enter buffer");
   scanf("%d",&empty);
   printf("\n1.Producer\n2.Consumer\n3.Exit");
   while(1)
   {
      printf("\nEnter your choice:");
      scanf("%d",&n);
      switch(n)
      {
         case 1:
         
                if((mutex==1)&&(empty!=0))
                producer();
                else
                printf("Buffer full");
      break;
         case 2:
          if((mutex==1)&&(full!=0))
consumer();
    else
        printf("Buffer empty");
        break;
         case 3:
    printf("exited");
    exit(0);
    break;
      }
   }
}
