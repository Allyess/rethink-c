# RETHINK C

Relearn and rethink C Programming Language, including some of data structures and algorithms.

The code is licensed under the MIT license, copyright by [hutusi.com](http://hutusi.com/).

Some of the code inspired (copied) by Simon Howard's [c-algorithms](https://github.com/fragglet/c-algorithms), like ArrayList, etc. This project also reused his alloc-testing framework for memory testing.

RETHINK-C aim to build a reused codebase for C Programming Language. 

## How to build and test

* build:

```
cd build
cmake ..
make
```

* test:

```
./testmain
```

## Goals / Achievements

### Basic Data Structures

- [x] ArrayList, Stack [arraylist.h](src/arraylist.h)
- [x] LinkedList [list.h](src/list.h)
- [x] Queue [queue.h](src/queue.h)
- [x] BitMap [bitmap.h](src/bitmap.h)
- [x] Matrix [matrix.h](src/matrix.h)
- [ ] Hash Table

### Trees
- [x] Binary Search Tree [bstree.h](src/bstree.h)
- [ ] AVL Tree
- [ ] Red Black Tree
- [ ] Binary Heap

### Graphs
- [ ] Union-Find
- [ ] BFS & DFS
- [ ] Floyd
- [ ] Dijkstra
- [ ] Prim
- [ ] Kruskal

### String
- [x] BigNum integer [bignum.h](src/bignum.h)
- [ ] BigNum decimal
- [ ] KMP
- [ ] Trie Tree

### Sorting
- [x] Quick Sort [arraylist.h](src/arraylist.h)
- [x] Merge Sort [list.h](src/list.h)
