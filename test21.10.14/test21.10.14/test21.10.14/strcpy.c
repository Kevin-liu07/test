//#include<stdio.h>
//#include<string.h>
//// char*strcpy(char *restrict dst,char *restrict src)
////把src的字符串拷贝到dst
////restrict表面src和dst不重叠(c99)
////返回dst
//int main()
//{
//	char src[6]="hello";
//	char dst[10];
//	strcpy(dst, src);
//	printf("%s",dst);
//	return 0;
//}
////char*strcpy(char*restrict dst,const char*restrict s2,size_t n);
////在括号里再加一位参数n，表示最多copy n个字符