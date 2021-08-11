#include <linux/module.h>
#include <linux/init.h>

static int my_mod_init(void)
{
	printk("welcome to my module\nhello world\n");
	return 1;
}

static void my_mod_clean(void)
{
	printk("\ngood bye\n");
}

module_init(my_mod_init);
module_exit(my_mod_clean);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("ANURAG");
MODULE_DESCRIPTION("assignment 1 day 2 question 1");
