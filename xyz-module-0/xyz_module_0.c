#include <linux/init.h>
#include <linux/module.h>

int xyz_module_0_init(void)
{
    printk(KERN_ALERT "Called %s\n", __FUNCTION__);
    return 0;
}

void xyz_module_0_exit(void)
{
    printk(KERN_ALERT "Called %s\n", __FUNCTION__);
}

module_init(xyz_module_0_init);
module_exit(xyz_module_0_exit);

MODULE_DESCRIPTION("Template driver");
MODULE_LICENSE("GPL");
