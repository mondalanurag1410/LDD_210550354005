#include <linux/module.h>
#include <linux/init.h>
#include <linux/moduleparam.h>
#include "head.h"

static int a = 20;
static int b = 10;

static int avg_init(void)
{
	int avg;
	printk("welcome to average\n");
	avg = my_add(a,b)/2;
	printk("the average of %d and %d is %d\n",a,b,avg);
	return 0;
}

static void avg_exit(void)
{
	printk("bye from avg\n");
}

module_init(avg_init);
module_exit(avg_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("ANURAG");
MODULE_DESCRIPTION("simple average module");
