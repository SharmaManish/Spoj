# include <stdio.h> 
# include <cstdlib> 
# include <cmath> 
# define  REP ( I, a, b )  for ( I = a ; I <b ; I + + ) 
# define  rep ( I, n )  REP ( I, 0 , n )

int  min [1200000] , max [1200000] ;

int main() 
{ 
  int I, J, k, l, M, n ; 
  int  size , count = 0 ; 
  int A1, A2, B1, B2 ; 
  long  long res ; 
  double f = ( sqrt(5)+1 ) / 2 ;
  
  for ( I =1 ; ;I++ ) { 
    M = ( int ) ( I * f ) ;  if ( M> 1000000 )  break ; 
    n = M + I ; 
    max [ M ] = n ; 
  } 
  REP ( I, 1 , 1000001 )  if ( ! max [ I ] )  max [ I ] = max [ I- an ] + 1 ;

  k = an ; 
  for ( I = 1 ; ; I + + ) { 
    if ( max [ I ] > 1000001 )  break ; 
    while ( k <= max [ I ] )  min [ k ] = I, k + + ; 
  }

  scanf ( "% d" , & size ) ; 
  while ( size -- ) { 
    scanf ( "% d% d% d% d" , & A1, & A2, & B1, & B2 ) ; A1 -- ; B1 -- ; A2- - ; B2 -- ; 
    res = 0 ;

    REP ( k, A1, A2 + 1 ) { 
      I = B1 ; J = B2 ; 
      if ( I < min [ k ] ) I = min [ k ] ; 
      if ( J> max [ k ] ) J = max [ k ] ; 
      M = J-I + one ;  if ( M < 0 ) M = 0 ; 
      res + = ( B2-B1 + an ) - M ; 
    }

    printf ( "Case #% d:% lld \ n" , + + count, res ) ; 
  }
  
  return  0 ; 
}
