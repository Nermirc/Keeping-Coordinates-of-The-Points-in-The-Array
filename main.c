#include <stdio.h>
#include <stdlib.h>
     struct nokta{
        char isim[10];
        float x_ekseni;
        float y_ekseni;
    };
    void ekranayazdir(struct nokta p[],int n)
    {
        int i;
        for(i=0;i<n;i++)
        {
            printf("%s =(%.0f %.0f)\n",p[i].isim,p[i].x_ekseni,p[i].y_ekseni);
        }
    }
int main()
{
   struct nokta emir[5]={{"Emir",3,4},{"Enver",5,3},{"Mehmet",1,2},{"Ismail",3,7},{"Ozan",8,6}};
    ekranayazdir(emir,5);
}
