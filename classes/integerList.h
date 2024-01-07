#ifndef INTEGER_LIST_H
#define INTEGER_LIST_H

class integerList{

    private:
        int *list;
        bool isValidPosition(int) const;
        int sizeList;
    public:
        integerList(){};
        integerList(int);
        ~integerList();
        int getElement(int);
        void setElement(int);
};

#endif