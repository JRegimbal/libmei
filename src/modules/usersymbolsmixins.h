/*
    Copyright (c) 2011-2015 Andrew Hankinson, Alastair Porter, and Others

    Permission is hereby granted, free of charge, to any person obtaining
    a copy of this software and associated documentation files (the
    "Software"), to deal in the Software without restriction, including
    without limitation the rights to use, copy, modify, merge, publish,
    distribute, sublicense, and/or sell copies of the Software, and to
    permit persons to whom the Software is furnished to do so, subject to
    the following conditions:

    The above copyright notice and this permission notice shall be
    included in all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
    NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
    LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
    OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
    WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#ifndef USERSYMBOLSMIXIN_H_
#define USERSYMBOLSMIXIN_H_

#include "meielement.h"
#include "exceptions.h"
/* #include_block */

#include <string>

namespace mei {
class AltSymMixIn {
    public:
        explicit AltSymMixIn(MeiElement *b);
        virtual ~AltSymMixIn();
        /** \brief Provides a way of pointing to a user-defined symbol.
         * 
         *  It must contain a reference to an ID of a
         */
        MeiAttribute* getAltsym();
        void setAltsym(std::string _altsym);
        bool hasAltsym();
        void removeAltsym();

/* include <altsymmixin> */

    private:
        MeiElement *b;
};

class AnchoredTextLogMixIn {
    public:
        explicit AnchoredTextLogMixIn(MeiElement *b);
        virtual ~AnchoredTextLogMixIn();
        /** \brief Function of the meter signature group.
         */
        MeiAttribute* getFunc();
        void setFunc(std::string _func);
        bool hasFunc();
        void removeFunc();

/* include <funcmixin> */

    private:
        MeiElement *b;
};

class CurveLogMixIn {
    public:
        explicit CurveLogMixIn(MeiElement *b);
        virtual ~CurveLogMixIn();
        /** \brief Function of the meter signature group.
         */
        MeiAttribute* getFunc();
        void setFunc(std::string _func);
        bool hasFunc();
        void removeFunc();

/* include <funcmixin> */

    private:
        MeiElement *b;
};

class LineLogMixIn {
    public:
        explicit LineLogMixIn(MeiElement *b);
        virtual ~LineLogMixIn();
        /** \brief Function of the meter signature group.
         */
        MeiAttribute* getFunc();
        void setFunc(std::string _func);
        bool hasFunc();
        void removeFunc();

/* include <funcmixin> */

    private:
        MeiElement *b;
};
}
#endif  // USERSYMBOLSMIXIN_H_
