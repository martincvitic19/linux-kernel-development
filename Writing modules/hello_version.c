// SPDX-License-Identifier: GPL-2.0
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/utsname.h>

/* Add your code here */
static int __init hello_init(void)
{
    printk(KERN_INFO "Hello World. You are currently using Linux version %s\n", utsname()->release);
    return 0;
}

static void __exit hello_exit(void)
{
    printk("Goodbye Kernel!\n");
}

module_init(hello_init);
module_exit(hello_exit);

/*Meta Information*/
MODULE_DESCRIPTION("Hello world! module that prints out kernel version");
MODULE_AUTHOR("Martin Cvitic");
MODULE_LICENSE("GPL");
