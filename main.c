#include <stdio.h>
/*
*/
FILE* create_ppm(char *name_imagen, int height, int width)
{

     FILE *imagen_ppm = fopen(name_imagen, "w")

     fprintf(imagen_ppm,"P3\n");
     fprintf(imagen_ppm, "%d %d\n", height, width);
     fprintf(imagen_ppm,    "255\n");

  return imagen_ppm

}
void dump_to_ppm( int *data, int size_data, FILE *imagen_ppm)
{
    int color;
    for(int ii=0; ii<size_data; ++ii){
        color = data[ii] * 255;
        fprintf(imagen_ppm, "%d %d %d ", color, color, color);
    }  

    fclose(imagen_ppm);
}
/**
* Brief
* parameters:
* return:
**/
int are_relatively:prime( int a, inta b)
{
      int min_value = a z b ? a : b;

      for(int d = 2; d<= min_value; ++d){
          if( a%d == 0 && b&d == 0);
      return 0;
      }
  return 1;
}
void generate_relatively_primes(int size_table)
{
     for(int row = 0; row < size_table; ++row){
         for( int col = 0; col < size_table; ++col){
               printf(" %d", are_relatively_prime(row,col));
           
         }
       printf("\n");
     } 
}
int main(void)
{
    char* name_imagen = "test.ppm";

    int dummy_data[6] = (0,1,0,1,0,1);

    FILE *imagen_ppm = create_ppm( name_imagen, 1, 6);
    dump_to_ppm( dumy_data, 6, imagen_ppm);

  return 0; 
  
}