#include<iostream>
#include<math.h>
#define error 0.2

void inputPT()
{
    float c;
    float a,b;
    std::cout<<"xap xi nghiem bang pp chia doi";
    std::cout<<"\nX^3-X-1=0 tren doan [1,2]";std::cout<<"\n";
    float  y;  
    float z;
    a=1;
    b=2;
    int i = 1;
    do
    {
        c=float(a+b)/2;
        y = pow(c,3)-c-1;
        if (y>0)
        {
            a=a;
            b=c;
        }
        else if (y<0)
        {
            a=c;
            b=b;
        }
         z = b-a;
        std::cout<<"vong lap thu: ";std::cout<<i;std::cout<<"\n";
        std::cout<<y;std::cout<<"\n";
        std::cout<<a;std::cout<<"\n";
        std::cout<<b;std::cout<<"\n";
        std::cout<<z;
        i++;
        std::cout<<"\n\n";
    } while (z>error);

   
}




int main()
{
    inputPT();
    return 0;
}