/**
    M:	JaeJoon Jung <rgbi3307@nate.com>
    W:	https://www.kernel.bz
    F:	linux-modules/test/hello.c
    This program is free software; you can redistribute it and/or
    modify it under the terms of the GNU General Public License
*/
#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

int __init hello1_init(void) {
    printk("linux-modules: test/hello1.c: hello1_init().\n");
    return 0;
}

void __exit hello1_exit(void) {
    printk("linux-modules: test/hello1.c: hello1_exit().\n");
}

module_init(hello1_init);
module_exit(hello1_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("JaeJoon Jung");
MODULE_DESCRIPTION("A Hello1, World Kernel Module");
MODULE_VERSION("0.1.1");
