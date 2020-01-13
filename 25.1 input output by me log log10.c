int main()
{
    int x;
    double result;
    printf("Enter log value : ");
    scanf("%d",&x);

    result = log(x);  //library log()

    printf("The result of log = %lf\n",result);

    return 0;

}

//you can try calculate log10, just write log10 instead of log
