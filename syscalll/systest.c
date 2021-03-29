#include <unistd.h>
#include <stdio.h>
#define __NR_mytestcall 398
int main() {
int ret;
ret=syscall(__NR_mytestcall);
if(ret<0)
perror("mytestcall");
return 0;
}
