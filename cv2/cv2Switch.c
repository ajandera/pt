#include <stdio.h>
#include <stdlib.h>

main()
{
    int number;
    int mark;
    char input[50];

    printf("Enter an Mark value....\n");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%d", &number);
  
    switch(number)
    {
        case 1:
            printf("vyborne\n");
            break;
        case 2:
            printf("velmi dobre\n");
            break;
        case 3:
            printf("dobre\n");
            break;
        case 4: 
            printf("nevyhovel\n");
            break;
        default:
            printf("nepripustna znamka %d\n", number);
            break;
    }

}