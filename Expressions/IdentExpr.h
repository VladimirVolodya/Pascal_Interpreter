#ifndef PARSEREXAMPLE_IDENTEXPR_H
#define PARSEREXAMPLE_IDENTEXPR_H

#include "BaseElements/BaseExpr.h"

#include "string"

class IdentExpr : public BaseExpr {
  public:
    std::string var_name_;
    explicit IdentExpr(std::string  var_name_);
    var_t Accept(Visitor& visitor) override;
};


#endif //PARSEREXAMPLE_IDENTEXPR_H
