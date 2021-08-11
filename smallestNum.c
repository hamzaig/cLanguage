/* Three numbers x, y, z are input through the 
   keyboard, write a program to determine the 
   smallest of the three. 
*/
main()
{
   int x,y,z;
   printf("enter value of x y and z \t");
   scanf("%d %d %d", &x, &y, &z);
   if(x<y)
   {
       if(x<z)
         printf("x is smallest \n");
       else
         printf("z is smallest \n");      
   }
   else{
         if(y<z)
            printf("y is smallest \n");    
         else 
            printf("z is smallest \n"); 
        }                
        system("pause");
}

