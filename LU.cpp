#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double LU(double **A,int n,double **l){
    int y=0;
for(int i=0;i<n-1;i++){
        if(A[i][i]==0){
                y=1;
                cout<<"LU decomposition does not exist"<<endl;
            break;
        }
        else{
    for(int j=i+1;j<n;j++){
        l[j][i]=(A[j][i]/A[i][i]);




    for(int c=0;c<n;c++){
        A[j][c]=A[j][c]-l[j][i]*A[i][c];
}

}
        }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(abs(A[i][j])<1.0e-10){
            A[i][j]=0;
        }
        if(j==i){
            l[i][j]=1;
        }
        if(j>i){
            l[i][j]=0;
        }
    }
}
return y;
}


int main(){
    int n;
    cout<<"Enter the order of the sqaure matrix"<<endl;
    cin>>n;
double **A;
A=new double *[n];
for(int i=0;i<n;i++){
    A[i]=new double [n];
}
cout<<"Enter the elements of the matrix"<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
            cin>>A[i][j];
    }
}
double **l;
l=new double *[n];
for(int i=0;i<n;i++){
    l[i]=new double [n];
}



if(LU(A,n,l)!=1){
    cout<<"---------------------------------"<<endl;
    cout<<"L"<<endl;
for(int i=0;i<n;i++){
    cout<<setw(5)<<"|";
    for(int j=0;j<n;j++){
            cout<<setw(8)<<setprecision(4)<<l[i][j]<<" ";
    }
    cout<<setw(8)<<"|"<<endl;

}

    cout<<"---------------------------------"<<endl;
    cout<<"U"<<endl;
for(int i=0;i<n;i++){
        cout<<setw(5)<<"|";
    for(int j=0;j<n;j++){
            cout<<setw(8)<<setprecision(4)<<A[i][j]<<" ";
    }
    cout<<setw(8)<<"|"<<endl;

}
}
}
