#include <iostream>
#include<stdio.h>
#include<stdlib.h>

#define MVNum 20
typedef struct ArcNode {
    int adjvex;
    struct ArcNode* nextarc;
} ArcNode;
typedef struct VNode {
    int data;
    ArcNode* firstarc;
} VNode, AdjList[MVNum];
typedef struct ALgraph {
    AdjList vertices;
    int v, m;
} ALgraph;

int s = 0;

void DFS(ALgraph* G, ArcNode* v1, int v2) {
    if (!v1)return;
    else if (v1->adjvex == v2) {
        s = 1;
        return;
    }
    else {
        DFS(G, G->vertices[v1->adjvex - 1].firstarc, v2);
        if (v1->nextarc && !v1->nextarc->nextarc) {
            DFS(G, v1->nextarc, v2);
        }
        else if (v1->nextarc && v1->nextarc->nextarc) {
            DFS(G, v1->nextarc, v2);
            DFS(G, v1->nextarc->nextarc, v2);
        }
    }
}

int creategraph1(ALgraph* G) {
    int i;
    for (i = 0; i < 6; i++) {
        G->vertices[i].data = i + 1;
        G->vertices[i].firstarc = NULL;
    }
    for (i = 0; i < 9; i++) {
        ArcNode* p = (ArcNode*)malloc(sizeof(ArcNode));
        ArcNode* q = (ArcNode*)malloc(sizeof(ArcNode));
        ArcNode* q1 = (ArcNode*)malloc(sizeof(ArcNode));
        switch (i) {
        case 0:
            q->adjvex = 5;
            q->nextarc = NULL;
            p->adjvex = 3;
            p->nextarc = q;
            q1->adjvex = 2;
            q1->nextarc = p;
            G->vertices[0].firstarc = q1;
            break;
        case 1:
            q->adjvex = 4;
            q->nextarc = NULL;
            p->adjvex = 3;
            p->nextarc = q;
            G->vertices[1].firstarc = p;
            break;
        case 2:
            q->adjvex = 6;
            q->nextarc = NULL;
            p->adjvex = 5;
            p->nextarc = q;
            G->vertices[2].firstarc = p;
            break;
        case 3:
            q->adjvex = 6;
            q->nextarc = NULL;
            G->vertices[3].firstarc = q;
            break;
        case 4:
            q->adjvex = 7;
            q->nextarc = NULL;
            G->vertices[4].firstarc = q;
            break;
        case 5:
            q->adjvex = 8;
            q->nextarc = NULL;
            p->adjvex = 7;
            p->nextarc = q;
            G->vertices[5].firstarc = p;
            break;
        case 6:
            q->adjvex = 9;
            q->nextarc = NULL;
            G->vertices[6].firstarc = q;
            break;
        case 7:
            q->adjvex = 9;
            q->nextarc = NULL;
            G->vertices[7].firstarc = q;
        case 8:
            G->vertices[8].firstarc = NULL;
        }
    }
}

int main986() {
    ALgraph* G = (ALgraph*)malloc(sizeof(ALgraph));
    creategraph1(G);
    int v1, v2;
    int v[9] = { 0 };
    scanf("%d %d", &v1, &v2);
    DFS(G, G->vertices[v1].firstarc, v2 + 1);
    if (s == 1)printf("T");
    else printf("F");
}
