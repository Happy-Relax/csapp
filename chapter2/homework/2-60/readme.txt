2.60 假设我们将一个w位的字中的字符从0（最低位）到w/8-1（最高位）编号。写出下面c函数的代码，它会返回一个无符号值，其中参数x的字节i被替换成字节b；
usigned replace_byte (unsigned x, int i, unsigned char b);
以下示例，说明了这个函数该如何工作：
replace_byte(0x12345678, 2, 0xAB) --> 0x12AB5678
replace_byte(0x12345678, 0, 0XAB) --> )x123456AB