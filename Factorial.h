namespace Fact
{
long long Factorial(int n)
{
    if(n>0)
    return n*Factorial(n-1);
    else
    return 1;
}
}