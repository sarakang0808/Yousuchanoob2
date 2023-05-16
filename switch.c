#include <stdio.h>
main(){
  int x;
  printf("1: apples 2: pineapples 3: peaches 4: mangoes 5: nah don't care for fruits\n");
  scanf("%d", &x);
  switch(x) {
    case 1:
    printf("so you like apples!");
    break;
    case 2:
  printf("you know the golden ones? so good lol");
    break;
    case 3:
  printf("of course you like peaches!");
    break;
    case 4:
  printf("yay i like them too!");
    break;

default :
  printf("eew weirdo you psychopath what do you like then, broccoli?");
  
}
}
    