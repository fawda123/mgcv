#ifndef MATRIX_HEADER_IN
#include "matrix.h"
#endif
typedef struct
{ double conv_tol;
  int max_step_half;
} msctrl_type;

double svdopt(matrix B,matrix S,matrix X,matrix W,matrix y,matrix f,
	      double r,int method,double *outcv);double zsvdopt(matrix Z,matrix B,matrix S,matrix X,matrix W,matrix f,matrix y,
	      double r,int method,double *outcv);
double hardZopt(matrix X,matrix B,matrix S,matrix c,matrix y,matrix p,
		matrix Ain,matrix Af,matrix b,matrix W,double r,int method);
double svdoptcv(double r,matrix ZU,matrix E,matrix W,matrix e,matrix y,
		int method);
double TrInf(matrix *X,matrix *Z,matrix *w,matrix *S,double rho);
double EScv(matrix *T,matrix *l0,matrix *l1,matrix *x,double nx,matrix *z,double r,long n,
            double *trace,double *ress,double *sig2);
double EasySmooth(matrix *T,matrix *z,double *v,double *df,long n,double *sig2,double tol);
double SingleSmooth(matrix *y,matrix *X,matrix *Z,matrix *w,matrix *S,matrix *p,
                    double *df,double *sig2);
double MultiSmooth(matrix *y,matrix *J,matrix *Z,matrix *w,matrix *S,matrix *p,
                 double *theta,long *off,int m,double *sig2,msctrl_type *msctrl);
void MSmooth(double ft(int,int,int,double*,double*,int,int,int),
             matrix *y,matrix *J,matrix *Z,matrix *w,matrix *S,matrix *p,
             double *theta,long *off,int m,int mp,double *sig2,int transform);                 

