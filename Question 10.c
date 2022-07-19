int main()
{
    int day=0;
    int month=0;
    int year=0;
    printf("Please Enter Date in given Format DD/MM/YYYY: ");
    scanf("%d/%d/%d",&day,&month,&year);
    printf("\nDay - %02d, Month - %02d, Year - %04d",day,month,year);
    return 0;
}
