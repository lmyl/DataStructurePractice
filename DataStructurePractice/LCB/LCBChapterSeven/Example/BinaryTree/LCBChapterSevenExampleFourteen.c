//
//  LCBChapterSevenExampleFourteen.c
//  DataStructurePractice
//
//  Created by ly on 2018/6/14.
//  Copyright © 2018年 LY. All rights reserved.
//

#include "LCBChapterSevenExampleFourteen.h"

BinaryTree * changedSequentialStorageToBinaryChainByRecursive(sqBTree tree , int low,int numbers) ;

BinaryTree * changedSequentialStorageToBinaryChain(sqBTree tree,int numbers)  {
    return changedSequentialStorageToBinaryChainByRecursive(tree, 1,numbers) ;
}

BinaryTree * changedSequentialStorageToBinaryChainByRecursive(sqBTree tree , int low,int numbers)  {
    if (low >= numbers || tree[low] == '#') {
        return NULL ;
    }
    BinaryTree * root = initBinaryTree() ;
    root->data = tree[low];
    root->left = changedSequentialStorageToBinaryChainByRecursive(tree, 2*low,numbers) ;
    root->right = changedSequentialStorageToBinaryChainByRecursive(tree, 2*low + 1,numbers) ;
    return root ;
}
