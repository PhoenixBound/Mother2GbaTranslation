typedef unsigned char byte;

void __attribute__((naked)) cpufastset(void *source, void *dest, int mode) {}
byte* __attribute__((naked)) m2_strlookup(int *offset_table, byte *strings, int index) {}
int __attribute__((naked)) bin_to_bcd(int value, int* digit_count) {}
