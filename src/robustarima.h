#include <R.h>

int F77_NAME(s_regafe) (
  double *x, 
  double *y, 
  int *n, 
  int *m, 
  int  *idif, 
  int  *isp, 
  int  *nsd, 
  int  *ip, 
  int  *indar, 
  int  *ipfin, 
  int  *iqfin, 
  int  *indth, 
  int  *interc, 
  int  *kopt, 
  double *phiopt, 
  double *theta, 
  double *thetas, 
  double *betaopt, 
  double *sigmau, 
  double *bcov, 
  double *zcor, 
  double *zcor1, 
  double *sigmadif, 
  double *cck, 
  double *sigfil, 
  double *xy, 
  double *yhat, 
  double *uhat, 
  double *epshat, 
  double *st, 
  double *epspred, 
  int *npred, 
  double *tauef, 
  int *infnew, 
  int *ndim1, 
  int *ndim2, 
  double *work1, 
  int *nw1, 
  int *iwork1, 
  int *niw1, 
  double *work2, 
  int *nw2, 
  int *iwork2, 
  int *niw2, 
  double *utol, 
  int *maxfev, 
  double *epsmch, 
  double *dwarf, 
  int *n0
) ;

int F77_NAME(s_outlfe) (
  double *x, 
  double *y, 
  int *n, 
  int *m, 
  int *idif, 
  int *isp, 
  int *nsd, 
  int *k, 
  int *q, 
  int *indth, 
  double *beta, 
  double *phidif, 
  double *theta, 
  double *thetas, 
  double *sigmadif, 
  int *indio, 
  double *cck, 
  double *sigfil, 
  double *critv, 
  int *nout, 
  int *indtipo, 
  int *t0, 
  double *wout, 
  double *lambda, 
  double *sigmau0, 
  double *sigmau, 
  int *idim, 
  double *work, 
  int *idimw, 
  int *iwork, 
  int *idimiw, 
  int *ierror, 
  int *n0 
) ;
