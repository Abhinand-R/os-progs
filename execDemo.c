#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main() {
char *args[]={"./af",NULL};
execvp(args[0],args);
printf("Ending-----");
return 0;
} 
