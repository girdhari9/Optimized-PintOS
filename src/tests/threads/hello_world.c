#include <stdio.h>
#include <debug.h>

int
helloWorld (void)
{
  //debug_backtrace();
  printf ("Hello, world!");
  //exit(0);
  //printf ("After exit");
  return 0;
}