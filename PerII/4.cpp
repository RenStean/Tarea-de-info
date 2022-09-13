#include < iostream >
using namespace std ;
void llenarPares ( int [ 100 ] ) ;
void llenar Impares ( int [ 100 ] ) ;
void mostrarPares ( int [ 100 ] ) ;
void mostrar Impares ( int [ 100 ] ) ;
int main ( ) {
 int numeros [ 100 ] ;
 llenarPares ( numeros ) ;
 llenar Impares ( numeros ) ;
 mostrarPares ( numeros ) ;
 mostrar Impares ( numeros ) ;
 return 0 ;
}
void llenarPares ( int numeros [ 100 ] ) {
 for ( int i = 0 ; i < 100 ; i ++ ) {
  if ( i % 2 == 0 ) { numeros [ i ] = i ; }
}
}
void llenar Impares ( int numeros [ 100 ] ) {
 for ( int i = 0 ; i < 100 ; i ++ ) {
  if ( i % 2 == 1 ) { numeros [ i ] = i ; }
}
}