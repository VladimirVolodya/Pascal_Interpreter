#include "ModExpr.h"

ModExpr::~ModExpr() {
    delete p_lhs;
    delete p_rhs;
}

var_t ModExpr::Accept(Visitor &visitor) {
    return visitor.Visit(this);
}

ModExpr::ModExpr(BaseExpr *p_lhs, BaseExpr *p_rhs) : p_lhs(p_lhs), p_rhs(p_rhs) {}
