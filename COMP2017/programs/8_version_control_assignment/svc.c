#include <stdio.h>


struct Commit {
    char* path/commit_id;
    char* message;
    Commit* next_nodes;
};

struct svc {
    Graph* graph; // contains all of your commits/nodes
    Commit* HEAD;
    // other information
    //list of branches
};


void *svc_init() {
    // this will initialise the struct svc, and return a pointer to it
}


void cleanup(void *helper) {
    // free all the malloc'ed memory inside of svc
    // free svc itself
}

int main() {
    printf("Hello, World!\n");
    return 0;
}


// question to ask, are we allowed to store individual files for each commit
a63bf1/COMP2017/svc.h
45faa3/COMP2017/svc.h

master = 45faa3
another_branch = a63bf1

        hashing algorithm example

filepath = "abc"
        900 + 'a' + 'b' + 'c'
        900 + 97 + 98 + 99
        1200 - 3 - 2 - 1
        1194 % 1000
        194 = > hash after filepath


contenst = "zx"
        194 + 'z' + 'x'
        430 % 200000000
        430

commit id hashing algorithm

    for change in commit.changes in increasing alphabetical order of file_name:
        if change is addition, id = id + 376591 // used svc_add on a new file
        if change is deletion, id = id + 85973 // used svc_rm on an existing file
        if change is modification, id = id + 9573681 // // used svc_add on an existing file
    for unsigned byte in change.file_name:
        id = (id * (byte % 37)) % 15485863 + 1
    return id as hexadecimal string

            convert to hexadecimal
            0x1F3








