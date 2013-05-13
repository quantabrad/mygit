#include<stdio>

int show(int dim)
{
    int i=0;
    for(i=0;i<dim;i++){
        for(j=0;j<dim;j++){
            printf("%d\t",j);
        }
        printf("\n");
    }
}
