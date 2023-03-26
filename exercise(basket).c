#include <stdio.h>
#include <stdlib.h>
#define N 5
#define M 5

/*Εργασία των 1918-Στέλιος Τσιρίδης και 1911-Γιώργος Τακουτής*/

int main()
{
    int i;
    int j;
    /*Δηλώνουμε τον δυσδιάστατο πίνακα*/
    int pinakas[N][M];
    /*Δηλώνουμε τον μονοδιάστατο πίνακα*/
    int mo[5];
    int m=0;
    int max=0;
    int maxp=0;
    int points;
    int p=0;
    int pp[5];
    /*Με την χρήση της for οι εντολές επαναλαμβάνονται για τους 5 παίκτες*/
    for (i=0;i<5;i++)
            for (j=0;j<5;j++)
    {
        printf("Give points for game %d of player %d \n",j+1,i+1);
        /*Οι πόντοι που εισάγουμε αποθηκεύονται στον δυσδιάστατο πίνακα*/
        scanf("%d",&pinakas[i][j]);
    }

    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
            m=m+pinakas[i][j];
/*υπολογισμός μέσου όρου του κάθε παίκτη*/
        mo[i]=m/5;
        m=0;
        /*Αποθήκευση μέσων όρων στον μονοδιάστατο πίνακα*/
    }

    for (i=0;i<5;i++)
    printf("Player %d average is %d points\n",i+1,mo[i]);

    for(i=0;i<5;i++)
        {
        	/*Με την χρήση του if παίρνουμε ελέγχουμε ποιος παίκτης έχει τον καλύτερο μέσο όρο πόντων*/
        if (max<mo[i])
            max=mo[i];
            maxp=i;
        }
/*Εμφανίζουμε τον παίκτη με τον καλύτερο μέσο όρο πόντων*/
    printf("Player %d has the best average \n",maxp+1);

    printf("Give points \n");
    scanf("%d",&points);
    for(i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
        	/*υπολογισμός αριθμών παικτών που έχουν πετύχει περισσότερους πόντους 	από την τιμή της μεταβλητής points σε τουλάχιστον 2 από τα 5 τελευταία παιχνίδια*/
            if (points<pinakas[i][j])
                p++;
        }
        if (p>=2)
            printf("Player %d has more points in %d games \n",i+1,p);

        p=0;
    }
    return 0;
}
