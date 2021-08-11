#include <linux/module.h>
#include <linux/init.h>
#include <linux/moduleparam.h>
#include "head.h"

static int my_add(int,int);

static int my_add(int a,int b)
{
	return (a+b);
}
EXPORT_SYMBOL_GPL(my_add);

static int my_init(void)
{
	printk("welcome to addition program module\n");
	return 0;
}

static void my_clean(void)
{
	printk("bye from add\n");
}

module_init(my_init);
module_exit(my_clean);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("ANURAG");
MODULE_DESCRIPTION("add function declaration");
