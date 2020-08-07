#include "performance.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::AvFile::AvFile() :
    MeiElement("avFile"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_InternetMedia(this),
    m_Facsimile(this),
    m_MetadataPointing(this),
    m_Pointing(this)
{
}
REGISTER_DEFINITION(mei::AvFile, "avFile");
mei::AvFile::~AvFile() {}
mei::AvFile::AvFile(const AvFile& other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_Bibl(this),
    m_InternetMedia(this),
    m_Facsimile(this),
    m_MetadataPointing(this),
    m_Pointing(this)
{
}

/* include <avFile> */

mei::Clip::Clip() :
    MeiElement("clip"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_DataPointing(this),
    m_MediaBounds(this),
    m_MetadataPointing(this),
    m_StartId(this)
{
}
REGISTER_DEFINITION(mei::Clip, "clip");
mei::Clip::~Clip() {}
mei::Clip::Clip(const Clip& other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_DataPointing(this),
    m_MediaBounds(this),
    m_MetadataPointing(this),
    m_StartId(this)
{
}

/* include <clip> */

mei::Performance::Performance() :
    MeiElement("performance"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_MetadataPointing(this)
{
}
REGISTER_DEFINITION(mei::Performance, "performance");
mei::Performance::~Performance() {}
mei::Performance::Performance(const Performance& other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_MetadataPointing(this)
{
}

/* include <performance> */

mei::Recording::Recording() :
    MeiElement("recording"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_DataPointing(this),
    m_MediaBounds(this),
    m_MetadataPointing(this),
    m_StartId(this)
{
}
REGISTER_DEFINITION(mei::Recording, "recording");
mei::Recording::~Recording() {}
mei::Recording::Recording(const Recording& other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_DataPointing(this),
    m_MediaBounds(this),
    m_MetadataPointing(this),
    m_StartId(this)
{
}

/* include <recording> */

mei::When::When() :
    MeiElement("when"),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_DataPointing(this)
{
}
REGISTER_DEFINITION(mei::When, "when");
mei::When::~When() {}
mei::When::When(const When& other) :
    MeiElement(other),
    m_Basic(this),
    m_Labelled(this),
    m_Linking(this),
    m_NNumberLike(this),
    m_Responsibility(this),
    m_Typed(this),
    m_Classed(this),
    m_DataPointing(this)
{
}

MeiAttribute* mei::When::getAbsolute() {
    if (!hasAttribute("absolute")) {
        return NULL;
    }
    return getAttribute("absolute");
};

void mei::When::setAbsolute(std::string _absolute) {
    MeiAttribute *a = new MeiAttribute("absolute", _absolute);
    addAttribute(a);
};

bool mei::When::hasAbsolute() {
    return hasAttribute("absolute");
};

void mei::When::removeAbsolute() {
    removeAttribute("absolute");
};
MeiAttribute* mei::When::getInterval() {
    if (!hasAttribute("interval")) {
        return NULL;
    }
    return getAttribute("interval");
};

void mei::When::setInterval(std::string _interval) {
    MeiAttribute *a = new MeiAttribute("interval", _interval);
    addAttribute(a);
};

bool mei::When::hasInterval() {
    return hasAttribute("interval");
};

void mei::When::removeInterval() {
    removeAttribute("interval");
};
MeiAttribute* mei::When::getAbstype() {
    if (!hasAttribute("abstype")) {
        return NULL;
    }
    return getAttribute("abstype");
};

void mei::When::setAbstype(std::string _abstype) {
    MeiAttribute *a = new MeiAttribute("abstype", _abstype);
    addAttribute(a);
};

bool mei::When::hasAbstype() {
    return hasAttribute("abstype");
};

void mei::When::removeAbstype() {
    removeAttribute("abstype");
};
MeiAttribute* mei::When::getInttype() {
    if (!hasAttribute("inttype")) {
        return NULL;
    }
    return getAttribute("inttype");
};

void mei::When::setInttype(std::string _inttype) {
    MeiAttribute *a = new MeiAttribute("inttype", _inttype);
    addAttribute(a);
};

bool mei::When::hasInttype() {
    return hasAttribute("inttype");
};

void mei::When::removeInttype() {
    removeAttribute("inttype");
};
MeiAttribute* mei::When::getSince() {
    if (!hasAttribute("since")) {
        return NULL;
    }
    return getAttribute("since");
};

void mei::When::setSince(std::string _since) {
    MeiAttribute *a = new MeiAttribute("since", _since);
    addAttribute(a);
};

bool mei::When::hasSince() {
    return hasAttribute("since");
};

void mei::When::removeSince() {
    removeAttribute("since");
};
/* include <when> */



