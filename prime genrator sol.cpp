 #include <stdio.h>
  #include <stdlib.h>
 #include <math.h>
   
  /* structure containing a data part and link part */
   struct node
   {
       long data ;
       struct node * link ;
  } ;
   
   void append ( struct node **, long ) ;
  void display ( struct node * ) ;
  
   
  int main( )
  {
     struct node *p ,*temp=NULL;
       int i=0;
     scanf("%d",&i);
      while(i>0)
       {
           long k,q, kw=2, m=0;
         if(k==3)
           {
             printf("n3n5n7");
               k=11;
          }
           if(k>3 && k<=5)
           {
              printf("n5n7");
              k=11;
           }
          if(k>5 && k<=7)
         {
              printf("n7");
               k=11;
           }
          if(k>7 && k<10)
          {
              k=11;
         }
  
  
          while(k<=q)
         {
             int sq=(int)sqrt(k);
             int b=1;
              if((k%2==0 || k%5==0))
             {
                 b=0;
             }
              else
              {
                  temp=p;
                 while(temp!=NULL && temp->data<=sq)
                  {
                     if(k%temp->data==0)
                     {
                        b=0;
                          break;
                      }
   
                    temp=temp->link;
                  }
              }
              //printf(" nk = %ld have b=%d " ,k,b);
             if(b)
                 printf("n%ld",k);
   
              k++;
         }
   // display(p);
        /* */ }
  
      return 0;
 }
   
  /* adds a node at the end of a linked list */
 void append ( struct node **q, long num )
  {
     struct node* temp;
     struct node* r ;
   
      if ( *q == NULL ) /* if the list is empty, create first node */
     {
         temp = (node*)malloc(sizeof(struct node));
          temp -> data = num ;
         temp -> link = NULL ;
          *q = temp ;
      }
     else
      {
          temp = *q ;
   
         /* go to last node */
          while ( temp -> link != NULL )
              temp = temp -> link ;
  
          /* add node at the end */
          r = (node*)malloc ( sizeof ( struct node ) ) ;
          r -> data = num ;
         r -> link = NULL ;
          temp -> link = r ;
      }
  }
   
  
  /* displays the contents of the linked list */
  void display ( struct node *q )
 {
  
  
      /* traverse the entire linked list */
     while ( q != NULL )
     {
         printf ( "n" ) ;
         printf ( "%d ", q -> data ) ;
          q = q -> link ;
   
    }
  }
