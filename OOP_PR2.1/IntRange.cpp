#include "IntRange.hpp"
#include <iostream>
#include <sstream>

using namespace std;

IntRange::IntRange() {
    first = 0;
    second = 0;
}

IntRange::IntRange(int f, int s) {
    first = f;
    second = s;
}

IntRange::IntRange(IntRange& a) {
    first = a.first;
    second = a.second;
}

IntRange& IntRange::operator ++() {
    ++first;
    return *this;
}

IntRange& IntRange::operator --() {
    --first;
    return *this;
}

IntRange IntRange::operator ++(int) {
    IntRange t(*this);
    second++;
    return t;
}

IntRange IntRange::operator --(int) {
    IntRange t(*this);
    second--;
    return t;
}

IntRange& IntRange::operator = (const IntRange& f) {
    first = f.first;
    second = f.second;
    return *this;
}

istream& operator >> (istream& in, IntRange& a)
{
    cout << " From "; in >> a.first;
    cout << " to "; in >> a.second;
    while(a.second < a.first)
    {
        cout << "Right bound can't be equal or less than left bound!" << endl;
        cout << " to "; in >> a.second; cout << endl;
    }
    return in;
}

ostream& operator << (ostream& out, const IntRange& a)
{
    out << string(a);
    return out;
}

IntRange::operator string () const
{
    stringstream a;
    a << "The range is [" << first << "; " << second << ")" << endl;
    return a.str();
}

void Read(IntRange& a)
{
    cout << "Set the range" << endl; cin >> a;
}

void Display(IntRange& a)
{
    cout << a;
}

int IntRange::rangeСheck(int number)
{
    if(first <= number && number < second)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void IntRange::checkResult(int number)
{
    if(rangeСheck(number))
    {
        cout << "The number is in the range" << endl;
    }
    else{
        cout << "The number isn't in the range" << endl;
    }
}
