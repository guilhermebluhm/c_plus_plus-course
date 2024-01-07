#ifndef RETANGLE_H
#define RETANGLE_H

class Retangle{

    private:
        int width;
        int heigth;
    public:
        void setWidth(int);
        void setHeigth(int);
        int  getWidth();
        int  getHeigth();
        int  getTotalArea();

};

#endif