//#include<stdio.h>
//#include<string.h>
//// char*strcat(char *restrict s1,const char *restrict s2)
////把s2拷贝到s1的后面
////前提是s1有足够的空间
//int main()
//{
//	char s1[]="world";
//	char s2[20]="hello ";
//	strcat(s2, s1);
//	printf("%s", s2);
//	return 0;
//}
////cahr*strcat(char*restrict s1,const char*restruct s2,size_t n);
////在函数参数中多家一位 n，表示最多在s1后面追加n个字符