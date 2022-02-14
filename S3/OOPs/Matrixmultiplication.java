import java.util.Scanner;
class Matrixmultiplication {
        
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter no. of rows of matrix 1");
        int a = sc.nextInt();
        System.out.println("Enter no of columns of matrix 1");
        int b = sc.nextInt();
        int[][] mata = new int[a][b];
        System.out.println("Enter the elements");
        for(int i=0; i<a; i++){
            for (int j=0; j<b; j++){
                mata[i][j] = sc.nextInt();
            }
        }

        System.out.println("enter no. of rows of matrix 2");
        int m = sc.nextInt();
        System.out.println("Enter no of columns of matrix 2");
        int n = sc.nextInt();
        int[][] matb = new int[m][n];
        System.out.println("Enter the elements");
        for(int i=0; i<m; i++){
            for (int j=0; j<n; j++){
                matb[i][j] = sc.nextInt();
            }
        }
        sc.close();
        int[][] result = new int[a][n];

        if (b==m){

            for (int i = 0; i<a; i++){
                for (int j=0;j<n;j++){
                    result[i][j] = 0;
                    for (int k = 0;k<n;k++){
                        result[i][j] += mata[i][k]*matb[k][j];
                    }
                }
            }
            System.out.println("the answer is");
            for (int i=0;i<a;i++){
                for (int j=0;j<n;j++){
                    System.out.print(result[i][j]+" ");
                }
                System.out.println(" ");
            }
        }
        else {
            System.out.println("Matrix multiplication not possible");
        }
    }
}
