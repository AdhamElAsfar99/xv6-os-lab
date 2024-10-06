#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"



int main(int argc, char *argv[])
{
    int cpuid = getcpu();
    printf("The CPU ID: %d", cpuid);
    exit();
}
