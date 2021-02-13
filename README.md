# LUDECOMPOSITION
A square matrix A can be decomposed into two square matrices L and U such that A = L U where U is an upper triangular matrix formed as a result of applying Gauss Elimination Method on A; and L is a lower triangular matrix with diagonal elements being equal to 1.
i.e.     A = LU
 L[i][j]=1 in L matix where i=jL[1][1]=L[2][2]=……………………..=L[n][n]=1.
But sometimes it is impossible to write a matrix in the form “lower triangular”×“upper triangular”. An invertible matrix A has an LU decomposition provided that all its leading submatrices have non-zero determinants. If A is a singular matrix of rank K ,then it admits LU factorization if the first K leading principal minors are non zero.
CONCLUSION:
The total no. of operations carried out in our program are
For every iteration no. of operations carried out=n(n-i+1).
As i goes from 0 to n
Therefore total no. of operations
=n(n-1) + n(n-2) + n(n-3) + ……………………. + n(1).
=n(n(n-1))/2
=n2(n-1)/2
Therefore time complexity is proportional to n3
