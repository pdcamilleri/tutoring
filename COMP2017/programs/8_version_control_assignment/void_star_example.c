#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct svc {
  int number;
  char* branch;
};

void* init(int number, char* name) {
   // memory allocate space for the struct
   struct svc* svc = malloc(sizeof(struct svc));

   // fill out the struct
   svc->number = number;
   svc->branch = malloc(sizeof(strlen(name) + 1));
   strcpy(svc->branch, name);
 
   // return pointer to the struct that was malloc'ed
   return svc;
}

void update_number(void* helper, int newNumber) {
   // cast the helper parameter into a different type.
   // it is cast into the type of the struct that was returned by the init function
   struct svc* svc = (struct svc*) helper; 
   // Now the contents of the struct can be accessed directly
   svc->number = newNumber;
}

void show(void* helper) {
   // Same as above. Cast the helper into the correct type and use it like normal.
   struct svc* svc = (struct svc*) helper; 
   printf("branch: %s with number %d\n", svc->branch, svc->number);
}

int main(void) {
   printf("Creating helper...\n");
   void* helper = init(5, "mainbranch");
   show(helper);

   printf("Updating number...\n");
   update_number(helper, 99);
   show(helper);

   return 0;
}
