#pragma once

#include "parsFuncs.hpp"

class requestLine
{
    private :
        MethodType method;
        std::string reqTarget;
        std::string httpVers;
        std::map<std::string, std::string> params;
        void splitParamsFromReqTarget();
    public :
        requestLine(){};
        requestLine(const std::string requestLine);
        void setMethod(const std::string method);
        void setReqTarget(const std::string url);
        void setHttpVers(const std::string vers);
        MethodType getMethod();
        std::string getReqTarget();
        std::string getHttpVers();
        std::map<std::string, std::string> getParams();
};
