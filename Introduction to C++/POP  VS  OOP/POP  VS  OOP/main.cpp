//
//  main.cpp
//  POP  VS  OOP
//
//  Created by KRISHNA RAJPOPAT on 23/04/25.
//

       // POP //
#include <stdio.h>
int main() {
     //Write C code here
    int l,b,area;
    printf("Enter value of length:");
    scanf("%d",&l);
    printf("Enter value of Breadth:");
    scanf("%d",&b);
    area = l * b;
    printf("Area of the rectangle is: %d\n", area);
    return 0;
}


        // OOP //
#include <iostream>
using namespace std;
class rectangle
{
public:
    void area()
    {
        int l , b, rec;
        
        cout<<"Enter value of length:";
        cin>>l;
        
        cout<<"Enter value of breadth:";
        cin>>b;
        
        rec = l * b;
        cout << "\nArea of the rectangle is: " << rec;
        
        
    }
};

int main()
{
    rectangle r;
    r.area();
    return 0;
}
