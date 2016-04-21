/*************************************************************************
 BinaryTreeGNodes  -  description
 -------------------
 Begin                : 21/10/2015
 Copyright            : (C) 2015 by F.Chastel
 *************************************************************************/


//---------- Interface of <BinaryTreeGNodes>'s class (file BinaryTreeG.h) -------
#ifndef BINARYTREEGNODES_H
#define BINARYTREEGNODES_H

template <typename T,typename TCompare>
struct BinaryTreeGNode{
    T* node;
    BinaryTreeGNode* rightSon;
    BinaryTreeGNode* leftSon;
    
    BinaryTreeGNode(TCompare c){
        node= new T(c);
        rightSon = NULL;
        leftSon = NULL;
    };

    ~BinaryTreeGNode( ){
        delete leftSon;
        delete rightSon;
        delete node;
    };
    
    bool operator<(const BinaryTreeGNode& nodeG) const {
        return node < nodeG.node;
    }

    bool operator>(const BinaryTreeGNode& nodeG) const {
        return node > nodeG.node;
    }

    bool operator==(const BinaryTreeGNode& nodeG) const {
        return (!(node<nodeG.node)
                && !(node>nodeG.node));
    }
};

#endif //BINARYTREEGNODES_H