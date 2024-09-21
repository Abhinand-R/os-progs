#include<stdio.h>
#include<sys/wait.h>
#include<sys/types.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
int id=fork();
//fork();
if (id>0){

wait(NULL);
printf("\nPARENT\nparentID=%d",getpid());
}
else if(id==0){

printf("CHILD\nchildID=%d\nparentID=%d",getpid(),getppid());
}
else
printf("error");
exit(0);
printf("not exited");
return(0);
}
