#ifndef DEWALLS_WALLSUNITS_H
#define DEWALLS_WALLSUNITS_H

#include <QSharedData>
#include <QSharedDataPointer>
#include <QString>
#include <QStringList>
#include <QList>
#include <QDateTime>
#include "unitizeddouble.h"
#include "length.h"
#include "angle.h"
#include "wallstypes.h"
#include "math.h"

namespace dewalls {

class WallsUnitsData : public QSharedData
{
public:
    typedef UnitizedDouble<Length> ULength;
    typedef UnitizedDouble<Angle> UAngle;

    WallsUnitsData();

    VectorType vectorType;
    QList<CtElement> ctOrder;
    QList<RectElement> rectOrder;
    Length::Unit dUnit;
    Length::Unit sUnit;
    Angle::Unit aUnit;
    Angle::Unit abUnit;
    Angle::Unit vUnit;
    Angle::Unit vbUnit;
    UAngle decl;
    UAngle grid;
    UAngle rect;
    ULength incd;
    UAngle inca;
    UAngle incab;
    UAngle incv;
    UAngle incvb;
    ULength incs;
    ULength inch;
    bool typeabCorrected;
    UAngle typeabTolerance;
    bool typeabNoAverage;
    bool typevbCorrected;
    UAngle typevbTolerance;
    bool typevbNoAverage;
    CaseType case_;
    LrudType lrud;
    QList<LrudElement> lrudOrder;
    QList<TapingMethodElement> tape;
    QString flag;
    QStringList prefix;
    double uvh;
    double uvv;
};

class WallsUnits
{
public:
    typedef UnitizedDouble<Length> ULength;
    typedef UnitizedDouble<Angle> UAngle;

    WallsUnits();

    inline VectorType vectorType() const { return d->vectorType; }
    inline QList<CtElement> ctOrder() const { return d->ctOrder; }
    inline QList<RectElement> rectOrder() const { return d->rectOrder; }
    inline Length::Unit dUnit() const { return d->dUnit; }
    inline Length::Unit sUnit() const { return d->sUnit; }
    inline Angle::Unit aUnit() const { return d->aUnit; }
    inline Angle::Unit abUnit() const { return d->abUnit; }
    inline Angle::Unit vUnit() const { return d->vUnit; }
    inline Angle::Unit vbUnit() const { return d->vbUnit; }
    inline UAngle decl() const { return d->decl; }
    inline UAngle grid() const { return d->grid; }
    inline UAngle rect() const { return d->rect; }
    inline ULength incd() const { return d->incd; }
    inline UAngle inca() const { return d->inca; }
    inline UAngle incab() const { return d->incab; }
    inline UAngle incv() const { return d->incv; }
    inline UAngle incvb() const { return d->incvb; }
    inline ULength incs() const { return d->incs; }
    inline ULength inch() const { return d->inch; }
    inline bool typeabCorrected() const { return d->typeabCorrected; }
    inline UAngle typeabTolerance() const { return d->typeabTolerance; }
    inline bool typeabNoAverage() const { return d->typeabNoAverage; }
    inline bool typevbCorrected() const { return d->typevbCorrected; }
    inline UAngle typevbTolerance() const { return d->typevbTolerance; }
    inline bool typevbNoAverage() const { return d->typevbNoAverage; }
    inline CaseType case_() const { return d->case_; }
    inline LrudType lrud() const { return d->lrud; }
    inline QList<LrudElement> lrudOrder() const { return d->lrudOrder; }
    inline QList<TapingMethodElement> tape() const { return d->tape; }
    inline QString flag() const { return d->flag; }
    inline QStringList prefix() const { return d->prefix; }
    inline double uvh() const { return d->uvh; }
    inline double uvv() const { return d->uvv; }

    inline void setVectorType(VectorType vectorType) { d->vectorType = vectorType; }
    inline void setCtOrder(QList<CtElement> ctOrder) { d->ctOrder = ctOrder; }
    inline void setRectOrder(QList<RectElement> rectOrder) { d->rectOrder = rectOrder; }
    inline void setDUnit(Length::Unit dUnit) { d->dUnit = dUnit; }
    inline void setSUnit(Length::Unit sUnit) { d->sUnit = sUnit; }
    inline void setAUnit(Angle::Unit aUnit) { d->aUnit = aUnit; }
    inline void setAbUnit(Angle::Unit abUnit) { d->abUnit = abUnit; }
    inline void setVUnit(Angle::Unit vUnit) { d->vUnit = vUnit; }
    inline void setVbUnit(Angle::Unit vbUnit) { d->vbUnit = vbUnit; }
    inline void setDecl(UAngle decl) { d->decl = decl; }
    inline void setGrid(UAngle grid) { d->grid = grid; }
    inline void setRect(UAngle rect) { d->rect = rect; }
    inline void setIncd(ULength incd) { d->incd = incd; }
    inline void setInca(UAngle inca) { d->inca = inca; }
    inline void setIncab(UAngle incab) { d->incab = incab; }
    inline void setIncv(UAngle incv) { d->incv = incv; }
    inline void setIncvb(UAngle incvb) { d->incvb = incvb; }
    inline void setIncs(ULength incs) { d->incs = incs; }
    inline void setInch(ULength inch) { d->inch = inch; }
    inline void setTypeabCorrected(bool typeabCorrected) { d->typeabCorrected = typeabCorrected; }
    inline void setTypeabTolerance(UAngle typeabTolerance) { d->typeabTolerance = typeabTolerance; }
    inline void setTypeabNoAverage(bool typeabNoAverage) { d->typeabNoAverage = typeabNoAverage; }
    inline void setTypevbCorrected(bool typevbCorrected) { d->typevbCorrected = typevbCorrected; }
    inline void setTypevbTolerance(UAngle typevbTolerance) { d->typevbTolerance = typevbTolerance; }
    inline void setTypevbNoAverage(bool typevbNoAverage) { d->typevbNoAverage = typevbNoAverage; }
    inline void setCase(CaseType case_) { d->case_ = case_; }
    inline void setLrud(LrudType lrud) { d->lrud = lrud; }
    inline void setLrudOrder(QList<LrudElement> lrudOrder) { d->lrudOrder = lrudOrder; }
    inline void setTape(QList<TapingMethodElement> tape) { d->tape = tape; }
    inline void setFlag(QString flag) { d->flag = flag; }
    inline void setPrefix(QStringList prefix) { d->prefix = prefix; }
    inline void setUvh(double uvh) { d->uvh = uvh; }
    inline void setUvv(double uvv) { d->uvv = uvv; }

    void setPrefix(int index, QString newPrefix);
    QString processStationName(QString name) const;

    QString lrudOrderString() const;

    void rectToCt(ULength north, ULength east, ULength up, ULength& distance, UAngle& azm, UAngle& inc) const;
    void applyHeightCorrections(ULength& dist, UAngle& fsInc, UAngle& bsInc, ULength ih, ULength th) const;
    ULength correctLength(ULength dist, ULength correction) const;
    UAngle avgInc(UAngle fsInc, UAngle bsInc) const;
    static bool isVertical(UAngle angle);
    static bool isVertical(UAngle fsInc, UAngle bsInc);

private:
    QSharedDataPointer<WallsUnitsData> d;
};

} // namespace dewalls

#endif // DEWALLS_WALLSUNITS_H
