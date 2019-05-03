static void create_error(void) {
static int __init my_error_init(void) {
        printk("error from the module\n");
        create_error();
static void __exit my_error_exit(void) {
module_init(my_error_init);
module_exit(my_error_exit);
