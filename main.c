#include <stdio.h> 
#include <random.h> 
void fuckurmem()
{
  srand(time(0));
  for(;;) {
    malloc(100);
    memcpy(rand(),rand(),1);}
}

int main()
{
  int confirm;
  printf("This program will mess with your memory and eventually crash your pc and/or corrupt your storage, are you sure? > ");
  scanf("%d",&confirm);
  if (confirm==1) fuckurmem();
}

