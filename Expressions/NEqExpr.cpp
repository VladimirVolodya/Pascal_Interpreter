#include "NEqExpr.h"

NEqExpr::NEqExpr(BaseExpr *p_lhs, BaseExpr *p_rhs) : p_lhs(p_lhs), p_rhs(p_rhs) {}

NEqExpr::~NEqExpr() {
    delete p_lhs;
    delete p_rhs;
}

var_t NEqExpr::Accept(Visitor &visitor) {
    return visitor.Visit(this);
}