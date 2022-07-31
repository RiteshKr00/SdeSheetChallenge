double findNthRootOfM(int n, long long m) {
    // Write your code here.
    double t=1.000000/n;
    double ans=pow(m,t);
    return ans;
}

//m2
double multiply(double number, int n)
{
    double ans=1.0;
    for(int i=1; i<=n; i++)
    {
        ans=ans*number;
    }
    return ans;
}
double findNthRootOfM(int n, long long m) {
	// Write your code here.
    double low=1, high=m;
    double eps=1e-7;
    while((high-low)>eps)
    {
        double mid=(high+low)/2.0;
        if(multiply(mid, n)<m)
            low=mid;
        else 
            high=mid;
    }
    return high;
}