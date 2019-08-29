//Noah Krill
//cs2

#ifndef CIRCLE.HPP

#define CIRCLE.HPP

namespace cs2
{
    double const PI =3.1415926535;//declaring a constant pi

template <class T>//declaring the template
    class Circle//declaring a class
    {
    private:
        T radius;// declaring a variable radius with the type of the template
    public:

        Circle(T radius =0);//declaring the object circle
        T getRadius() const;//declaring the function get radius
        void setRadius(T radius)//declaring set radius
        {
            this->radius =radius;
        }
        double getArea() const;//declaring a function to get area
        friend std::istream& operator>>(std::istream& in, Circle& aCircle)//overloading the istream operator
        {
            in >>aCircle.radius;//getting info from user
            return in;//returning to main
        }

    };
    template <class T>//declaring a template again

    //you dont need a friend because you are not changing the
    //private members youre just outputting the objects info
    //based on the private number
    std::ostream& operator<<(std::ostream& ot, const  Circle<T> &aCircle)//overloading the ostream operator
    {
        return ot << aCircle.getArea();//returns the area back to main
    }
    template <class T>
     Circle<T>::Circle(T radius)//this function stores the radius
    {
        this->radius = radius;
     }
     template <class T>//this function returns the radius
     T Circle<T>::getRadius()const
     {
         return radius;

     }
     template <class T>
     double Circle<T>::getArea() const//this function will get the area
     {
         return PI* radius * radius;
     }


};
#endif
