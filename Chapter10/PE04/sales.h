// sales.h -- Sales interface
#ifndef SALES_H
#define SALES_H

namespace SALES {
    class Sales {
    private:
        enum {QUARTERS = 4};
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    public:
        Sales();
        // copies the lesser of 4 or n iterms from the array ar
        // to the sales member of s and computers and stores the
        // average, maximum, and minimum values of the entered items;
        // remaining elements of sales, if any, set to 0
        Sales(const double arr[], int n);
        ~Sales();

        // gathers sales for 4 quarters interactively, stores them
        // in the sales member of s and computers and stores the
        // average, maximum, and minimum values
        void setSales();

        // display all information in structure s
        void showSales() const;
    };
}

#endif /* SALES_H */