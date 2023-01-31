#include <stdio.h>
#include <stdlib.h>

int main()
{

    for (int i=1; i<=12;i++){
    printf("\n table number %d:",i);
      for (int j=0; j<=12;j++){
      printf("\n%d%d=%d",i,j,i*j);
      }
}
    return 0;

}
