#include "sys_get_proc_info.h"
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>

long sys_get_proc_info(pid_t pid, struct procinfos *info){
	//TODO
	long syscall_value;
	syscall_value = syscall(439,pid,info);
	return syscall_value;
}


