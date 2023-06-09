#include <stdio.h>

typedef struct
{
    char PName[40];
    float Quantity;
    float price;
}Sale;

typedef struct
{
    char Name[100];
    char Address[120];
    int EIK;
    Sale Sales[5]; 
}Company;

void GetSeles(Company *c, int size, int id)
{
   int i,j;
   for(i=0; i<size; i++) 
   {
       if(id==c[i].EIK)
       {
           printf("\n-------------------------------------\nCompany: %s\nAddress: %s\n-------------------------------------\n", c[i].Name, c[i].Address);
           for(j=0; j<5; j++)
           {
           printf("%s\t%0.2f\t%0.2f\t%0.2f\n", c[i].Sales[j].PName, c[i].Sales[j].Quantity, c[i].Sales[j].price, c[i].Sales[j].Quantity * c[i].Sales[j].price);
           }
           return;
       }
   }
}

int main()
{
    Company Comp[5]=
    {
        {"Apple","1 Street",111,{{"Article01",1,2},{"Article03",2,3},{"Article4",8,4.20},{"Article2",2,21.32},{"Article07",3, 12.32}}},
        {"IBM","2 Street",311,{{"Article02",1,4},{"Article05",2,32},{"Article5",2,5.46},{"Article3",3,43.63},{"Article08",4, 4.32}}},
        {"Nokia","3 Street",511,{{"Article03",1,7},{"Article07",2,2.31},{"Article9",5,14.43},{"Article1",4,55.63},{"Article09",11, 2.54}}},
        {"JBL","4 Street",611,{{"Article04",1,5},{"Article08",2,1.11},{"Article7",4,14.34},{"Article5",4,53.24},{"Article06",2, 4.24}}},
        {"Razer","5 Street",811,{{"Article05",1,9},{"Article04",2,3.22},{"Article8",2,12.23},{"Article6",4,21.31},{"Article10",23, 1.23}}},
    };

    GetSeles(Comp, 5, 311);

    return 0;
}
