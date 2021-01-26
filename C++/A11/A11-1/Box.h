class Box
{
private: //data members are private
    double height;
    double width;
    double depth;

public:
    //constructors
    Box();
    Box(double, double, double);
    Box(const Box& b);
    //destructor
    ~Box();
    //setter
    void setHeight(int newHeight);
    void setWidth(int newWidth);
    void setDepth(int newDepth);
    //getter methods
    double getHeight();
    double getWidth();
    double getDepth();

    //Service Methods
    double volume();
};