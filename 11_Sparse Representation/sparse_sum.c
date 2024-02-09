//SIYA P P CU55
#include <stdio.h>
void display(int r, int c, int arr[][3]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%d\t", arr[i][j]);
        printf("\n");
    }
    printf("\n");
}
void input_rep(int arr[][3]) {
    printf("Enter the first row of sparse representation : \n");
    scanf("%d", &arr[0][0]);
    scanf("%d", &arr[0][1]);
    scanf("%d", &arr[0][2]);
    int count = arr[0][2];
    printf("Enter the elements as a triplet of row col value \n");
    for (int i = 1; i <= count; i++) {
        scanf("%d", &arr[i][0]);
        scanf("%d", &arr[i][1]);
        scanf("%d", &arr[i][2]);
    }
    printf("The sparse representation entered is:\n");
    display(count + 1, 3, arr);
}

void sum(int r1, int c1, int r2, int c2, int m1, int m2, int sp1[][3], int sp2[][3], int sp[][3]) {
    if (r1 != r2 || c1 != c2) {
        printf("Matrix dimensions are not compatible for addition.\n");
    } else {
        sp[0][0] = r1;
        sp[0][1] = c1;
        int i = 1, j = 1, k = 1;
        while (i <= m1 && j <= m2) {
            if (sp1[i][0] == sp2[j][0] && sp1[i][1] == sp2[j][1]) {
                sp[k][0] = sp1[i][0];
                sp[k][1] = sp1[i][1];
                sp[k][2] = sp1[i][2] + sp2[j][2];
                i++;
                j++;
                k++;
            } else if ((sp1[i][0] < sp2[j][0]) || (sp1[i][0] == sp2[j][0] && sp1[i][1] < sp2[j][1])) {
                sp[k][0] = sp1[i][0];
                sp[k][1] = sp1[i][1];
                sp[k][2] = sp1[i][2];
                i++;
                k++;
            } else {
                sp[k][0] = sp2[j][0];
                sp[k][1] = sp2[j][1];
                sp[k][2] = sp2[j][2];
                j++;
                k++;
            }
        }
        while (i <= m1) {
            sp[k][0] = sp1[i][0];
            sp[k][1] = sp1[i][1];
            sp[k][2] = sp1[i][2];
            i++;
            k++;
        }
        while (j <= m2) {
            sp[k][0] = sp2[j][0];
            sp[k][1] = sp2[j][1];
            sp[k][2] = sp2[j][2];
            j++;
            k++;
        }
        sp[0][2] = k - 1;
        printf("The resultant representation is:\n");
        display(k, 3, sp);
    }
}

int main() {
    int sp1[100][3], sp2[100][3], sp[100][3];
    input_rep(sp1);
    input_rep(sp2);
    sum(sp1[0][0], sp1[0][1], sp2[0][0], sp2[0][1], sp1[0][2], sp2[0][2], sp1, sp2, sp);
    return 0;
}    

OUTPUT

first case=>

Enter the first row of sparse representation : 
3
4
3
Enter the elements as a triplet of row col value 
1 
1
3
2
3
5
3
1
2
The sparse representation entered is:
3       4       3
1       1       3
2       3       5
3       1       2

Enter the first row of sparse representation : 
3
3
1
Enter the elements as a triplet of row col value 
2
3
6
The sparse representation entered is:
3       3       1
2       3       6

Matrix dimensions are not compatible for addition.

Second case =>

Enter the first row of sparse representation : 
3
3
2
Enter the elements as a triplet of row col value 
1
1
2
2
2
1
The sparse representation entered is:
3       3       2
1       1       2
2       2       1

Enter the first row of sparse representation : 
3
3
3
Enter the elements as a triplet of row col value 
1
1
1
2
2
2
3
3
3
The sparse representation entered is:
3       3       3
1       1       1
2       2       2
3       3       3

The resultant representation is:
3       3       3
1       1       3
2       2       3
3       3       3
