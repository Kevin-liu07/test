#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define MVNum 20
typedef struct ArcNode {//±ß
	int adjvex;
	struct ArcNode* nextarc;
}ArcNode;

typedef struct VNode {
	int data;
	ArcNode* firstarc;
}VNode, AdjList[MVNum];

typedef struct ALgraph {
	AdjList vertices;
	int v, m;
}ALgraph;

int s = 0;
void Path(ALgraph* G, ArcNode* v1, int v2, int v[]) {
	for (int i = 0; i < 7; i++) {
		if (v[i] > 1) {
			for (int j = 0; j < 7; j++) {
				v[j] = 0;
			}
			return;
		}
	}
	if (!v1)return;
	else {
		if (v1->adjvex == v2)s++;
		v[v1->adjvex - 1]++;
		Path(G, G->vertices[v1->adjvex - 1].firstarc, v2, v);
		if(!v1->nextarc){
			Path(G, v1->nextarc, v2, v);
		}
		else {
			Path(G, v1->nextarc, v2, v);
			Path(G, v1->nextarc->nextarc, v2, v);
		}
	}
}
void creategraph1(ALgraph* G) {
	int i;
	G->v = 6;
	G->m = 8;
	for (i = 0; i < 6; i++) {
		G->vertices[i].data = i + 1;
		G->vertices[i].firstarc = NULL;
	}
	for (i = 0; i < 7; i++) {
		ArcNode* p = (ArcNode*)malloc(sizeof(ArcNode));
		ArcNode* q = (ArcNode*)malloc(sizeof(ArcNode));
		ArcNode* q1 = (ArcNode*)malloc(sizeof(ArcNode));
		switch (i)
		{
		case 0:
			q->adjvex = 4; q->nextarc = NULL;
			p->adjvex = 3; p->nextarc = q;
			q1->adjvex = 2; q1->nextarc = p;
			G->vertices[0].firstarc = q1;
			break;
		case 1:
			q->adjvex = 5; q->nextarc = NULL;
			G->vertices[1].firstarc = q;
		case 2:
			q->adjvex = 5; q->nextarc = NULL;
			p->adjvex = 6; p->nextarc = q;
			G->vertices[2].firstarc = p;
			break;
		case 3:
			q->adjvex = 7; q->nextarc = NULL;
			G->vertices[3].firstarc = q;
			break;
		case 4:
			q->adjvex = 7; q->nextarc = NULL;
			G->vertices[4].firstarc = q;
			break;
		case 5:
			q->adjvex = 7; q->nextarc = NULL;
			p->adjvex = 4; p->nextarc = q;
			G->vertices[5].firstarc = p;
			break;
		case 6:
			q->adjvex = 2; q->nextarc = NULL;
			G->vertices[6].firstarc = q;
		}
	}
}
int main622()
{
	ALgraph* G = (ALgraph*)malloc(sizeof(ALgraph));
	creategraph1(G);
	char v1, v2;
	int v[7] = { 0 };
	scanf("%c %c", &v1, &v2);
	Path(G, G->vertices[v1-'a'].firstarc, v2-'a'+1, v);
	printf("%d", s);
}