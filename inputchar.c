/*
  A – Z    65 – 90
  a – z    97 – 122
  0 – 9    48 – 57
  special symbols  0 - 47, 58 - 64, 91 - 96, 123 - 127
*/
main()
{
    char c;
    printf("enter any key from keyboard \t");
    scanf("%c", &c);
    ((c>=65 && c<=90)? printf("Upper\n"): ((c>=97 && c<=122)?printf
         ("lower\n"):((c>=48 && c<=57)? printf("Number\n"):printf
         ("special symbol"))));
    system("pause");        
}
