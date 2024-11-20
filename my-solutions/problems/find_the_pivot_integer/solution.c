int pivotInteger(int n) {
    int sumofNumbers = (n*(n+1))/2;
    int x =sqrt(sumofNumbers);
    //return x;
    return (x*x==sumofNumbers)?x:-1;
}