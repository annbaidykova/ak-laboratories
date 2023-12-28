// SPDX-License-Identifier: GPL-2-Clause
#include <hello1.h>

MODULE_AUTHOR("IO-14 Baidykova");
MODULE_DESCRIPTION("laboratory_4");
MODULE_LICENSE("Dual BSD/GPL");

static uint amount = 1;

module_param(amount, uint, 0);
MODULE_PARM_DESC(amount, "Easy amount for program\n");

static int __init init_hello(void)
{
	pr_info("deployed successfully!\n");
	print_hello(amount);
	return 0;
}

static void __exit exit_hello(void)
{
	pr_info("undeployed successfully!\n");
}

module_init(init_hello);
module_exit(exit_hello);
