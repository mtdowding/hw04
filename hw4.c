#include<stdio.h>
#include<math.h>

struct point2d
{
    double x;
    double y;
};

struct triangle
{
    struct point2d a;
    struct point2d b;
    struct point2d c;
};

double distance1 (struct triangle t); 

double distance1 (struct point2d x, struct point2d y);
/*distance B-C*/
double distance1 (struct point2d a, struct point2d b)
{
    return sqrt((b.x-a.x)*(b.x-a.x)+(b.y-a.y)*(b.y-a.y));
}

double area(struct triangle t);
/*are of triangle - CH6*/
double area(struct triangle t)
{
    return fabs(0.5*((t.c.x-t.a.x)*(t.b.y-t.a.y)-(t.c.y-t.a.y)*(t.b.x-t.a.x)));
}

int main(void)
{
    struct triangle t1;
    double s, d1, d2, d3, r;
}
    /*initialization*/
    t1.a=(struct point2d) {2., 2.};
    t1.b=(struct point2d) {-2.,1.};
    t1.c=(struct point2d) {0.,-3.};

    s=area(t1);
    printf("Triangle Area: %14.6f\n", s);

    d1=distance(t1.c, t1.a);
    printf("Distance Between C & A: %14.6f\n", d1);

    d2=distance(t1.a, t1.b);
    printf("Distance Between A & B: %14.6\n", d2);

    d3=distance(t1.c, t1.b);
    printf("Distance Between C & B: %14.6f\n", d3);

    r=(2*area(t1))/(d1+d2+d3);
    printf("Radius of Inner Circle: %14.6f\n", r);

    return 0;
}
