#ifndef ALGO_HPP
#define ALGO_HPP
class algo
{
public:
    void print(int* first, int* limit)
    {
        while (first != limit)
        {
            std::cout << *first << ' ';
            ++first;
        }
    };
    int* find(int* first, int* limit, int value)
    {
        for(first; first!= limit; first++)
        {
            if (value == *first)
                return first;
        }
        return limit;
    };
    bool in(int* first, int* limit, int value)
    {
        int *isIn = algo::find(first, limit, value);
        if (*isIn == value)
            return true;
        else
            return false;
    };
    int count(int* first, int* limit, int value)
    {
        int tmp=0;
        for(first; first != limit; first++)
        {
            if (value == *first)
                tmp++;
        }
        return tmp;
    };

    bool equal(int* first1, int* limit1, int* first2, int* limit2)
    {
        while( first1!=limit1 && first2!=limit2)
        {
            if(*first1 != *first2)
                return false;
            first1++;
            first2++;
        }
        if (first1 == limit1 && first2 == limit2)
            return true;
        else
            return false;
    };
    int minimum(int a, int b)
    {
        if(a <= b)
            return a;
        else
            return b;
    };
    int* minimumPtr(int* first, int* limit)
    {
        int* f = first;
        int* l = limit;
        int tmp1= *first;
        int tmp2;
        for(first; first!=limit; first++)
        {
            tmp2 = *(first+1);
            if(first == (limit-1))
                tmp2 = *limit;
            else if (tmp2 <=tmp1)
                tmp1=tmp2;
        }
        int *minPtr = algo::find(f,l,tmp1);
        return minPtr;
    };
    int maximum(int a, int b)
    {
        if(a >= b)
            return a;
        else
            return b;
    };
    int* maximumPtr(int* first, int* limit)
    {
        int* f = first;
        int* l = limit;
        int tmp1= *first;
        int tmp2;
        for(first; first!=limit; first++)
        {
            tmp2 = *(first+1);
            if (first == (limit-1))
                tmp2 = *limit;
            else if (tmp2 >=tmp1)
                tmp1=tmp2;
        }
        int *maxPtr = algo::find(f,l,tmp1);
        return maxPtr;
    };
    int compare(int* first1, int* limit1, int* first2, int* limit2)
    {
        while (first1 != limit1 && first2 != limit2)
        {
            if (*first1 < *first2)
                return -1;
            if (*first2 < *first1)
                return 1;

            first1++;
            first2++;
        }
        if (first1 == limit1)
        {
            if (first2 != limit2)
                return -1; // [first1, limit1) is a prefix of [first2, limit2)
            else
                return 0;  // [first1, limit1) and [first2, limit2) are equivalent
        }
        else
        {
            return 1;    // [first2, limit2) is a prefix  of [first1, limit1)
        }
    };
    void copy(int* first2, int* limit2, int* first1, int* limit1)
    {
        int tmp1 = (first1 - limit1);
        int tmp2 = (first2 - limit2);
        if (tmp1 == tmp2)
        {
            for(first1; first1!=limit1; first1++)
            {
                *first2 = *first1;
                first2 ++;
            }
            std::cout << "Arrays are now copied.\n";
        }
        else
            std::cout << "Sizes not equal.\n";
    };
};

#endif //ALGO_HPP
