#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdlib.h>

using namespace std;

int main(){
  do {
    system ("cls");
    int arreglo[15];
    int numcpy = 0;
    srand(time(0));
    for(int i = 0; i < 15; i++){
        numcpy = (1 + rand()%90);
        int numcpy2 = 0;
        while(numcpy2 < i){
            if(numcpy != arreglo[numcpy2])
                numcpy2++;
            else{
                    numcpy = (1 + rand() %90);
                    numcpy2 = 0;
                }
        }
        arreglo[i] = numcpy;
        printf("%d\n",arreglo[i]);
    }
  } while(getchar());

    return 0;
}
