//
//  LCBChapterEightKruskal.c
//  DataStructurePractice
//
//  Created by ly on 2018/7/10.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterEightKruskal.h"
#include "LCBChapterSevenUFSTree.h"

void insertSortedByEdgeWeight(Edge edges[MaxEdge],int edgesNumber) ;
void heapSortedByedgeWeight(Edge edges[MaxEdge],int edgesNumber) ;
void heapSortedByedgeWeightShift(Edge edges[MaxEdge],int low ,int up) ;

void Kruskal(MGraph graph)  {
    Edge edges[MaxEdge] ;
    int countEdge = 0 ;
    for (int i = 0; i<graph.vertexsNumbers; i++) {
        for (int j = i; j<graph.vertexsNumbers; j++) {
            if (graph.edges[i][j] != 0 && graph.edges[i][j] != INF) {
                countEdge ++ ;
                edges[countEdge-1].end = j ;
                edges[countEdge-1].start = i ;
                edges[countEdge-1].weight = graph.edges[i][j] ;
            }
        }
    }
    insertSortedByEdgeWeight(edges, countEdge) ;
    int setConnectVertex[MaxVertex] ;
    for (int i = 0; i<graph.vertexsNumbers; i++) {
        setConnectVertex[i] = i ;
    }
    int pickEdgeCount = 0 ;
    for (int j = 0; j<countEdge; j++) {
        int setFlagStart = setConnectVertex[edges[j].start] ;
        int setFlagEnd = setConnectVertex[edges[j].end] ;
        if (setFlagEnd != setFlagStart) {
            printf("%d---%d 距离%d\n",edges[j].start,edges[j].end,edges[j].weight);
            for (int k= 0; k<graph.vertexsNumbers; k++) {
                if (setConnectVertex[k] == setFlagEnd) {
                    setConnectVertex[k] = setFlagStart ;
                }
            }
            pickEdgeCount ++ ;
            if (pickEdgeCount == graph.vertexsNumbers-1) {
                break ;
            }
        }
    }
}

void insertSortedByEdgeWeight(Edge edges[MaxEdge],int edgesNumber) {
    for (int i= 1; i<edgesNumber; i++) {
        int j = i-1 ;
        Edge tempEdge = edges[i] ;
        while (j >= 0 && tempEdge.weight < edges[j].weight) {
            edges[j+1] = edges[j] ;
            j -- ;
        }
        edges[j+1] = tempEdge ;
    }
}


void KruskalFast(MGraph graph) {
    Edge edges[MaxEdge] ;
    int countEdge = 0 ;
    for (int i = 0; i<graph.vertexsNumbers; i++) {
        for (int j = i; j<graph.vertexsNumbers; j++) {
            if (graph.edges[i][j] != 0 && graph.edges[i][j] != INF) {
                countEdge ++ ;
                edges[countEdge-1].end = j ;
                edges[countEdge-1].start = i ;
                edges[countEdge-1].weight = graph.edges[i][j] ;
            }
        }
    }
    heapSortedByedgeWeight(edges, countEdge) ;
    UFSTree setConnect[Numbers] ;
    initUFSTree(setConnect) ;
    int countPickEdge = 0 ;
    for (int i= 0; i<countEdge; i++) {
        Edge tempEdge = edges[i] ;
        int setEdgeFlagStart = findInUFSTree(setConnect, tempEdge.start) ;
        int setEdgeFlagEnd = findInUFSTree(setConnect, tempEdge.end);
        if (setEdgeFlagEnd != setEdgeFlagStart) {
            printf("%d---%d 距离%d\n",tempEdge.start,tempEdge.end,tempEdge.weight) ;
            unionUFSTree(setConnect, setEdgeFlagStart, setEdgeFlagEnd) ;
            countPickEdge ++ ;
            if (countPickEdge == graph.vertexsNumbers -1) {
                break ;
            }
        }
    }
}

void heapSortedByedgeWeight(Edge edges[MaxEdge],int edgesNumber)  {
    for (int i= edgesNumber/2 - 1; i>=0; i--) {
        heapSortedByedgeWeightShift(edges, i, edgesNumber-1);
    }
    for (int i = edgesNumber-1; i>=1; i--) {
        Edge temp = edges[i] ;
        edges[i] = edges[0] ;
        edges[0] = temp ;
        heapSortedByedgeWeightShift(edges, 0, i-1) ;
    }
}

void heapSortedByedgeWeightShift(Edge edges[MaxEdge],int low ,int up) {
    int i = low ;
    int j = 2*low + 1 ;
    Edge tempEdge = edges[i] ;
    while (j <= up) {
        if (j < up && edges[j].weight < edges[j+1].weight) {
            j ++ ;
        }
        if (edges[j].weight > tempEdge.weight) {
            edges[i] = edges[j] ;
            i = j ;
            j = 2 * i + 1;
        }else{
            break ;
        }
    }
    edges[i] = tempEdge ;
}
