#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/wait.h>
#include <sys/types.h>

 int main(){
   remove("toHello");
   remove("toDir12");
   remove("hello");
   mkdir("toDir12/world",0777);
   return 0;
 }