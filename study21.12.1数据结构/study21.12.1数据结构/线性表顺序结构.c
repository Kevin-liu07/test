

//˳���Ľṹ����
#define LIST_INIT_SIZE 100
typedef struct {
	int /*ElemType*/ elem[LIST_INIT_SIZE];
	int length;//��ǰ����
}sqlist1;


//����ʽ��ӻ���
#define MAXSIZE 100		//����ʽ���ܴﵽ��󳤶�
typedef struct {		//����ʽ������Ķ���
	double p;			//ϵ��
	int e				//ָ��
}xiang;

typedef struct {		//˳�����
	xiang* elem;		//�洢�ռ�Ļ���ַ
	int length;			//����ʽ�е�ǰ��ĸ���
}sqlist2;


//ͼ����˳��洢�ṹ���Ͷ���
#define MAX_SIIZE  1000		//ͼ������󳤶�
typedef struct {			//ͼ����Ϣ����
	char no[20];			//ISBN
	char name[20];			//����
	float price;			//�۸�
}Book;
typedef struct {
	Book* elem;				//�洢�ռ����ַ
	int length;				//ͼ�����
}sqlist3;




