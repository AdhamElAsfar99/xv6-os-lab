#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[])
{
  int fd;

  if(argc != 3)
  {
    printf(2, "setpriority: need exactly 3 arguments\n");
    exit();
  }

  int i;
  int arr[argc-1];

  for(i = 1; i < argc; i++)
  {
    arr[i-1] = atoi(argv[i]);
    if (arr[i-1] < 0) 
    {
        printf(2, "setpriority: argument %d is a negative number: %d\n", i, arr[i-1]);
        exit();
    }
  }

  printf(1, "Process %d old priority: %d\n", arr[0], setpriority(arr[0], arr[1]));
  exit();
}