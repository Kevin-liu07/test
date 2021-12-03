

//顺序表的结构类型
#define LIST_INIT_SIZE 100
typedef struct {
	int /*ElemType*/ elem[LIST_INIT_SIZE];
	int length;//当前长度
}sqlist1;


//多项式相加化简
#define MAXSIZE 100		//多项式可能达到最大长度
typedef struct {		//多项式非零项的定义
	double p;			//系数
	int e				//指数
}xiang;

typedef struct {		//顺序表定义
	xiang* elem;		//存储空间的基地址
	int length;			//多项式中当前项的个数
}sqlist2;


//图书表的顺序存储结构类型定义
#define MAX_SIIZE  1000		//图书表的最大长度
typedef struct {			//图书信息定义
	char no[20];			//ISBN
	char name[20];			//名字
	float price;			//价格
}Book;
typedef struct {
	Book* elem;				//存储空间基地址
	int length;				//图书个数
}sqlist3;




