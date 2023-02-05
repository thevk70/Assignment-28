// 1. Define a class Complex with appropriate instance variables and member functions. 
// Overload following operators
// a. << insertion operator
// b. >> extraction operator
// #include <iostream>
// using namespace std;
// class Complex
// {
//    int a,b;
//    public:
//    friend void operator>>(istream&,Complex&);
//    friend void operator<<(ostream&,Complex&);
// };
// void operator>>(istream &input,Complex &x)
// {
//     cout<<"Enter a ::";
//     input>>x.a;
//     cout<<"Enter b ::";
//     input>>x.b;
// }
// void operator<<(ostream &output,Complex &x)
// {
//     cout<<"A + Bi = "<<x.a<<" + "<<x.b<<"i"<<endl;
// }
// int main()
// {
//     Complex c;
//     cin>>c;
//     cout<<c;
//     return 0;
// }

// 2. Define a class Complex with appropriate instance variables and member functions. One 
// of the functions should be setData() to set the properties of the object. Make sure the 
// names of formal arguments are the same as names of instance variables.
// #include <iostream>
// using namespace std;
// class Complex
// {
//     int a,b;
//     public:
//     void setData(int a,int b)
//     {
//        this->a = a;
//        this->b = b;
//     }
//     void showData()
//     {
//         cout<<"a = "<<a<<" b = "<<b<<endl;
//     }
// };
// int main()
// {
//     Complex c;
//     c.setData(2,5);
//     c.showData();
//     return 0;
// }

// 3. Overload subscript operator [] that will be useful when we want to check for an index out 
// of bound.
// #include <iostream>
// using namespace std;
// class Array
// {
//     const int size = 100;
//     int arr[100];
//     public:
//     Array(int s)
//     {
//         arr[s];
//         for (int i = 0; i < s; i++)
//         {
//             cin>>arr[i];
//         }
        
//     }
//     int operator [](int i)
//     {
//       if (i >= size)
//       {
//         cout<<"Array index out of Bond Exception"<<endl;
//         exit(0);
//       }
//       return arr[i];
//     }  
// };
// int main()
// {
//     Array a(5);
//     a[2];
//     return 0;
// }

// 4. Create a student class and overload new and delete operators as a member function of 
// the class.
// #include <iostream>
// using namespace std;
// class student
// {
//     string name;
//     int age;
//     public:
//     student(string n,int a)
//     {
//         this->name = n;
//         this->age = a;
//     }
//     void display()
//     {
//         cout<<"Name :> "<<name<<endl;
//         cout<<"Age :> "<<age<<endl;
//     }
//     void* operator new(size_t size)
//     {
//        cout<<"Overloading new ooperator with size: "<< size << endl;
//        void *p = malloc(size);
//        return p;
//     }
//     void operator delete(void *p)
//     {
//         cout<<"Overloading delete operator "<<endl;
//         free(p);
//     }
// };
// int main()
// {
//     student * p = new student("Vishu",18);
//     p->display();
//     delete p;
//     return 0;
// }

// 5. Create a student class and overload new and delete operators outside the class.
// #include <iostream>
// using namespace std;
// class student
// {
//     string name;
//     int age;
//     public:
//     student(string n,int a)
//     {
//         name = n,age = a;
//     }
//     void display()
//     {
//         cout<<"Name :: "<<name<<" Age :: "<<age<<endl;
//     }
// };
// void * operator new(size_t size)
// {
//     cout<<"Overloading new operator with size: "<<size<<endl;
//     void *p = malloc (size);
//     return p;
// }
// void operator delete(void *p)
// {
//     cout<<"Overloading delete operator "<<endl;
//     free(p);
// }
// int main()
// {
//     student *s = new student("Vishu",18);
//     s->display();
//     delete s;
//     return 0;
// }

// 6. Create a complex class and overload assignment operator for that class.
// #include <iostream>
// using namespace std;
// class complex
// {
//     int a,b;
//     public:
//     complex(int x = 0,int y = 0)
//     {
//        a = x,b = y;
//     }
//     void display()
//     {
//         cout<<"a = "<<a<<" b = "<<b<<endl;
//     }
//     void operator=(complex &obj)
//     {
//         obj.a = a;
//         obj.b = b;
//     }
// };
// int main()
// {
//     complex c1(2,3),c2;
//     c1 = c2;  //Here obj c1 calls fun() i.e operator= and obj c2 pass as an argument in it.
//     c2.display();
//     return 0;
// }

// 7. Create an Integer class and overload not operator for that class.
// #include <iostream>
// using namespace std;
// class integer
// {
//     int a,b;
//     public:
//     integer(int x = 0,int y = 0)
//     {
//         a = x,b = y;
//     }
//     void display()
//     {
//         cout<<"a = "<<a<<" b = "<<b<<endl;
//     }
//     void operator!()
//     {
//         a = -a;
//         b = -b;
//     }
// };
// int main()
// {
//     integer i1(2,3);
//     !i1;
//     i1.display();
//     return 0;
// }

// 8. Create a Coordinate class for 3 variables x,y and z and overload comma operator such 
// that when you write c3 = (c1 , c2 ) then c2 is assigned to c3. Where c1,c2,and c3 are 
// objects of 3D coordinate class.
// #include <iostream>
// using namespace std;
// class Coordinate
// {
//     int x,y,z;
//     public:
//     Coordinate(int a = 0,int b = 0,int c = 0)
//     {
//         x = a;
//         y = b;
//         z = c;
//     }
//     void diplay()
//     {
//         cout<<"x = "<<x<<" y = "<<y<<" z = "<<z<<endl;
//     }
//     Coordinate operator ,(Coordinate obj)
//     {
//         Coordinate temp;
//         temp.x = obj.x;
//         temp.y = obj.y;
//         temp.z = obj.z;
//         return temp;
//     }
// };
// int main()
// {
//     Coordinate c1(1,2,3),c2(4,5,6),c3;
//     c3 = (c1,c2);
//     c3.diplay();
//     return 0;
// }

// 9. Create an Integer class that contains int x as an instance variable and overload
// casting int() operator that will type cast your Integer class object to int data type.
// #include <iostream>
// using namespace std;
// class Integer
// {
//     int x;
//     public:
//     Integer(int a){x = a;}
//     operator int()
//     {
//         return x;
//     }
// };
// int main()
// {
//     Integer obj(4);
//     int x = obj;
//     printf("x = %d",x);
//     return 0;
// }

// 10. Create a Distance class having 2 instance variable feet and inches. Also create default 
// constructor and parameterized constructor takes 2 variables . Now overload () function call 
// operator that takes 3 arguments a , b and c and set feet = a + c + 5 and inches = a+b + 15.
// #include <iostream>
// using namespace std;
// class Ditance
// {
//     int feet , inches;
//     public:
//     Ditance(){};
//     Ditance(int x,int y)
//     {
//         cout<<"Parameterized constructor called"<<endl;
//     }
//     void display()
//     {
//         cout<<"Feet = "<<feet<<endl<<"inches = "<<inches<<endl;
//     }
//     void operator ()(int a,int b,int c)
//     {
//         feet = a + c + 5;
//         inches = a + b + 15;
//     }
// };
// int main()
// {
//     Ditance d1;
//     d1(1,2,3);
//     d1.display();
//     return 0;
// }

// 11. Create a class Marks that have one member variable marks and one member function 
// that will print marks. We know that we can access member functions using (.) dot operator. Now 
// you need to overload (->) arrow operator to access that function.
// #include <iostream>
// using namespace std;
// class Marks
// {
//     int marks;
//     public:
//     Marks(int n = 0)
//     {
//         marks = n;
//     }
//     void display()
//     {
//         cout<<"Marks = "<<marks<<endl;
//     }
//     Marks *operator ->()
//     {
//        return this;
//     }
// };
// int main()
// {
//     Marks m1(90);
//     m1->display();
//     return 0;
// }