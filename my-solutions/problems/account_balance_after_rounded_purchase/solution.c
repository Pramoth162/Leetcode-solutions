int accountBalanceAfterPurchase(int purchaseAmount)
 {
    int m,n,p,q,r,s,t;
    n=100-purchaseAmount;
    m=n%10;
    p=n/10;
    if(m<=5)
    {
        q=p*10;
        return q;
    }
    else
    {
        r=p+1;
        s=r*10;
        return s;
    }
}