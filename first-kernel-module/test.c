#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/slab.h>

static int __init test_init(void) {
  // Causes kernel panic?
  panic("hello?");
  return 0;
}

static void __exit test_exit(void) {
  printk("Goodbye World\n");
}

module_init(test_init);
module_exit(test_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Richard Jo");
MODULE_DESCRIPTION("My first kernel module!");
MODULE_VERSION("0.0");
