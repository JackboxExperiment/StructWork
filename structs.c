#include <string.h>
#include <stdio.h>
#include<time.h>
struct Foo {char *dest;int clocker;};
char* dests[] = {"home", "work", "school", "deli", "train","store"};

//modifies the values of struct type
void modifer(struct Foo* x, char* s,int t){
  x->dest = s;
  x->clocker = t;
}
//prints out variables of struct types
int printer(struct Foo x){
  printf("  Destination: %s\n",x.dest);
  printf("  Travel Time: %d\n",x.clocker);
  return 0;
}
//returns an example of struct and the returns different structs every time
int rando(){
  struct Foo A;
  char* randdest = dests[rand()%6];
  int randtime = rand() % 1000;
  modifer(&A, randdest, randtime);
  printer(A);
  return 0;
}

//testing the functions
int main(){  printf("Testing rando(): \n");
  rando();
  printf("Testing rando(): \n");
  rando();
  printf("Testing rando(): \n");
  rando();
  printf("Testing rando(): \n");
  rando();
  printf("Modifier and Printer functions on struct Foo B: \n");
  struct Foo B;
  modifer(&B, "Battery Park", 102);
  printer(B);

}
