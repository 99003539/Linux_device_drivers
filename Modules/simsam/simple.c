#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
int xvar=100;
void sayHello(void){}
static int __init simple_init(void)
{
  printk("Hello sai keerthi welcoe \n");
  return 0;
}
static void __exit simple_exit(void)
{
  printk("bye.....\n");
}
module_init(simple_init);
module_exit(simple_exit);
EXPORT_SYMBOL_GPL(xvar);
EXPORT_SYMBOL_GPL(sayHello);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("P SAIKEERTHI");
MODULE_DESCRIPTION("A HELLO, WORLD MODULE");

