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
}VNode,AdjList[MVNum];

typedef struct ALgraph {
	AdjList vertices;
	int v, m;
}ALgraph;

void creategraph(ALgraph* G) {
	int i;
	G->v = 6;
	G->m = 8;
	for (i = 0; i < 6; i++) {
		G->vertices[i].data = i + 1;
		G->vertices[i].firstarc = NULL;
	}
	for (i = 0; i < 6; i++) {
		ArcNode* p = (ArcNode*)malloc(sizeof(ArcNode));
		ArcNode* q = (ArcNode*)malloc(sizeof(ArcNode));
		switch (i)
		{
		case 0:
			q->adjvex = 4; q->nextarc = NULL;
			p->adjvex = 2; p->nextarc = q;
			G->vertices[0].firstarc = p;
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
			q->adjvex = 2; q->nextarc = NULL;
			G->vertices[3].firstarc = q;
			break;
		case 4:
			q->adjvex = 4; q->nextarc = NULL;
			G->vertices[4].firstarc = q;
			break;
		case 5:
			q->adjvex = 6; q->nextarc = NULL;
			G->vertices[5].firstarc = q;
		}
	}
}
int DFS(ALgraph*G,ArcNode*v1,int v2,int v[]) {
	for (int i = 0; i < 6; i++) {
		if (v[i] > 1)return 0;
	}
	if (!v1)return;
	else if (v1->adjvex == v2)return 1;
	else {
		v[v1->adjvex-1]++;
		return DFS(G,G->vertices[v1->adjvex-1].firstarc, v2,v);
		return DFS(G, v1->nextarc, v2, v);
	}
}
int main456()
{
	ALgraph* G = (ALgraph*)malloc(sizeof(ALgraph));
	creategraph(G);
	int v1, v2;
	int v[6] = { 0 };
	scanf("%d %d", &v1, &v2);
	printf("%d", DFS(G, G->vertices[v1 - 1].firstarc, v2, v));

}