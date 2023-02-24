#include<stdio.h>
int main()
{
    char sen[2000];
    // scanf("%s", sen);
/*     gets(sen);//age use hoito
 */
    fgets(sen, sizeof(sen), stdin);

    int i = 0, counter = 0;
    while (sen[i]!='\0')
    {
        if (sen[i]=='a' || sen[i]=='e' || sen[i]=='i' || sen[i]=='o' || sen[i]=='e')
        {
            counter++;
        }
        else if (sen[i]=='A' || sen[i]=='E' || sen[i]=='I' || sen[i]=='O' || sen[i]=='U')
        {
            counter++;
        }
        
        i++;
    }
    
    printf("No. of vowels = %d", counter);
    return 0;
}