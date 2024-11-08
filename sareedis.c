#include<stdio.h>
int main()
{
    char cname[20],itemname[20];
    float itemprice,totalprice,Netprice,discountprice;
    int qty;
    printf("======================================================================================ṇ=============");
    printf("\nenter customer name :");
    scanf("%s",cname);
    printf("enter the item name :");
    scanf("%s",itemname);
    printf("enter price of %s :",itemname);
    scanf("%f",&itemprice);
    printf("enter number of %s taken :",itemname);
    scanf("%d",&qty);
    totalprice=itemprice*qty;
    if (strcmp(itemname,"shirt")==0)
    {
        discountprice=totalprice*5/100;
        Netprice=totalprice-discountprice;
        printf("Hello %s. Your item %s of quantity %d cost you total of ₹%f.\nA discount of ₹%f is granted.\nNet payable amount is ₹%f",cname,itemname,qty,totalprice,discountprice,Netprice);
    }
    else if(strcmp(itemname,"churudar")==0)
    {
        discountprice=totalprice*10/100;
        Netprice=totalprice-discountprice;
        printf("Hello %s. Your item %s of quantity %d cost you total of ₹%f.\nA discount of ₹%f is granted.\nNet payable amount is ₹%f",cname,itemname,qty,totalprice,discountprice,Netprice);

    }
    else if(strcmp(itemname,"jeans")==0)
    {
        discountprice=totalprice*20/100;
        Netprice=totalprice-discountprice;
        printf("Hello %s. Your item %s of quantity %d cost you total of ₹%f.\nA discount of ₹%f is granted.\nNet payable amount is ₹%f",cname,itemname,qty,totalprice,discountprice,Netprice);
    }
    else
    {
        discountprice=totalprice*2/100;
        Netprice=totalprice-discountprice;
        printf("Hello %s. Your item %s of quantity %d cost you total of ₹%f.\nA discount of ₹%f is granted.\nNet payable amount is ₹%f",cname,itemname,qty,totalprice,discountprice,Netprice);
    }
        printf("\n====================================================================================================");

}
