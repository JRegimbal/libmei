#include "mensuralmixins.h"

#include <string>
/* #include_block */
using std::string;
using mei::MeiAttribute;

mei::LigatureLogMixIn::LigatureLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::LigatureLogMixIn::~LigatureLogMixIn() {}
MeiAttribute* mei::LigatureLogMixIn::getForm() {
    if (!b->hasAttribute("form")) {
        return NULL;
    }
    return b->getAttribute("form");
};

void mei::LigatureLogMixIn::setForm(std::string _form) {
    MeiAttribute *a = new MeiAttribute("form", _form);
    b->addAttribute(a);
};

bool mei::LigatureLogMixIn::hasForm() {
    return b->hasAttribute("form");
};

void mei::LigatureLogMixIn::removeForm() {
    b->removeAttribute("form");
};

/* include <formmixin> */
mei::MensuralLogMixIn::MensuralLogMixIn(MeiElement *b) {
    this->b = b;
};

mei::MensuralLogMixIn::~MensuralLogMixIn() {}
MeiAttribute* mei::MensuralLogMixIn::getMensurDot() {
    if (!b->hasAttribute("mensur.dot")) {
        return NULL;
    }
    return b->getAttribute("mensur.dot");
};

void mei::MensuralLogMixIn::setMensurDot(std::string _mensurdot) {
    MeiAttribute *a = new MeiAttribute("mensur.dot", _mensurdot);
    b->addAttribute(a);
};

bool mei::MensuralLogMixIn::hasMensurDot() {
    return b->hasAttribute("mensur.dot");
};

void mei::MensuralLogMixIn::removeMensurDot() {
    b->removeAttribute("mensur.dot");
};
MeiAttribute* mei::MensuralLogMixIn::getMensurSign() {
    if (!b->hasAttribute("mensur.sign")) {
        return NULL;
    }
    return b->getAttribute("mensur.sign");
};

void mei::MensuralLogMixIn::setMensurSign(std::string _mensursign) {
    MeiAttribute *a = new MeiAttribute("mensur.sign", _mensursign);
    b->addAttribute(a);
};

bool mei::MensuralLogMixIn::hasMensurSign() {
    return b->hasAttribute("mensur.sign");
};

void mei::MensuralLogMixIn::removeMensurSign() {
    b->removeAttribute("mensur.sign");
};
MeiAttribute* mei::MensuralLogMixIn::getMensurSlash() {
    if (!b->hasAttribute("mensur.slash")) {
        return NULL;
    }
    return b->getAttribute("mensur.slash");
};

void mei::MensuralLogMixIn::setMensurSlash(std::string _mensurslash) {
    MeiAttribute *a = new MeiAttribute("mensur.slash", _mensurslash);
    b->addAttribute(a);
};

bool mei::MensuralLogMixIn::hasMensurSlash() {
    return b->hasAttribute("mensur.slash");
};

void mei::MensuralLogMixIn::removeMensurSlash() {
    b->removeAttribute("mensur.slash");
};
MeiAttribute* mei::MensuralLogMixIn::getProportNum() {
    if (!b->hasAttribute("proport.num")) {
        return NULL;
    }
    return b->getAttribute("proport.num");
};

void mei::MensuralLogMixIn::setProportNum(std::string _proportnum) {
    MeiAttribute *a = new MeiAttribute("proport.num", _proportnum);
    b->addAttribute(a);
};

bool mei::MensuralLogMixIn::hasProportNum() {
    return b->hasAttribute("proport.num");
};

void mei::MensuralLogMixIn::removeProportNum() {
    b->removeAttribute("proport.num");
};
MeiAttribute* mei::MensuralLogMixIn::getProportNumbase() {
    if (!b->hasAttribute("proport.numbase")) {
        return NULL;
    }
    return b->getAttribute("proport.numbase");
};

void mei::MensuralLogMixIn::setProportNumbase(std::string _proportnumbase) {
    MeiAttribute *a = new MeiAttribute("proport.numbase", _proportnumbase);
    b->addAttribute(a);
};

bool mei::MensuralLogMixIn::hasProportNumbase() {
    return b->hasAttribute("proport.numbase");
};

void mei::MensuralLogMixIn::removeProportNumbase() {
    b->removeAttribute("proport.numbase");
};

/* include <proport.numbasemixin> */
mei::MensuralSharedMixIn::MensuralSharedMixIn(MeiElement *b) {
    this->b = b;
};

mei::MensuralSharedMixIn::~MensuralSharedMixIn() {}
MeiAttribute* mei::MensuralSharedMixIn::getModusmaior() {
    if (!b->hasAttribute("modusmaior")) {
        return NULL;
    }
    return b->getAttribute("modusmaior");
};

void mei::MensuralSharedMixIn::setModusmaior(std::string _modusmaior) {
    MeiAttribute *a = new MeiAttribute("modusmaior", _modusmaior);
    b->addAttribute(a);
};

bool mei::MensuralSharedMixIn::hasModusmaior() {
    return b->hasAttribute("modusmaior");
};

void mei::MensuralSharedMixIn::removeModusmaior() {
    b->removeAttribute("modusmaior");
};
MeiAttribute* mei::MensuralSharedMixIn::getModusminor() {
    if (!b->hasAttribute("modusminor")) {
        return NULL;
    }
    return b->getAttribute("modusminor");
};

void mei::MensuralSharedMixIn::setModusminor(std::string _modusminor) {
    MeiAttribute *a = new MeiAttribute("modusminor", _modusminor);
    b->addAttribute(a);
};

bool mei::MensuralSharedMixIn::hasModusminor() {
    return b->hasAttribute("modusminor");
};

void mei::MensuralSharedMixIn::removeModusminor() {
    b->removeAttribute("modusminor");
};
MeiAttribute* mei::MensuralSharedMixIn::getProlatio() {
    if (!b->hasAttribute("prolatio")) {
        return NULL;
    }
    return b->getAttribute("prolatio");
};

void mei::MensuralSharedMixIn::setProlatio(std::string _prolatio) {
    MeiAttribute *a = new MeiAttribute("prolatio", _prolatio);
    b->addAttribute(a);
};

bool mei::MensuralSharedMixIn::hasProlatio() {
    return b->hasAttribute("prolatio");
};

void mei::MensuralSharedMixIn::removeProlatio() {
    b->removeAttribute("prolatio");
};
MeiAttribute* mei::MensuralSharedMixIn::getTempus() {
    if (!b->hasAttribute("tempus")) {
        return NULL;
    }
    return b->getAttribute("tempus");
};

void mei::MensuralSharedMixIn::setTempus(std::string _tempus) {
    MeiAttribute *a = new MeiAttribute("tempus", _tempus);
    b->addAttribute(a);
};

bool mei::MensuralSharedMixIn::hasTempus() {
    return b->hasAttribute("tempus");
};

void mei::MensuralSharedMixIn::removeTempus() {
    b->removeAttribute("tempus");
};

/* include <tempusmixin> */
mei::NoteAnlMensuralMixIn::NoteAnlMensuralMixIn(MeiElement *b) {
    this->b = b;
};

mei::NoteAnlMensuralMixIn::~NoteAnlMensuralMixIn() {}
MeiAttribute* mei::NoteAnlMensuralMixIn::getLig() {
    if (!b->hasAttribute("lig")) {
        return NULL;
    }
    return b->getAttribute("lig");
};

void mei::NoteAnlMensuralMixIn::setLig(std::string _lig) {
    MeiAttribute *a = new MeiAttribute("lig", _lig);
    b->addAttribute(a);
};

bool mei::NoteAnlMensuralMixIn::hasLig() {
    return b->hasAttribute("lig");
};

void mei::NoteAnlMensuralMixIn::removeLig() {
    b->removeAttribute("lig");
};

/* include <ligmixin> */
mei::RestVisMensuralMixIn::RestVisMensuralMixIn(MeiElement *b) {
    this->b = b;
};

mei::RestVisMensuralMixIn::~RestVisMensuralMixIn() {}
MeiAttribute* mei::RestVisMensuralMixIn::getSpaces() {
    if (!b->hasAttribute("spaces")) {
        return NULL;
    }
    return b->getAttribute("spaces");
};

void mei::RestVisMensuralMixIn::setSpaces(std::string _spaces) {
    MeiAttribute *a = new MeiAttribute("spaces", _spaces);
    b->addAttribute(a);
};

bool mei::RestVisMensuralMixIn::hasSpaces() {
    return b->hasAttribute("spaces");
};

void mei::RestVisMensuralMixIn::removeSpaces() {
    b->removeAttribute("spaces");
};

/* include <spacesmixin> */


