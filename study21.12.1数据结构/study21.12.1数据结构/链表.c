#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
typedef struct Sqlist 
{
 int data[10];
 int length;
 }Sqlist;
void CreateList(Sqlist * L,int a[],int n)
{
  int i=0,k=0;
  //L=(Sqlist *)malloc(sizeof(Sqlist));
  while(i<n){
  	L->data[k]=a[i];
  	k++;
	i++; 
  }
  L->length=k;
}
int main()
{
    Sqlist* L=(Sqlist*)malloc(sizeof(Sqlist));
    int a[10];
    int j;
    for (j = 0; j < 10; j++) {
        scanf("%d", &a[j]);
    }
    CreateList(L, a, 10);
    printf("%d", L->length);
    return 0;
}