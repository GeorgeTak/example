#include <stdio.h>
#include <stdlib.h>
#define N 5
#define M 5

/*������� ��� 1918-������� �������� ��� 1911-������� ��������*/

int main()
{
    int i;
    int j;
    /*��������� ��� ����������� ������*/
    int pinakas[N][M];
    /*��������� ��� ������������ ������*/
    int mo[5];
    int m=0;
    int max=0;
    int maxp=0;
    int points;
    int p=0;
    int pp[5];
    /*�� ��� ����� ��� for �� ������� ���������������� ��� ���� 5 �������*/
    for (i=0;i<5;i++)
            for (j=0;j<5;j++)
    {
        printf("Give points for game %d of player %d \n",j+1,i+1);
        /*�� ������ ��� ��������� ������������� ���� ����������� ������*/
        scanf("%d",&pinakas[i][j]);
    }

    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
            m=m+pinakas[i][j];
/*����������� ����� ���� ��� ���� ������*/
        mo[i]=m/5;
        m=0;
        /*���������� ����� ���� ���� ������������ ������*/
    }

    for (i=0;i<5;i++)
    printf("Player %d average is %d points\n",i+1,mo[i]);

    for(i=0;i<5;i++)
        {
        	/*�� ��� ����� ��� if ��������� ��������� ����� ������� ���� ��� �������� ���� ��� ������*/
        if (max<mo[i])
            max=mo[i];
            maxp=i;
        }
/*����������� ��� ������ �� ��� �������� ���� ��� ������*/
    printf("Player %d has the best average \n",maxp+1);

    printf("Give points \n");
    scanf("%d",&points);
    for(i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
        	/*����������� ������� ������� ��� ����� ������� ������������� ������� 	��� ��� ���� ��� ���������� points �� ����������� 2 ��� �� 5 ��������� ���������*/
            if (points<pinakas[i][j])
                p++;
        }
        if (p>=2)
            printf("Player %d has more points in %d games \n",i+1,p);

        p=0;
    }
    return 0;
}
