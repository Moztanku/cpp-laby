#include<stdio.h>

int main() { char* s = "int main(){char *s=%2$c%1$s%2$c;printf(s,s,34);return 0;}"; printf(s, s, 34); return 0; }